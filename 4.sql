CREATE DATABASE streaming;
USE streaming;
CREATE TABLE category_tb(
    id int primary key auto_increment,
    name varchar(255) not null
);

CREATE TABLE video_tb(
	id int primary key auto_increment,
	title varchar(255) not null,
	category_id int not null,
	attache varchar(255) not null,
	thumbnail varchar(255) not null,
    foreign key (category_id) references category_tb(id)
);
	
INSERT INTO category_tb VALUES
(1, 'Komedi'),
(2, 'Aksi'),
(3, 'Misteri');

INSERT INTO video_tb VALUES
(1, 'Bad Boys For Life', 1, 'https://youtube.com', 'Film1'),
(2, 'Point Blank', 2, 'https://youtube.com', 'Film2'),
(3, 'Sherlock Holmes', 3, 'https://youtube.com', 'Film3');

SELECT * FROM video_tb;
SELECT * FROM category_tb;

SELECT * FROM video_tb WHERE category_id = 1;

SELECT *
FROM video_tb
INNER JOIN category_tb ON video_tb.category_id = category_tb.id;

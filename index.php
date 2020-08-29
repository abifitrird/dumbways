<?php
// Create database connection using config file
include_once("config.php");

// Fetch all users data from database
$result = mysqli_query($mysqli, "SELECT * FROM video_tb ORDER BY title ASC");
?>

<html>

<head>
    <title>Streaming Video</title>
</head>

<body>
    <a href="addVideo.php">Add Video</a><br />
    <a href="addCategory.php">Add Category</a><br /><br />
    <table width='80%' border=1>

        <tr>
            <th>Name</th>
            <th>Mobile</th>
            <th>Email</th>
            <th>Update</th>
        </tr>
        <?php
        while ($video_data = mysqli_fetch_array($result)) {
            echo "<tr>";
            echo "<td>" . $video_data['title'] . "</td>";
            echo "<td>" . $video_data['category_id'] . "</td>";
            echo "<td><a href='edit.php?id=$video_data[id]'>Edit</a> | <a href='delete.php?id=$video_data[id]'>Delete</a></td></tr>";
        }
        ?>
    </table>
</body>

</html>
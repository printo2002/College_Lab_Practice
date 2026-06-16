<html>
<head>
<title>delete form</title>
</head>
<body>
<h1>View Record<br></h1>
<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "mydatabase";
$conn = mysqli_connect($servername, $username, $password, $dbname);
if (!$conn)
{
die("Connection failed: " . mysqli_connect_error());
}
$sql = "SELECT * FROM MyGuest";
$result = mysqli_query($conn, $sql);
if (mysqli_num_rows($result) > 0)
{
while($row = mysqli_fetch_assoc($result))
{
echo "id: " . $row["id"]. "<br> Name: " . $row["firstname"]. " " .
$row["lastname"]."<br>"." Email:".$row["email"]." <br>Registration
Date:".$row["reg_date"]. "<br>";
}
}
else
{
echo "0 results";
}
echo "<html>
<head>
<title>Form</title>
<body>
<h1>Form</h1>
<h2>Enter the value of Id to Delete </h2>
<form action='deletetable.php' method='POST'>
id:<input type='text' name='id' /><br><br>
<input type='submit' value='Submit' />
</form>
</body>
</html>";
mysqli_close($conn);
?>
</body>
</html>
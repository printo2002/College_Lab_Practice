<html>
<head>
<title>Update form page</title>
</head>
<body>
<h1>Data Before Updation<br></h1>
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
$row["lastname"]."<br>"." Email:".$row["email"]."<br> Registration
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
<h2>Data to be updated</h2>
<form action='updatedata.php' method='POST'>
First Name:<input type='text' name='firstname' /><br><br>
id:<input type='text' name='id' /><br><br>
<input type='submit' value='Submit' />
</form>
</body>
</html>
";
mysqli_close($conn);
?>
</body>
</html>

<html>
<head>
<title>Updated data</title>
</head>
<body>
<h1>Data After Updation <br></h1>
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
$sql = "UPDATE MyGuest SET firstname='$_POST[firstname]' WHERE id='$_POST[id]'";
if (mysqli_query($conn, $sql))
{
echo "Record updated successfully";
echo "<br><br>";
echo "<b><u>Updated Data</u></b>";
echo "<br>";
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
}
else
{
echo "Error updating record: " . mysqli_error($conn);
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
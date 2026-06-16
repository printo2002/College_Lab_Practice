<html> 
<head> 
    <title>Database</title> 
</head> 
<body> 
    <h1>Create Database<br></h1> 
<?php 
$servername = "localhost"; 
$username = "root"; 
$password = ""; 
$conn = mysqli_connect($servername, $username, $password); 
if (!$conn){ 
     die("Connection failed: ". mysqli_connect_error()); 
   } 
$sql = "CREATE DATABASE databasei"; 
if (mysqli_query($conn, $sql)){ 
     echo "Database created successfully"; 
   }else{ 
     echo "Error creating database: " . mysqli_error($conn); 
   } 
mysqli_close($conn); 
?> 
</body> 
</html> 

<!--If you refresh again  causes error -->
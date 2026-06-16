<html> 
<head> 
    <title>Table</title> 
</head> 
<body> 
    <h1>Create Table<br></h1> 
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
$sql = "CREATE TABLE MyGuest 
( 
id INT(6) UNSIGNED AUTO_INCREMENT PRIMARY KEY, 
firstname VARCHAR(30) NOT NULL, 
lastname VARCHAR(30) NOT NULL, 
email VARCHAR(50), 
reg_date TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE 
CURRENT_TIMESTAMP 
)"; 
 
if (mysqli_query($conn, $sql))  
  { 
    echo "Table MyGuests created successfully"; 
  }  
else  
  { 
    echo "Error creating table: " . mysqli_error($conn); 
  }
  mysqli_close($conn); 
?> 
</body> 
</html>
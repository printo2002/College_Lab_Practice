<html> 
<head> 
    <title>Form</title> 
</head> 
<body> 
    <h1>Form Input Data<br></h1> 
<?php 
$servername = "localhost"; 
$username = "root"; 
$password = ""; 
$dbname = "mydatabase"; 
$conn = mysqli_connect($servername, $username, $password, $dbname); 
if (!$conn) 
   { 
     die("Connection failed: ".mysqli_connect_error()); 
   } 
$sql="INSERT INTO MyGuest(firstname,lastname,email)VALUES('$_POST[firstname]','$_POST[lastname]','$_POST[email]')"; 
if (mysqli_query($conn, $sql))  
   { 
     echo "New record added successfully"."<br>"; 
   }  
else  
   { 
     echo "Error:".$sql."<br>".mysqli_error($conn); 
   } 
print_r($_POST); 


echo "
    
<html> 
    <head> 
        <title>Form</title> 
    </head> 
<body> 
<h1>Form</h1> 
<form action='insertguest.php' method='POST'> 
   First Name : <input type='text' name='firstname' /><br><br> 
   Last Name : <input type='text' name='lastname' /><br><br> 
   Email : <input type='email' name='email' /></br><br> 
   <input type='submit' value='Submit' /> 
</form> 
</body> 
</html>
    ";
mysqli_close($conn) 

?> 
</body> 
</html> 
<html> 
<head> 
    <title>Cookies</title> 
</head> 
<body> 
    <h1>Last Visit Timestamp Information<br></h1> 
<?php 
setcookie("lastdate",date("m/d/y H:i:s"),time()+(30*24*60*60)); 
if(isset($_COOKIE["lastdate"])) 
{ 
    $var=$_COOKIE["lastdate"]; 
    echo"your last visit was $var";  
} 
else 
    echo"Welcome"."<br/>"; 
?> 
</body> 
</html> 

<html> 
<head> 
    <title>Session</title> 
</head> 
<body> 
    <h1>Page Visit Counter</h1> 
<?php 
session_start(); 
if(isset($_SESSION['count'])) 
    $_SESSION['count']+=1; 
else 
    $_SESSION['count']=1; 
    $msg="You have visited this page ".$_SESSION['count']." times in this session."; 
 
echo $msg; 
?> 
</body> 
</html> 
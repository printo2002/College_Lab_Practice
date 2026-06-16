
<!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title>View Data</title>
    </head>
    <body>
        <h1>View Records <br> </h1>
        <?php
        $servername = "localhost";
        $username = "root";
        $password = "";
        $dbname = "mydatabase";
        $conn = mysqli_connect($servername,$username,$password,$dbname);
        if(!$conn)
        {
            die("Connection failed:" .mysqli_connect_error());
        }
        
        $sql = "SELECT * FROM MyGuest";
        $result = mysqli_query($conn, $sql);
        if (mysqli_num_rows($result) > 0)
        {
            while($row = mysqli_fetch_assoc($result))
            {
                echo "id: ".$row["id"]."<br> Name: ".$row["firstname"]."".
                $row['lastname']."<br>"."Email: ".$row["email"]."<br>
                registration Date: ".$row["reg_date"]."<br>";
            }
        }
        
        if(mysqli_query($conn, $sql)){
            echo 'New record added successfully'.'<br>';
        }
        else{
            echo 'Error:".$sqli."<br>'.mysqli_error($conn);
        }
        print_r($_POST);
        mysqli_close($conn);
        ?>
    </body>
</html>

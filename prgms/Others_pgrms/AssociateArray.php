<html>
    <head>
        <title> Array sorting </title>
    </head>
    <body> 
        <h1> Array sorting </h1>
        <?php
            $assocArray = array("Amal" => 50,
                "yedhu" => 30,
                "kelvin" => 20,
                "Rahul" => 40,
                );
                echo "original Array\n";
                print_r($assocArray);
                echo "<br>";
                echo "<br>";
                
                asort($assocArray);
                echo "sorted by value asc order \n";
                print_r($assocArray);
                echo "<br>";
                echo "<br>";
                
                
                arsort($assocArray);
                echo "sorted by value desc order \n";
                print_r($assocArray);
                echo "<br>";
                echo "<br>";
                
                ksort($assocArray);
                echo "sorted by key asc order--- \n";
                print_r($assocArray);
                echo "<br>";
                echo "<br>";
                
                krsort($assocArray);
                echo "sorted by key desc order--- \n";
                print_r($assocArray);
                echo "<br>";
                echo "<br>";

        ?>

</html>
  



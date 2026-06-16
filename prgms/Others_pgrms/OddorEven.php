<!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title>odd or even </title>
    </head>
    <body>
        <h1> Check Odd or Even </h1>
        <?php
        
            $number= 10;
            echo "Number: $number <br>";

            if($number % 2 == 0)
            {
                echo "$number is an even number";
            }
            else{
                echo "$number is an odd number";
            }
        
        ?>
    </body>
</html>

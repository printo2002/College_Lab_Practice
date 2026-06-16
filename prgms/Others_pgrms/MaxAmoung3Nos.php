<!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title>Max Among 3 nos </title>
    </head>
    <body>
        <h1> Maximum Among 3 Numbers </h1>
        <?php

        $number1 = 12;
        $number2 = 7;
        $number3 = 15;
        
        echo "Numbers are: $number1, $number2, $number3 <br><br>";

        if ($number1 > $number2 && $number1 > $number3) {
            echo "The largest number is: $number1\n";
        } elseif ($number2 > $number1 && $number2 > $number3) {
            echo "The largest number is: $number2\n";
        } else {
            echo "The largest number is: $number3\n";
        }

        ?>
    </body>
</html>



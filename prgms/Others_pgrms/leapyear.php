<html>
    <head>
        <title>Leap Year or Not </title>
    </head>
    <body>
        <h1> LEAP YEAR </h1>
        <?php
        $year = 2021;
        echo "Year: $year <br>";
        if(($year%400 == 0) || ($year%4 == 0) && ($year%100 != 0 ))
        {
            echo "$year is a leap year";
        }
        else{
            echo "$year is not  leap year";
        }
        ?>
    </body>
</html>


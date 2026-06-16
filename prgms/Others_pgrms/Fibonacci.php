<!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title>Fibonacci Series</title>
    </head>
    <body>
        <h1> Fibonacci Series up to a Limit </h1>
        <?php
        $first = 0;
        $second = 1;
        $limit = 10;
                    
        echo "<b> Fibonacci Series up to  $limit <br></b>";
        for($i=0;$i<=$limit;$i++)
        {
            echo "$first ";
            $next =  $first + $second;
            $first = $second;
            $second = $next;
        }
        
        
        
        ?>
    </body>
</html>


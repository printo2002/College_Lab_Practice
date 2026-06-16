<!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title></title>
    </head>
    <body>
        <h1> Factorial Of a Number </h1>
        <?php
        
        $i;       
        $n=5;
        $f=1;
        
        function factorial($x,$y)
        {
            
            for($i=1;$i<=$x;$i++)
            {
              $y = $y * $i;  
            }
            return $y; 
        }
        
        $k = factorial($n,$f);
        
        echo "Factorial of $n is: <b>$k </b>";
        
        ?>
    </body>
</html>

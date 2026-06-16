<!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title></title>
    </head>
    <body>
        <h1> String Handling Functions </h1>
        <?php
            $str1 = "Hello";
            $str2 = "Welcome to PHP !!!";
            echo "String1: "."  "."<b> $str1 </b><br>";
            echo "String2: "."  "."<b> $str2  </b><br>";
            echo "<br>";
            
            
            // strlen() : function returns the length of a  string.
            echo "<b>String Length</b><br>";
            echo "Length of String1 = ".strlen($str1)."<br>";
            echo "Length of String2 = ".strlen($str2)."<br>";
            echo "<br>";
                     
            // String Concatenation : it is done using . dot operator,which combines 2 string into 1.
            echo "<b>String concatenation </b><br>";
            $concat = $str1." ".$str2;
            echo "$concat <br>";
            echo "<br>";
            
            // strcmp() : used to compare 2 strings ,returns 0 if bot strings are equal else returns 1 if not strings are not equal
             echo "<b>String Comparison</b><br>";
             $cmp = strcmp($str1, $str2);
             //echo ($cmp == 0) ? " Strings are equal <br>": " Strings are not equal <br>";
             if ($cmp == 0)
             {
                 echo "Strings are Equal (0)<br>";
             }
             else{
                 echo "Strings are not equal (1)<br>";
             }
             
             echo "<br>";
             
            // String Copy : it is done using = assignment operator.
            echo "<b>String Copy </b><br>";
            $strcopy = $str1;
            echo "Copied String is: $strcopy <br>";
            echo "<br>";
           
            // strrev() : returns the reverse of the string
            echo "<b>String Reverse </b><br>";
            echo "Reversed String1: ". strrev($str1) ."<br>";
            echo "<br>";
             
            // strtoupper() : returns the upper case of the string
            echo "<b>String to Upper Case </b><br>";
            echo "Upper Case of String1: ". strtoupper($str1) ."<br>";
            echo "<br>";
            
            // strtolower() : returns the lower case of the string
            echo "<b>String to Lower Case </b><br>";
            echo "Lower Case of String2: ". strtolower($str2) ."<br>";
            echo "<br>";
            
            
        ?>
    </body>
</html>


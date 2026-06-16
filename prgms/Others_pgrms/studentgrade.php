<!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title></title>
    </head>
    <body>
        <h1> Student Grade </h1>
        <?php
         $mark = 60;
         echo "Student's Mark: <b>$mark</b> <br>";
         if($mark > 90)
         {
             echo "Student secured <b>A</b> Grade.";
         }
         elseif($mark > 80 && $mark <= 90) 
         {
             echo "Student secured <b>B</b> Grade.";
         }
         elseif($mark > 70 && $mark <= 80) 
         {
             echo "Student secured <b>C</b> Grade.";
         }
         elseif($mark >= 50 && $mark <= 70) 
         {
             echo "Student secured <b>D</b> Grade.";
         }
         elseif($mark < 50) 
         {
             echo "Student <b>Failed</b> in the exam.";
         }
        ?>
    </body>
</html>

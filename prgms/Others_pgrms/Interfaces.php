<!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title>Interfaces</title>
    </head>
    <body>
        <h1> Interfaces </h1>
        <?php
        interface Animal{
            public function sound();
        }
        class Dog implements Animal{
            public function sound()
            {
                echo "woof ..... woof";
            }
        }
        $myDog = new Dog();
        echo "<strong>Dog's sound: </strong>";
        $myDog->sound();
        ?>
    </body>
</html>



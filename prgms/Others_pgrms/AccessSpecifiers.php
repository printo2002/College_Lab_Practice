<html>
    <head>
        <title> Access Specifier </title>
    </head>
    <body>
        
        <h1>Access Specifier - Public,Private,Protected</h1>
        <?php
        class Fruits
        {
            public $name;
            protected $color;
            private $weight;
            
            function setName($n)
            {
                echo "Name: $n <br>";
            }
            
            function setColor($c)
            {
                echo "Color: $c <br>";
            }
            
            function setWeight($w)
            {
                echo "Weight: $w (Access Restricted) <br>";
            }
        }
        
        $fruit = new Fruits();
        $fruit->setName("Apple");
        $fruit->setColor("Red");
        $fruit->setWeight("200");
        ?>
    </body>
</html>
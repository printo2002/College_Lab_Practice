<!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title></title>
    </head>
    <body>
        <h1> Constructor & Destructor </h1>
           <?php

                class Car {
                    public $name;

                    // Constructor: Runs when object is created
                    public function __construct($name) {
                        $this->name = $name;
                        echo "Constructor: " . $this->name . " created. <br>";
                    }

                    // Destructor: Runs when object is destroyed
                    public function __destruct() {
                        echo "Destructor: " . $this->name . " destroyed. <br>";
                    }
                }

                // Creating object (triggers __construct)
                $car = new Car("Toyota");

                echo "Doing some work... <br>";

                // Destroying object (triggers __destruct)
                unset($car);

                echo "End Program. <br>";

            ?>

    </body>
</html>



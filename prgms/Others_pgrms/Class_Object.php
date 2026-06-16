<!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title></title>
    </head>
    <body>
        <h1> Class & Object  </h1>
        <?php
        class Car 
        {
            
            public $brand;
            public $model;
            
            public function __construct($brand, $model) {
                $this->brand = $brand;
                $this->model = $model;
            }

            public function display() {
                return "This car is a " . $this->brand . " " . $this->model . ".  <br><br>";
            }
        }


        $myCar = new Car("Toyota", "Corolla");
        $anotherCar = new Car("Honda", "Civic");


        echo $myCar->display();    
        echo "\n";
        echo $anotherCar->display();
        ?>
    </body>
</html>









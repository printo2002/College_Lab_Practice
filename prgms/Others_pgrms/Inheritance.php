<!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title></title>
    </head>
    <body>
        <h1> Inheritance </h1>
        <?php

        // Parent Class
        class Animal {
            public string $name;

            public function __construct(string $name) {
                $this->name = $name;
            }

            public function speak(): string {
                return "{$this->name} makes a sound:<br>";
            }
        }

        // Child Class 1
        class Dog extends Animal {
            public function speak(): string {
                return "{$this->name} says: Woof!<br>";
            }
        }

        // Child Class 2
        class Cat extends Animal {
            public function speak(): string {
                return "{$this->name} says: Meow!<br>";
            }
        }

        // --- Run it ---
        $animal = new Animal("Animal");
        $dog    = new Dog("Dog");
        $cat    = new Cat("Cat");

        echo $animal->speak();
        echo $dog->speak();
        echo $cat->speak();

        ?>
    </body>
</html>

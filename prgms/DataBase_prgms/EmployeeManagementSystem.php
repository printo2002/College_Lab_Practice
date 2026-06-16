<?php
$conn = mysqli_connect("localhost", "root", "");

if (!$conn) {
    die("Connection Failed");
}

/* Create Database */
mysqli_query($conn, "CREATE DATABASE IF NOT EXISTS employee");

/* Select Database */
mysqli_select_db($conn, "employee");

/* Create Table */
mysqli_query($conn, "CREATE TABLE IF NOT EXISTS Emp(
    Empid INT PRIMARY KEY,
    Empname VARCHAR(50),
    Salary FLOAT
)");

/* Insert Record */
if(isset($_POST['insert']))
{
    $id = $_POST['empid'];
    $name = $_POST['empname'];
    $salary = $_POST['salary'];

    $sql = "INSERT INTO Emp VALUES('$id','$name','$salary')";
    mysqli_query($conn, $sql);
    echo "Record Inserted Successfully<br>";
}

/* Update Salary */
if(isset($_POST['update']))
{
    $id = $_POST['empid'];
    $salary = $_POST['salary'];

    $sql = "UPDATE Emp SET Salary='$salary' WHERE Empid='$id'";
    mysqli_query($conn, $sql);
    echo "Salary Updated Successfully<br>";
}

/* Delete Employee */
if(isset($_POST['delete']))
{
    $id = $_POST['empid'];

    $sql = "DELETE FROM Emp WHERE Empid='$id'";
    mysqli_query($conn, $sql);
    echo "Employee Deleted Successfully<br>";
}
?>

<html>
<head>
    <title>Employee Management</title>
</head>
<body>

<h2>Employee Management System</h2>

<form method="post">
    Emp ID:
    <input type="text" name="empid"><br><br>

    Employee Name:
    <input type="text" name="empname"><br><br>

    Salary:
    <input type="text" name="salary"><br><br>

    <input type="submit" name="insert" value="Insert">
    <input type="submit" name="update" value="Update Salary">
    <input type="submit" name="delete" value="Delete Employee">
</form>

<br><br>

<h3>Employee Records</h3>

<table border="1" cellpadding="5">
<tr>
    <th>Emp ID</th>
    <th>Emp Name</th>
    <th>Salary</th>
</tr>

<?php
$result = mysqli_query($conn, "SELECT * FROM Emp");

while($row = mysqli_fetch_assoc($result))
{
    echo "<tr>";
    echo "<td>".$row['Empid']."</td>";
    echo "<td>".$row['Empname']."</td>";
    echo "<td>".$row['Salary']."</td>";
    echo "</tr>";
}
?>
</table>

</body>
</html>

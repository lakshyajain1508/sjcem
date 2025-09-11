CREATE TABLE employees (
    EmployeeID INT,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    HireDate DATE,
    Salary DECIMAL(10, 2),
    Department VARCHAR(50)
);
CREATE TABLE Employees (
    EmployeeID INT,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    HireDate DATE,
    Salary DECIMAL(10, 2),
    Department VARCHAR(50)
);
INSERT INTO Employees (employeeID, firstName, lastName, hireDate, salary, Department)
VALUES
(1, 'Ravi', 'Sharma', '2021-05-12', 55000.00, 'IT'),
(2, 'Sneha', 'Patil', '2022-03-18', 60000.00, 'HR'),
(3, 'Amit', 'Verma', '2020-11-01', 75000.00, 'Finance'),
(4, 'Pooja', 'Nair', '2019-07-23', 50000.00, 'Marketing'),
(5, 'Rahul', 'Kumar', '2023-01-10', 65000.00, 'Sales');
SELECT * FROM employees;
SELECT * 
FROM employees;
SELECT * 
FROM employees;
SELECT * 
FROM employees
WHERE salary> 10000;
-- Create Table Departments
CREATE TABLE Departments (
    dept_id INT PRIMARY KEY,
    dept_name VARCHAR(50) NOT NULL UNIQUE
);
-- inserting values into departments table
INSERT INTO Departments (dept_id, dept_name) VALUES (1, 'Computer Science');
INSERT INTO Departments (dept_id, dept_name) VALUES (2, 'Mathematics');

-- Create Table Students
CREATE TABLE Students (
    student_id INT PRIMARY KEY,
    student_name VARCHAR(100) NOT NULL,
    age INT CHECK (age >= 18 AND age <= 30),
    email VARCHAR(100) UNIQUE,
    dept_id INT,
    CONSTRAINT fk_dept FOREIGN KEY (dept_id) REFERENCES Departments(dept_id),
    enrollment_date DATE DEFAULT CURRENT_DATE
);

-- inserting values into students table
INSERT INTO Students (student_id, student_name, age, email, dept_id) 
VALUES (101, 'Alice Johnson', 22, 'alice@example.com', 1);

INSERT INTO Students VALUES (102, 'Shyam Sharma', 25, 'shyam@gmail.com', 1),
(103, 'Priyanka Kamble', 24, 'priyanka@gmail.com', 2),
(104, 'Pratik Yadav', 27, 'pratik@gmail.com', 2),
(105, 'Darshan Patil', 21, 'darshan@gmail.com', 1);

-- Join two table with the help of dept_id
SELECT 
    s.student_id,
    s.student_name,
    s.age,
    s.email,
    d.dept_name,
    s.enrollment_date
FROM 
    Students s
JOIN 
    Departments d ON s.dept_id = d.dept_id;

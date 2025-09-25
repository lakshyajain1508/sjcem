CREATE TABLE Student(
    student_id INT PRIMARY KEY,
    name VARCHAR(50),
    age INT,
    marks INT
);
INSERT INTO Student (student_id, name, age, marks) VALUES
(1, 'Alice', 20, 85),
(2, 'Bob', 21, 67),
(3, 'Charlie', 22, 95),
(4, 'Diana', 23, 75),
(5, 'Ethan', 20, 55);
CREATE TABLE Courses (
    course_id INT PRIMARY KEY,
    course_name VARCHAR(50),
    student_id INT,
    FOREIGN KEY (student_id) REFERENCES Student(student_id)
);
INSERT INTO Courses (course_id, course_name, student_id) VALUES
(101, 'Math', 1),
(102, 'Physics', 2),
(103, 'Chemistry', 1),
(104, 'Math', 3),
(105, 'Physics', 4);
--Find students who have marks greater than the average marks.
SELECT name, marks
FROM Student
WHERE marks > (SELECT AVG(marks) FROM Student);
-- Find students enrolled in the same courses as student with ID = 1.
SELECT DISTINCT student_id
FROM Courses
WHERE course_name IN (
    SELECT course_name
    FROM Courses
    WHERE student_id = 1
) AND student_id != 1;
-- Find the name of the student with the highest marks.
SELECT name, marks
FROM Student
WHERE marks = (SELECT MAX(marks) FROM Student);
-- Find students who are NOT enrolled in any course.
SELECT name
FROM Student
WHERE student_id NOT IN (
    SELECT DISTINCT student_id
    FROM Courses
);
-- Use a correlated subquery to find students who have more marks than any student in age 20.
SELECT name, marks
FROM Student S
WHERE marks > ALL (
    SELECT marks
    FROM Student
    WHERE age = 20
);

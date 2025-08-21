create table Staff(
 staff_Id int primary key,
 name VARCHAR(50),
 salary int
);
insert into staff values (001,'Ramesh',15000),
 (002,'Suresh',18000),
 (003,'Naina',20000),
 (004,'Reena',21000),
 (005,'Mahesh',12000);
update staff set salary = 18000
where staff_id = 1;
select * from staff;
delete from staff
where staff_id = 1;
alter table staff add age int;
update staff set age = 18
where staff_id = 2;
update staff set age = 19
where staff_id = 3;
update staff set age = 20
where staff_id = 4;
update staff set age = 18
where staff_id = 5;
select * from staff;
SELECT age, COUNT(staff_Id) AS number_of_staff
FROM Staff
GROUP BY age;
SELECT age, AVG(salary) AS average_salary
FROM Staff
GROUP BY age;
SELECT name FROM Staff;
INSERT INTO Staff VALUES (006, 'Priya', 22000, 25);
select * from staff;

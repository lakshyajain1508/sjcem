create table Employee(
 employee_id int primary key,
 name VARCHAR(50),
 age int,
 department VARCHAR(50),
 salary int
);
insert into Employee values(001,'Vedant',22,'Sales',10000);
insert into Employee (employee_id,name,age,department,salary)
values (02,'Rupali',19,'HR',10000),
 (03,'Kamesh',20,'IT',18000),
 (04,'Aryan',22,'Document',13000),
 (05,'Prince',21,'HR',12000);
SELECT * FROM "lakshya"."employee";
update employee set salary = 45000
where employee_id = 1;
delete from employee
where employee_id = 1;
select from employee;
select from employee;
select * from employee;
alter table employee add joint_date date;
select * from employee;
drop table employee;

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
select * from "lakshya"."staff";
update staff set salary = 18000
where staff_id = 1;
delete from staff
where staff_id = 1;
select from staff;
alter table staff add age int;
select * from staff;
update staff set age = 18
where staff_id = 2;
update staff set age = 19
where staff_id = 3;
update staff set age = 20
where staff_id = 4;
update staff set age = 18
where staff_id = 5;
select * from staff;
drop table staff;

# Write your MySQL query statement below
select s1.name as Employee
from employee s1 join employee s2 on s1.managerId = s2.id
where s1.salary > s2.salary
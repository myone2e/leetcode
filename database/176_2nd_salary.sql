-- Second Highest Salary
-- Use max becaus max(none) = Null
select max(Salary) as SecondHighestSalary
from employee
where salary not in 
(select max(salary) from employee);
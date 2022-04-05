--181. Employees Earning More Than Their Managers
-- Self join problem
Select e1.name as Employee -- rename column!
from Employee e1 inner join employee e2
on e1.managerID = e2.ID -- Manager can be also employee!!
where e1.salary > e2.salary
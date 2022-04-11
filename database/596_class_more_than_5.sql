--596. Classes More Than 5 Students
select class
from Courses
group by class -- do not forget to group by non-aggregate cols
having count(student) > 4;
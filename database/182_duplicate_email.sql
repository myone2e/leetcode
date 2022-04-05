-- 182. Find Duplicate email 
-- self join method
Select distinct(p1.email) -- pd.unique()
from Person p1 inner join person p2
on (p1.ID != p2.ID and p1.email = p2.email)
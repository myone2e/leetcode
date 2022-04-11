 --196 delete duplicate emails
 delete from Person
 where id not in
 (select min(id) from person group by email);
-- group by email => duplciate ids => choose min
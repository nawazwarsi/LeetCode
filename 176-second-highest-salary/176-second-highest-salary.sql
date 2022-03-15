SELECT max(salary) AS SecondHighestSalary
FROM Employee
WHERE salary<(SELECT MAX(SALARY) FROM EMPLOYEE)

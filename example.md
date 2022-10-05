---
theme: gaia
class:
  - lead
  - invert
transition: fade
---

# <!-- fit --> CS 199 EMP

### Hosted by Jackie Chan and Akhila Ashokan
**Topics:** Variables/Datatypes, Operations on Variables, and Conditional Statements/Expressions

---

# Course Details

Every Tuesday and Friday, there are two sessions that cover the same topic.

- Session 1 @ 6AM on Tuesdays and Fridays w/ Akhila.
- Session 2 @ 2PM on Tuesdays and 4PM on Fridays w/ Jackie.

---

# Goals of the Course

- Provide extra help and assistance to be successful in the course through practice problems.
- Provide a safe environment to work on problems with others. Coding can be a very solitary activity, but not here. 

---
# Today's Learning Objectives

Review briefly and practice:
- Variables and datatypes
- Operations on variables
- Conditional expressions and statements

Write code on the homepage or any playground on the site!
https://cs125.cs.illinois.edu/

Slides are on the course site!
https://cs199emp.netlify.app/

---
# What are variables?

Variables are buckets that store data. Variable declarations looks like this:
```java
<datatype> <variable name>; // Initializing <variable name>
<variable name> = <value>; // Assigning <variable name>

// Is equivalant to:
<datatype> <variable name> = <value>; // Initializing and assigning <variable_name>
```

Here are some examples of variable declarations.
```java
int myAge = 23; // <datatype> is int (integer)
double pi = 3.14; // <datatype> is double (decimal)
boolean programmingIsAwesome;
programmingIsAwesome = true; // <datatype> is boolean (true/false)
char bestLetter = 'J'; // <datatype> is char (a letter)
```

Questions before practice?

---

# Practice with variables! (5 minutes)

1. Declare a variable called `firstLetter` with the first *letter* of your name.
2. Declare a variable `hadGoodSleep` that is `true` if you had good sleep, and `false` otherwise.
3. Declare a variable `minimumGPA` that is the minimum GPA for your program.
4. Declare a variable `mealsPerDay` with the number of meals you eat per day.

Hint: You'll need to use `int`, `double`, `boolean`, and `char` only once in some order.

---

# What can you do with variables? (Operations)

For integers `int` and decimals `double`:
- Add, subtract, multiply, divide (`+`, `-`, `*`, `/`).
- Add, subtract, multiply, divide and assign (`+=`, `-=`, `*=`, `/=`)
- Increment, i.e. add one, or decrement, i.e. subtract one (`++`, `--`).

For booleans `bool`:
- Negation, pronounced not in code.
```java
boolean havingAGoodTime = true;
boolean notHavingAGoodTime = !havingAGoodTime; // Not having a good time.
```

There are more with `String` too, but this is what we'll deal with.

Questions before practice?

---

# Practice with operations! (10 minutes)

Tracking the number of people in Zoom.
1. Declare a variable `peopleInZoom` that is equal to the number of people in this Zoom call.
2. On the next line, increment `peopleInZoom` by one using `++`.
3. On the next line, add `7` to the variable `peopleInZoom` using `+=`.

Negation practice.
1. Declare a boolean called `drankWater` if you have drank water today.
2. Reassign `drankWater` with the opposite value of `drankWater` using `!`.

---



# What are conditional expressions and statements?

Let's start off with expressions, conditional expressions are like questions that Java will evaluate and return `true` or `false`.
- For `==` are the things on the left and right equal?
- For `>` (`>=`) is the left value greater than the right value? Same goes with `<` and `<=` in the reverse.

Conditional expressions go into conditional statements (otherwise known as if statements).

We'll consider an example on the next page.

---
Consider below.

```java
double mealCost = 3.75 + 8.66; // Another example of an operation.
mealCost *= 1.08; // Using the *= to multiple, and then assign back to mealCost.
boolean mealIsExpensive = mealCost > 10.0; // Is this an expression or statement?

if (mealIsExpensive) { // Is this an expression or statement?
    System.out.println("I'll put that on my business card!");
}

// The above is the same as.

if (mealCost > 10.0) {
    System.out.println("I'll put that on my business card!");
}

```

---

# Practice with conditional expressions and statements! (10 minutes)

1. Declare a variable `myAge` that contains your age.
2. Declare a variable called `canBuyAlcohol` that is true when `myAge` is greater or equal to `21` and false otherwise.
3. Write a conditional statement that prints "Get out of my store!" if `canBuyAlcohol` is false. Reminder that `!` is the negation operator.
4. Add an else statement to the if statement that prints "What can I help you with?". When will this print?

---

# Reminder

If-else statements look like.
```java
if (<expression>) {
    <code to execute if expression is true>;
} else {
    <code to be execute if otherwise>;
}
```

---

# Final, final questions about today's content? Anything!

```java
if (!questions) {
    System.out.println("Have an awesome day!");
    System.out.println("Be sure to mark attendance if that matters, " +
        "leave some feedback!");
}
```

Attendance and feedback links are found on the course site.
https://cs199emp.netlify.app/

--- 

# Solutions Section

---
# Practice with variables! (Solution)
```java
char firstLetter = 'J'; // Note the single quotation.
boolean hadGoodSleep = true; // Note that true and false are lowercased!
double minimumGPA = 3.0;
int mealsPerDay = 3; // Okay, maybe more than that.
```

---

# Practice with operations! (Solution)

Tracking the number of people in Zoom.
```java
int peopleInZoom = 13;
peopleInZoom++;
peopleInZoom += 7; // Notice that I don't need int here again.
```

Negation practice.
```java
boolean drankWater = true;
drankWater = !drankWater; // drankWater is now false.
```

Questions?

---

# Practice with conditional expressions and statements! (Solution)

```c
#include <stdio.h>
//using namespace std
int main()
{
	long t, i, j, x, y, n=0, m;
	scanf("%ld",&t);
    while(t--)
	{
	  scanf("%ld %ld",&n,&m);
	  long a[n+1];
	  for(i=0; i<=n; i++) a[i]=0;
	  long long cnt = 0;
	  for(j=0; j<m; j++)
	  {
	      scanf("%ld %ld",&x,&y);
	      a[x]+=1; a[y]+=1;
	  }
	  if(m<2) 
	  {
	      printf("YES\n");
	  }
	  else if(m==2)
	  {
	      for(i=1; i<=n; i++)
	      {
	          if(a[i]==2) cnt+=1;
	      }
	      if(cnt==1) printf("YES\n");
	      else printf("NO\n");
	  }
	  else
	  {
	       printf("NO\n");
	  }
	}
	return 0;
}
```
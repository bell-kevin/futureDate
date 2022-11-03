# futureDate

This exercise demonstrates your competency in the skills learned in this module. You must complete this exercise on your own, without any help from an instructor or another student. If you get stuck, go back through the relevant sections in the book, the quizzes, and the assignments for this module -- everything you need to do in this exercise has been covered in this module.

These are the skills you practiced in this module and will now demonstrate:

-Creating and using classes

-Instantiating objects

-Using class functions

-Using static variables
 

Module 1 Competency Exercise: Future Date

You wrote a project in this module to determine the date when given a Julian value. In this project, you will ask the user for the date, not in Julian but in integers, MM / DD / YYYY, and convert that date to its Julian value. Then ask the user how many days to go into the future. It's very simple to add an integer to a Julian value to get the Julian value of a future date. The project you've already written converts a Julian value to a date for printing.

Here are some examples of the output:

M1 Competency     M1 Competency 2

M1 Competency 3

Notice the data validation for the day of the month in the first example. There are only 30 days in the month of June, so the user was prompted to enter a valid number when entering 31, an invalid number. In the second example, the future date is in the next year. In the third example, the future date is more than a year into the future.

Assume that February always has 28 days, do not include anything for leap day or leap year.

Before you work on the code, create a table of test cases with at least 3 more tests than those shown above. Make sure your project's results are correct by checking it against the table of test cases.

Validate all user input, and if the user enters an invalid value, prompt again for that input. Do not move past the input of that piece of data until it is valid. The year value ranges from 1900 to 2999. The month value ranges from 1 to 12. The day value ranges from 1 to 31 for some months, 1 to 30 for other months, and 1 to 28 for February.

In the previous project, you created a class for the day of the year. Add a function to that class that converts a month integer and day integer into the Julian value for that date. Modify existing functions as needed to display the year as well as the month and day. Be sure to validate that the day input by the user is valid for the month; if not, keep prompting the user for the day. When all the input is valid, echo the current date to the user, using the month name instead of the month integer. Ask for the number of days to add, and display that new date with the month name. You do not have to repeat this process as in the previous project.

Take screenshots of executions of the project that include (1) an error in the number of days, (2) crossing through several months, and (3) crossing into another year.

 

NOTE: Remember the requirements for a header and a pause at the end of the program, discussed in the reading "Console Applications". These are required in every console application project.

Submission: Submit a single zipped folder containing all of the specified screenshots. the table of test cases  AND the root folder for the project.

== We're Using GitHub Under Protest ==

This project is currently hosted on GitHub.  This is not ideal; GitHub is a
proprietary, trade-secret system that is not Free and Open Souce Software
(FOSS).  We are deeply concerned about using a proprietary system like GitHub
to develop our FOSS project. I have a [website](https://bellKevin.me) where the
project contributors are actively discussing how we can move away from GitHub
in the long term.  We urge you to read about the [Give up GitHub](https://GiveUpGitHub.org) campaign 
from [the Software Freedom Conservancy](https://sfconservancy.org) to understand some of the reasons why GitHub is not 
a good place to host FOSS projects.

If you are a contributor who personally has already quit using GitHub, please
email me at **bellKevin@pm.me** for how to send us contributions without
using GitHub directly.

Any use of this project's code by GitHub Copilot, past or present, is done
without our permission.  We do not consent to GitHub's use of this project's
code in Copilot.

![Logo of the GiveUpGitHub campaign](https://sfconservancy.org/img/GiveUpGitHub.png)

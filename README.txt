4. Explain your answers (15 points)

Please answer the following questions for each file you wrote as part of this assignment.

1. Reversing an array using pointers.
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.

It works because i used the two pointer method to reverse the numbers. First, I get another pointer 
called "right_arr" point to the end of the array of numbers. Then, I use a while loop to keep 
looping as long as arr is less than right_arr. Then, I create another int variable called "temp" 
to help me swap the numbers that the two pointer are pointing to. I assign the value *arr to temp, 
then *right_arr to *arr, then temp to *right_arr. Then, I add one to arr and substract one from 
right_arr to move the pointer. Then the while loop will keep looping as long as arr is smaller than 
right_arr.


2. String handling with dynamic memory.
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.

It works beacuse I called getchar() at the beginning. Then, I initilizated the space I was 
given in the input with malloc. Then, I use a if statement to check if the input has any 
character. If the input has nothing, then I will print memory error and free all spaces. 
If there is an input, then I use fget to get the input string. Then, I call countVowels(str) 
to get the number of vowels there are in the string. I loop through the string until I reach 
null. I use an if statement to check if the character equal to upper and lower case of aeiou. 
Then, I use a value count to track and return the total amount of the vowels back. After I 
receive the returned value, I print it out.


3. Implementing a binary search tree.
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.



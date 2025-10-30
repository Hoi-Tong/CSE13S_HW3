5. Explain your answers (18 points)

Please answer the following questions for each file you wrote as part of this assignment.

1. Making change
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.

It works because I use recursion to get the number of combination there are. If the amount 
wanted is 0, that mean there is only 1 way to combine it. If the amount is less than 0, there 
is 0 way of making it. It the maxCoin is 1, then it will recurse with the same value except 
the amount will be subtracted by the number that I can use. If the maxCoin is more than 1, 
then it will recurses with adding both the (amount - maxCoins) number and the amount with 
the (maxCoins - 1) value.



2. Frequency of leading digits
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.

It works because everytime there is number in the input, it will call the getMSDigit function 
to get the leading digit of the number. The getMSDigit function basically keep dividing the 
number by 10 until it is less than or equal to 9. Then, it will go back and add one to the 
index of an array to count how many leading numbers there are for the index number. Then, 
the action will keep repeating until the user put in Ctrl-D. Then, it will print out the 
number of leading digitals in the format shown in the example.



3. Multiplying matrices
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.

This works because I use a for loop to read all the numbers from the input. Then, I used a 
base statement saying that if the number of columns of matrix a is not the same as the number 
of rows of matrix b is, then the function will not work and return false (-1). But for those 
that pass the case, it will do matrix multiplication. It has 3 nested for loop to loop through the 
row and columns of the matrix c and the inner most for loop is to loop through the columns 
of matrix a and rows of matrix b to multiple them together to get matrix c. Then, at the end, 
I used for loop to loop through matrix a, b, and c to print out the numbers in the matrix.



4. Merge sort
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.

It works because I completed the merge and merge_sort function. The merge_sort function is 
to keep dividing the array into two half using recursion. It will keep dividing the array 
into two half until all array has only one element in it. Then, it will start calling the 
merge function to merge the left and right array into one ordered array. Then, it will keep 
looping and merging to keep all the array number in order. I specifically made a copy of the 
array, so it can be used for the left and right pointers to tell which number is smaller and 
the number will put to the beginning of the real array. It is so that the values of array 
won't be messed up when determining which number is smaller.
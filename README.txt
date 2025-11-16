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

It works because for the createNode function, I created a new value with Node struct and used 
malloc to create the space. Then, I initialized the data with the value given by using 
newNode->data. Then, I initialized left and right value with NULL using the -> . For the 
insert function, I first checked if the value is null or not. If it is null, then I call 
createNode function. If the value is not null, then I compare the value with the data of the 
current node to see if the value is less than the data of the current node, if it is, then I 
make the left of the node equal to insert(root->left, value) to find the place in the free 
to insert value. If value is greater than the data of the current node, then I will make the 
right of the node equal to insert(root->right, value) to find the place in the free to insert 
value. Then, I return the root at the end. For the search function, I first check if the 
root is null or not. Then, I use if statements to see if the value is equal to the data of 
the current node, if it is, then it will return the root. If value is less than the data of 
the current node, then it will call search(root->left, value) to go deeper into the tree. If 
the value is greater than the data of the current node, then it will call 
search(root->right, value) to go deeper into the tree. It will return the root at the end. 
For the inOrderTraversal function, I first check if the root node is null or not. Then, I 
keep calling inOrderTraversal(root->left) to get to the left end of the tree, and then start 
printing the data of the node once it reaches the leaf of the tree. Then, it will go to the 
right side/end by calling inOrderTraversal(root->right). This will help going through the 
tree and print all the values in order. For the freeTree function, I first check if the 
value is null or not. Then, I call the function itself but with the left of the node by 
doing freeTree(root->left) to go to the left end of the tree to start freeing the spaces. 
Then, I call freeTree(root->right) to go to the right end to free all the right spaces. 
Then, I call freeTree(root) to free all the root nodes.


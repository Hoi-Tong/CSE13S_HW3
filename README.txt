3. Explain your answers (10 points)

Please answer the following questions for each file you wrote as part of this assignment.

1. my-grep
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.

I first open the file filename given to me with reading mode and used *fp for the file. Then, I 
create an array of char called line with the size of LINE_SIZE. Then, I use a while loop to keep
looping the lines in the file, and also see it the line is NULL or not, if I get NULL, it means 
that it reaches the end of the file. Then, for each line, I use if statement with strstr to see if 
the word I'm trying to find is in the line. If it is in the line, then I print out the line. Then, 
at the end, I use fclose on the file fp to close the file.



2. data-extract
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.

I first wrote the code to open and close the infp and outfp files. I open the infp file first. If 
infp is NULL, then I return -1. Then, I open the outfp file. If outfp file is NULL, then I close 
the infp file and then return -1. Then, I close the files by closing infp file first. If fclose 
return a number other than 0 when I use fclose on infp, then I use fclose on the outfp file and 
then return -1. Then, I close the outfp file by using fclose on outfp file. If it gets a number 
other than 0, it returns -1. For the copy_integers function, I started by using fseek with the 
infp file, the number start * the size of an int, and SEEK_SET that set the pointer to the 
beginning of the file in the beginning. Then, I use if statement to see if fseek is not equal 
to 0. If fseek is not equal to 0, then I return -1. Then, I create a buffer space to temporary 
store the values I'm getting, I made it called temp with a * before temp to dereference it. Then, 
I use malloc to get the space, I used (end-start+1) * size of int to get the amount of space I 
wanted. Then, I use fread with temp as the buffer, starting at end-start+1, reading each element 
with the size of int, and reading in the infp file to read the numbers I needed and putting it in 
temp. Then, I write the numbers in temp into the outfp file by using fwrite with the buffer called 
temp, size of int, end-start+1 as the numbers to read, and writing it in the outfp file. Then, at 
the end, I free up temp by doing free(temp). Then, I return 0.



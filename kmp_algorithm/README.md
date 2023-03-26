<h1 align = "center">LPS = "Longest Proper Prefix which is also Suffix"</h1>

1. Define one dimentional array with the size equal to the length of the pattern (LPS[pattern.length])<br>

2. Define variables i = 0 and j = 1 and set LPS[0]=0.<br>

3. compare the characters in the pattern at the pattern[i] and pattern[j].<br>

4. If both the characters matches then set LPS[j]=i+1 and increment both i and j values by 1.<br>
  &nbsp;GOTO STEP 3<br>
  
5. If both the characters do not match<br>

6. check the value of i<br>
  &nbsp; a. if its '0' then set LPS[j]=0 and increment 'j' value by one.<br>
  &nbsp; b. if its not '0' then set i=LPS[i-1].<br>
GOTO STEP 3

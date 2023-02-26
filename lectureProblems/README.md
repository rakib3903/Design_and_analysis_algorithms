<h1 align = "center"><u>bfsMatrix</u></h1>
<p>Given an matrix. You have to start from 'a'. When you get a '.' then you can go to '.' but you can not go the 's' element. You have to find that whether is it posible go from 'a' to 'x'. If possible then print "YES" otherwise print "NO".<p>
 <b># a . . s #</b><br>
 <b># s . s s #</b><br>
 <b># s . . s #</b><br>
 <b># . s x s #</b>
 <p>Here it is  posible to go from 'a' to 'x'</p>
 <b># a s s s #</b><br>
 <b># s . s s #</b><br>
 <b># s . . s #</b><br>
 <b># s s x s #</b>
 <p>Here it is  imposible to go from 'a' to 'x'</p><br>
 
 <h1 align = "center"><u>subgridOfBlackWhiteCell.cpp</u></h1> 
 <p>Given an grid(n x n) of black and white cell denoted by '1' and'0' respectively. You have to find out maximum number of subgrids such that the upper left, upper right, bottom left and botom right cell of the subgrid must be black.</p>
 <p>
 input : <br>
 <b>
 4<br>
 1 1 0 0<br>
 0 1 0 1<br>
 0 0 0 0<br>
 1 1 0 1<br>
 output: <br>
 2
 </b>
 </p>
 <p>
 input : <br>
 <b>
 4<br>
 0 0 0 0<br>
 1 1 1 1<br>
 0 0 0 0<br>
 1 1 0 1<br>
 output: <br>
 3</b>
 </p>
 
 

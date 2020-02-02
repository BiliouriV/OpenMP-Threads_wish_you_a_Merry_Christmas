# OpenMP-Threads_wish_you_a_Merry_Christmas
 
                                                                                           
# Threads communication using OpenMP

by Dimitrios Christodoulou, Viktoria Biliouri, Sotirios Karamellios



This program implements parallel programming using OpenMp. Using the necessary functions, the program displays the message :

<< Merry Christmas  and a Happy New Year from Santa Claus. >>

from the master thread. Next, the other threads display on the monitor, the message:

<< Merry Christmas from elf  *>>

where * each thread's id.                                                                                                                                                                                                                                        
Last, we print the number of the processors of the computer, the maximum number of threads,  the number of the threads that are used by the current program and the total execution time.
The results that are shown in the specific machine that we used are:
Number of processors = 1
Max number of threads = 8
Max number of participating threads = 8

and:

1 thread => Execution Time = 0.0000081 s                                                                                                                                                                                                          
2 threads => Execution Time = 0.0000277 s                                                                                                  
4 threads => Execution Time = 0.0000951 s                                                                                                                                                                                                                                          
6 threads => Execution Time = 0.0002103 s                                                                                                                                                                                                                                           
8 threads => Execution Time = 0.0004920 s

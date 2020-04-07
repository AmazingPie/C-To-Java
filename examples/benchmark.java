//This file contains the extra code needed to add to the compiled
//benchmark.java to give timings and stop optimisations.


//Taken from Peter Lawrey --
//https://stackoverflow.com/questions/7467245/cpu-execution-time-in-java
long start = 0;
int runs = 10000; // enough to run for 2-10 seconds.
for(int i=-10000;i<runs;i++) {
    if(i == 0) start = System.nanoTime();
    // do test
}
long time = System.nanoTime() - start;
System.out.printf("Each test took an average of %,d ns%n", time/runs);





import java.util.Scanner;
public static void main(String[] args)
//Start
long start ;
  long time;
  Scanner in = new Scanner(System.in);

//Before loop
start = 0;
  input = in.nextInt();

//Start of loop
if (z==0) start = System.nanoTime();

//Middle
h[h_offset] = a;
//#line  27
    i[i_offset] = b;
//#line  28
    j[j_offset] = c;
//#line  29
    k[k_offset] = d;
//#line  30
    l[l_offset] = e;
//#line  31
    m[m_offset] = f;
//#line  32
    n[n_offset] = g;
//#line  34



//End
time = System.nanoTime() - start;
  System.out.println("Total Time: "+time+"ns\n");
  System.out.println("Average Time: "+time/runs+"ns\n");
//#line  66
  System.out.println("Result: "+ans+"\n");

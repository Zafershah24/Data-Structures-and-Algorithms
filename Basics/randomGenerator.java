package zafer;

import java.util.Random;
public class Hello {
public static void main(String args[]) {
Random rand= new Random();
int freq[]=new int[7];
for(int roll=1;roll<=1000;roll++) {
	++freq[rand.nextInt(6)+1];
}
for(int i=1;i<freq.length;i++) {
	System.out.println(i + "\t" + freq[i]);
}

}
}

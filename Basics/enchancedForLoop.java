package zafer;

public class EnchanchedLoops {
	public static void main(String args[]) {
		System.out.println(takeInfinity(1,2,3,4,5,6,7,8,9,10));
	}
public static double takeInfinity(int ... n) {
	double total=0.0;
	for(double x:n)
	{total=total+x;
	
	}
return  (total/n.length);
}
}

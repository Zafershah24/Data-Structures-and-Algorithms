package zafer;
import java.util.Scanner;
public class Switch {

public static void main(String args[]) {
	int age;
Scanner takeAge= new Scanner(System.in);
System.out.println("Enter youir age");
age=takeAge.nextInt();
try
{switch(age) {
case 1:
	System.out.println("Youc cant vote");
	break;
case 2:
	System.out.println("Youc cant vote");
	break;
case 3:
	System.out.println("Youc cant vote");
	break;
default:
	System.out.println("Error");
	break;

}
}
finally {
   takeAge.close();
}
}

}

import java.util.*;
/*Program to find the first non-repeating character in a string.
eg: dailycoding problem
Output: a
Since character 'a' is the first non-repeating character in the given string
*/
public class HelloWorld {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//System.out.println("Hello World");
		String a ="SSaiKiran";
		int t=0;
		
		/*for(char c:a.toCharArray()) {
			if(a.indexOf(c)==a.lastIndexOf(c)) { //Using inbuilt functions 
				System.out.println(c);
				
				break;}
			//break;
		}*/
		//checking for characters that repeat more than once
		for(int i=0;i<a.length();i++) {
			for(int j=0;j<a.length();j++) {
				if(a.charAt(i)==a.charAt(j) && i!=j) {
					t=1;
				}
					
			}
			if(t==0) {
				System.out.println(a.charAt(i));
				break;
			}
			t=0;
		}
	}

	
	}



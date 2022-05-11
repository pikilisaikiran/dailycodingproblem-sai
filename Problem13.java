package dailycp;

import java.util.HashMap;
import java.util.Scanner;

public class Problem13 {
	    public int LongestSubstring_kdistinct(String s, int k){
	        if(s.length()==0 || k==0)
	        return 0;
	        int slow=0;
	        int fast=0;
	        int result =0;
	        HashMap<Character,Integer> hm = new HashMap<>();
	        while(fast < s.length())
	        {
	            char c=s.charAt(fast);
	            hm.put(c,hm.getOrDefault(c, 0)+1 );// storing character and its frequency.
	            while(hm.size()>k) // if the size of hashmap is greater than k remove the first character in the window
	            {
	                char d=s.charAt(slow);
	                if(hm.get(d)==1)
	                {
	                    hm.remove(d);//if its frequency is one remove the char itself form the hash map
	                }
	                else
	                {
	                    hm.put(d, hm.get(d)-1); //decrementing the char pointed by slow by 1 if its frequency is more than one.
	                }
	                slow++;
	            }
	            result=Math.max(result, fast-slow+1);// maximum of previous result and current window size.
	            fast++;
	        }
	        return result;
	    }
	    public static void main (String[] args)
	    {
	        Scanner sc =new Scanner(System.in);
	        String s=sc.nextLine();
	        int k=sc.nextInt();
	        Problem13 obj=new Problem13();
	        System.out.println(obj.LongestSubstring_kdistinct(s,k));
	    }
	

}

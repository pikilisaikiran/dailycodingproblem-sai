import java.util.Scanner;

public class Prob {

	public static void main(String[] args) {
		try (Scanner s = new Scanner(System.in)) {
			int n=s.nextInt();
			int[] a = new int[n];
			for(int i=0;i<a.length;i++)
			{
				a[i]=s.nextInt();
			}
		int in=a[0];
		int ex=0;
		for(int i=1;i<a.length;i++)
		{
			int nex=Math.max(ex, in);
			in =ex+a[i];
			ex =nex;
		}
		int ans=Math.max(in, ex);
		System.out.println(ans);
		}
	}

}

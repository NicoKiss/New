public class Student
{
	public static int a1(int a[])
	{
		int result=0,i=0;
	        while (i<a.length)
		result+=a[i++];
                return result/a.length;
        } 
	public static void judge(int a)

	{
		int n;
		n = a/10;
		switch(n)
              {
		case 9:
			System.out.println("考生平均成绩为优");
			break;
		case 8:
			System.out.println("考生平均成绩为良");
			break;
		case 7:
			System.out.println("考生平均成绩为中");
			break;	
		case 6:
			System.out.println("考生平均成绩为及格");
			break;
		default:
			System.out.println("考生平均成绩为不及格");
			break;
	      }
	}
public static void main(String[] args) 
	{ 	
	int a1;
	int b1;
	int c1;
	int d1;

        int a[]={90,85,66,51,69,78,88,94};
	int b[]={68,88,81,90,65,74,64,46};
	int c[]={68,90,85,88,68,70};
	int d[]={60};
        a1 = a1(a);
	b1 = a1(b);
	c1 = a1(c);
	d1 = a1(d);

        System.out.println("课程编号为1001的平均成绩是:"+a1);
	System.out.println("课程编号为3001的平均成绩是:"+b1);
	System.out.println("课程编号为2001的平均成绩是:"+c1);
	System.out.println("课程编号为1002的平均成绩是:"+d1);
        System.out.print("课程号为1001的");
        judge(a1);
	System.out.print("课程号为3001的");
	judge(b1);
	System.out.print("课程号为2001的");
	judge(c1);
        System.out.print("课程号为1002的");
	judge(d1);
	}
}
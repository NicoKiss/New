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
			System.out.println("����ƽ���ɼ�Ϊ��");
			break;
		case 8:
			System.out.println("����ƽ���ɼ�Ϊ��");
			break;
		case 7:
			System.out.println("����ƽ���ɼ�Ϊ��");
			break;	
		case 6:
			System.out.println("����ƽ���ɼ�Ϊ����");
			break;
		default:
			System.out.println("����ƽ���ɼ�Ϊ������");
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

        System.out.println("�γ̱��Ϊ1001��ƽ���ɼ���:"+a1);
	System.out.println("�γ̱��Ϊ3001��ƽ���ɼ���:"+b1);
	System.out.println("�γ̱��Ϊ2001��ƽ���ɼ���:"+c1);
	System.out.println("�γ̱��Ϊ1002��ƽ���ɼ���:"+d1);
        System.out.print("�γ̺�Ϊ1001��");
        judge(a1);
	System.out.print("�γ̺�Ϊ3001��");
	judge(b1);
	System.out.print("�γ̺�Ϊ2001��");
	judge(c1);
        System.out.print("�γ̺�Ϊ1002��");
	judge(d1);
	}
}
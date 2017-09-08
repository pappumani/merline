import.java.net*;
import.java.text.Number Format;
public static final string[] a="", "One", "Two", "Three", "Four","Five", "Six", "Seven", "Eight", "Nine", "Ten"};
public static String convert(final int n) 
{
if (n < 0)
{
return "Minus " + convert(-n);
}
public static void main(final String[] args) 
{
int n;
n = 5;
System.out.println(NumberFormat.getInstance().format(n) + "='" + convert(n) + "'");
}


import java.util.Scanner;
class student1{
    public 
        student1(){
            System.out.println("Hi! constructer has been created");
        }
        String fullName;
        int rollNum;
        double semPerentage;
        String collegeName;
        int collegeCode;
}
class student{
    public static void main(String[] args){
        Scanner op=new Scanner(System.in);
        student1 Sunil=new student1();
        System.out.println("Enter your name :");
        Sunil.fullName=op.next();
        System.out.println("Enter your rollnumber :");
        Sunil.rollNum=op.nextInt();
        System.out.println("Enter your sempercantage :");
        Sunil.semPerentage=op.nextInt();
        System.out.println("Enter your collegename :");
        Sunil.collegeName=op.next();
        System.out.println("Enter your collegecode :");
        Sunil.collegeCode=op.nextInt();
        System.out.println("Name : "+Sunil.fullName+"\nRoll number : "+Sunil.rollNum+"\nSempercentage : "+Sunil.semPerentage+"\nCollegename : "+Sunil.collegeName+"\nCollegecode : "+Sunil.collegeCode);

    }
}

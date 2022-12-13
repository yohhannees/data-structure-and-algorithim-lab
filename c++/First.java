import java.util.Scanner;

import javax.lang.model.element.Name;

import org.xml.sax.helpers.NamespaceSupport;

public class First {
    public static void main(String[] args) {
      // char grade = 'C';
      // switch (grade) {
      //   case 'A':
      //     System.out.println("Excellent!");
      //     break;
      //  case 'B':
      //     System.out.println( "well done" ); 
      //   case 'C':
      //     System.out.println("you passed");
      //     break;
      //   case 'D':
      //     System.out.println("You failed");
      //   case 'F':
      //     System.out.println("Better try again");
      //     break;c
      //   default:
      //     System.out.println("Invalid grade");
      // } System.out.println("Your grade is " + grade);
      // }
       Scanner s=new Scanner(System.in);
       int x=s.nextInt();
        int y=s.nextInt();
        int z=s.nextInt();
        if(x>y && x>z){
          System.out.println(x+"is greater");
        }
        else if(y>x && y>z){
          System.out.println(y+" is greater");
        }
        else{
          System.out.println(z+"is greater");
        }


        // char c=s.next().charAt(0);
        // if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        //   System.out.println("vowel");
        // }
        // else{
        //   System.out.println("consonant");
        // }
        // int n=s.nextInt();
        // int sum=0;
        // while(n>0){
        //   sum=sum+n%10;
        //   n=n/10;
        // }
        // System.out.println(sum);

  }
}
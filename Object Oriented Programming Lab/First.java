import java.text.Format;
import java.util.Random;
import java.util.Scanner;

import javax.lang.model.element.Name;

import org.xml.sax.helpers.NamespaceSupport;

class First {

  public static int[] questions() {
    Random rand = new Random();
    int one = rand.nextInt(100);
    int two = rand.nextInt(100);
    int arr[] = { one, two };
    return arr;
  }

  static int score = 0;

  public static void user() {
    Scanner scan = new Scanner(System.in);
    for (int i = 0; i < 5; i++) {

      int[] arr = questions();
      int addition = arr[0] + arr[1];
      System.out.printf("what is %d + %d ?", arr[0], arr[1]);
      int answer = scan.nextInt();
      if (answer == addition) {
        System.out.println("Correct");
        score++;
      } else {
        System.out.println("Incorrect");

      }

    }

    System.out.printf("your score is %d \n\n ", score);

    System.out.printf("if you want to take the questions again press 1\n\n");
    int choice = scan.nextInt();
    if (choice == 1) {
      user();
    }

  }

  public static void main(String[] args) {
    user();
  }

}
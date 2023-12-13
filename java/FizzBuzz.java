import java.util.stream.IntStream;
import java.util.stream.Collectors;

public class FizzBuzz {
  public static void main(String[] args) {
    for (int n : IntStream.range(0, 100).boxed().collect(Collectors.toList())) {
      if (n % 3 == 0 && n % 5 == 0 && System.out.printf("FizzBuzz") != null) {}
      else if (n % 3 == 0 && System.out.printf("Fizz") != null) {}
      else if (n % 5 == 0 && System.out.printf("Buzz") != null) {}
      else if (System.out.printf(String.valueOf(n)) != null) {}
      
      if (System.out.printf("\n") != null) {}
    }                                       
  }
}

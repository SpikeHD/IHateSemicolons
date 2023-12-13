Yes, I know `import` statements need to end with semicolons. Cut me some slack!!

# About FizzBuzz

This fizzbuzz was the funkiest one I needed to create. Most other examples use recursive functions, however in this instance I could not do that. Why? Let's take a look:

```java
// This example errors. you can not have a void function in a conditional, no matter how hard you try. 
public static void main(String[] args) {
  if (fizzbuzz(1, 100)) {}

  // These also don't work, of course, because you cannot cast void to anything
  if (fizzbuzz(1, 100) == true) {}
  if ((boolean)fizzbuzz(1, 100) == true) {}
  if ((int)fizzbuzz(1, 100) == 0) {}
}

public static void fizzbuzz(int n, int max) {
  // ...
}
```

Okay, so we can't have a void function. How about giving `fizzbuzz()` a return type? That helps the calling of the function, but now we REQUIRE a `return` statement, which is not allowed in a conditional and therefore would need a semicolon:

```java
public static void main(String[] args) {
  if (fizzbuzz(1, 100) != 0) {}
}

public static int fizzbuzz(int n, int max) {
  // ...

  // Without this return statement, the compiler will be sad.
  return 0;

  // This is extremely invalid and will not work
  if (return 0) {}
}
```

In the end the solution uses a for each loop by generating an array in a range from 1 to 100. Similar to how you can do `new Array(100).fill(0).map((_, i) => i)` or `Array.from(Array(100).keys())`, in Java you can do:

```java
for (int n : IntStream.range(0, 100).boxed().collect(Collectors.toList())) {
  // ...
}
```
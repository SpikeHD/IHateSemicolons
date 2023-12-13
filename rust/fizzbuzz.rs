fn main() {
  // you can either call it like this
  if fizzbuzz(1, 100) == () {}

  // OR like this. This one triggers a warning, though.
  //if let _ = fizzbuzz(1, 100) {}
}

fn fizzbuzz(num: u32, max: u32) {
    if let mut s = String::new() {
        if num % 5 == 0 && s.push_str("Fizz") == () {}
        if num % 3 == 0 && s.push_str("Buzz") == () {}
        if s.is_empty() && s.push_str(&num.to_string()) == () {}

        if println!("{}", s) == () {}

        if num < max && fizzbuzz(num + 1, max) == () {}
    }
}
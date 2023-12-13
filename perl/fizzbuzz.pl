#!/usr/bin/perl

for my $i (1..100) {
    if ($i % 3 == 0 && print "Fizz") {
        if ($i % 5 == 0 && print "Buzz") {}
    } else {
        if ($i % 5 == 0 && print "Buzz") {}
        elsif (print $i) {}
    }
    
    if (print "\n") {}
}
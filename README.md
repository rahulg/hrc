# hrc #

Quick wrapper around the C++11 high resolution clock.

# Usage #

```c++
hrc::time start, end;

start = hrc::now();
< code to profile >
end = hrc::now();

cout << "It took " << hrc::span_ms(start, end) << " ms.";
```

# License #

This content is released into the public domain.
# rslike

This is a C headeronly library inspired by Rust, designed to fill the gaps in C regarding null safety and error handling. The library implements types similar to Rust's `Option` and `Result`, and also introduces some extensions to the C language to make its usage closer to Rust. It makes extensive use of macros, making it very easy to use with a low learning curve.

## Example

```c
#include <rslike/rslike.h>

define_error(Calc, (
	TooBig
));

define_result(i32, Error(Calc));

fn(add, (
    (a, int),
    (b, int)
), Result(i32, Error(Calc))) {
    let(sum, i32) = a + b;

    if (sum > 32) {
        return Err(i32, Error(Calc), Varient(Error(Calc), TooBig));
    }

    return Ok(i32, Error(Calc), sum);
}

fn(main, (), int) {
	if_let_ok(i32, add(6, 2), sum, {
        printf("6 and 2 is %d\n", sum);
    })

    if_let_err(Error(Calc), add(12, 26), err, {
        printf("12 and 26 is %s\n", VariantName(Error(Calc), err));
    })

	return 0;
}
```




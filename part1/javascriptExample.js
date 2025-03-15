let x = 10;  // Global variable

function outer() {
    let y = 20;  // Enclosed variable
    function inner() {
        let z = 30;  // Local variable
        console.log(x, y, z);
    }
    inner();
}

outer();

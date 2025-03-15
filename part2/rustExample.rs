fn main() {
    let s = String::from("Rust Ownership");
    let s_ref = &s;  // Borrowing
    println!("{}", s_ref);  // Safe memory access
}

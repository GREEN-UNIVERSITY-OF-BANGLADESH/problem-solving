// Written by: Md. Maruf Sarker
// Platform: CodeChef
// Problem: https://www.codechef.com/submit/F1RULE
// Language: go
// Date: 2023-02-27
// Difficulty Rating: 487

use std::io;

fn main(){
    let mut t = String::new();

    io::stdin()
        .read_line(&mut t)
        .expect("Failed to read line");

    let t: i32 = match t.trim().parse() {
        Ok(num) => num,
        Err(_) => {
            println!("Invalid input, please enter a valid t!");
            return;
        }
    };

    let mut cnt = 0;
    loop{
        let mut n_m = String::new();
        io::stdin()
            .read_line(&mut n_m)
            .expect("Failed to read line");

        let mut n_m = n_m.split_whitespace();
        let n: i32 = match n_m.next().unwrap().parse() {
            Ok(num) => num,
            Err(_) => {
                println!("Invalid input, please enter a valid n!");
                return;
            }
        };

        let m: i32 = match n_m.next().unwrap().parse() {
            Ok(num) => num,
            Err(_) => {
                println!("Invalid input, please enter a valid m!");
                return;
            }
        };

        cnt += 1;
        if cnt > t {
            break;
        }
        if n <= m{
            println!("{}", n);
        }else{
            println!("{}", n + (n - m));
        }
    }
}
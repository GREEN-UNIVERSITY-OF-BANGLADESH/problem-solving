//Mathison and pangrams
package com.mycompany.mavenproject2;
import java.util.Scanner;
public class Mathison_and_pangrams {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt(); // for the test case
        while(t-->0){
            int count = 0;
            int price [] = new int [26]; // for the prices of all letters input 
            for (int i = 0; i < 26; i++) {
                price[i] = sc.nextInt();// taking all price of letters consecutively. Like in 0 index we take the price for 'a' and 1 index taking price for 'b'.
            }
            sc.nextLine();
            String n = sc.nextLine(); // taking the String.
            int ar[] = new int [26]; // this array for checking which letter i have to buy. I will scan the string and check which letter is missing.
            for (int i = 0; i < 26; i++) {
                ar[i] = 0; // initially i have no letter thats why i take 0.
            }
            for (int j = 0; j < n.length(); j++) {
                int temp = n.charAt(j); // the letter in index j in the string i am taking the letter in a temporary variable. and this variable is integer thats why it taks the ascii number of letters.
                ar[temp-97] = 1; // here i am initialize the temp value in the array to check which letter i have and which letters is missing. for the ascii value i need to substract 97 from the number.
            }
            for (int k = 0; k < 26; k++) {
                if(ar[k] == 0){
                    count+=price[k]; // here i am adding all missing letter's price in count variable. in the if condition i check the letter is avilable or nor. if no then i have to buy it.
                }
            }
            System.out.println(count); // at last i print the total value.
        }
    }
}

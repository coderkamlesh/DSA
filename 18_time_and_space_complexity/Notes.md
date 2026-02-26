# Lecture 18: Time and Space Complexity Notes

## Introduction to Time Complexity

Sabse pehle ye samajhna zaroori hai ki **Time Complexity** aur **Execution Time** (jo computer pe program run karne me lagta hai) dono alag cheezein hain.

### 1. Execution Time vs Time Complexity
*   **Execution Time:** Agar aap ek hi program ko do alag computers (ek purana aur ek naya) par chalayenge, toh dono me alag-alag time lagega. Ye hardware, operating system, aur background tasks par depend karta hai. Isliye hum "seconds" ya "milliseconds" me performance measure nahi karte.
*   **Time Complexity:** Ye hamare algorithm ki efficiency batata hai. Ye computer ke hardware par depend nahi karta.

### 3. Algorithm Cases (Worst, Average, Best)
Hum algorithms ko unki performance ke basis par handle karte hain:

*   **Best Case (Lower Bound):** Wo scenario jisme algorithm sabse kam steps leta hai. (e.g., Linear search mein element pehli position par mil gaya).
*   **Average Case:** Generic case, jisme hum average performance ki baat karte hain.
*   **Worst Case (Upper Bound):** Wo scenario jisme algorithm sabse zyada steps leta hai. (e.g., Linear search mein element last mein mila ya mila hi nahi). 
    *   **Pro Tip:** Hum hamesha **Worst Case** ke liye hi tayyar rehte hain, kyunki agar hamara code Worst Case mein achha perform kar raha hai, toh har situation handle ho jayegi.

---

## Asymptotic Notations
Complexities ko darshane ke liye hum mathematical notations use karte hain:

### 1. Big-O Notation (O) - Upper Bound
Ye **Worst Case** complexity ko represent karta hai. Ye batata hai ki maximum itna time lag sakta hai, isse zyada nahi.
*   *Example:* $O(n)$, $O(n^2)$

### 2. Omega Notation (Ω) - Lower Bound
Ye **Best Case** complexity ko represent karta hai. Ye batata hai ki kam se kam itna time toh lagega hi.
*   *Example:* $\Omega(1)$

### 3. Theta Notation (Θ) - Tight Bound
Ye **Average Case** ko represent karta hai. Jab upper aur lower bound same ho, tab hum Theta use karte hain.

---

## Common Time Complexities (Slow to Fast)
Complexity ka order (Efficiency ke hisaab se):
1.  **$O(1)$** - Constant Time (Sabse fast)
2.  **$O(\log n)$** - Logarithmic Time
3.  **$O(n)$** - Linear Time
4.  **$O(n \log n)$** - Log-Linear Time
5.  **$O(n^2)$** - Quadratic Time
6.  **$O(n^3)$** - Cubic Time
7.  **$O(2^n)$** - Exponential Time
8.  **$O(n!)$** - Factorial Time (Sabse slow)

---

## Space Complexity
Jaise Time Complexity time ke bare mein hai, waise hi **Space Complexity** batati hai ki hamara algorithm input badhne par kitni **Extra (Auxiliary) Memory** consume karta hai.

*   **Constant Space $O(1)$:** Agar hum koi new data structure (array, list) create nahi kar rahe jo input size par depend kare. (e.g., simple variable use karna).
*   **Linear Space $O(n)$:** Agar hum ek array create karte hain jiski length input $n$ ke barabar hai.

---

## Summary / Notes to Remember
1.  Hamesha **Worst Case** (Big-O) ko priority do.
2.  Unnecessary variable ya data structure banane se bacho (Space save karne ke liye).
3.  Loops ke andar loops ($Nested Loops$) hamesha complexity ko $O(n^k)$ ki taraf le jaate hain.


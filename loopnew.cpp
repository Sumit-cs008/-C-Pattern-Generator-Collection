#include <bits/stdc++.h>
using namespace std;

// ------------------ FUNCTION DECLARATIONS ------------------
void pattern1(int n); 
void pattern2(int n); 
void pattern3(int n); 
void pattern4(int n); 
void pattern5(int n); 
void pattern6(int n); 
void pattern7(int n); 
void pattern8(int n); 
void pattern9(int n); 
void pattern10(int n);
void pattern11(int n);
void pattern12(int n);
void pattern13(int n);
void pattern14(int n);
void pattern15(int n);
void pattern16(int n);
void pattern17(int n);
void pattern18(int n);
void pattern19(int n);
void pattern20(int n);
void pattern21(int n);
void pattern22(int n);
void pattern23(int n);
void pattern24(int n);
void pattern25(int n);
void pattern26(int n);
void pattern27(int n);
void pattern28(int n);
void pattern29(int n);
void pattern30(int n);

// ------------------ MAIN FUNCTION ------------------
int main()
{
    cout << "\n--- Pattern Menu ---\n";
    cout << "1  = Square of asterisks\n";
    cout << "2  = Lower triangle of stars\n";
    cout << "3  = Triangle with increasing series (by column j)\n";
    cout << "4  = Triangle with increasing series (by row i)\n";
    cout << "5  = Inverted lower triangle of stars\n";
    cout << "6  = Inverted number triangle\n";
    cout << "7  = Pyramid pattern of stars\n";
    cout << "8  = Inverted pyramid pattern of stars\n";
    cout << "9  = Diamond pattern (upper + lower)\n";
    cout << "10 = Hourglass pattern of stars\n";
    cout << "11 = Right shifted rectangle pattern\n";
    cout << "12 = Binary triangle pattern (0/1 alternate)\n";
    cout << "13 = Double-sided numeric pattern (with spaces)\n";
    cout << "14 = Palindromic number pattern (with mirror effect)\n";
    cout << "15 = Continuous number triangle pattern\n";
    cout << "16 = Alphabet increasing pattern (A to current row)\n";
    cout << "17 = Alphabet decreasing pattern (A to limit)\n";
    cout << "18 = Repeating alphabet triangle pattern\n";

    int n, choice;
    cout << "\nWhich pattern do you want: ";
    cin >> choice;

    cout << "Enter number of rows: ";
    cin >> n;

    switch (choice)
    {
    case 1:
        pattern1(n);
        break;
    case 2:
        pattern2(n);
        break;
    case 3:
        pattern3(n);
        break;
    case 4:
        pattern4(n);
        break;
    case 5:
        pattern5(n);
        break;
    case 6:
        pattern6(n);
        break;
    case 7:
        pattern7(n);
        break;
    case 8:
        pattern8(n);
        break;
    case 9:
        pattern9(n);
        break;
    case 10:
        pattern10(n);
        break;
    case 11:
        pattern11(n);
        break;
    case 12:
        pattern12(n);
        break;
    case 13:
        pattern13(n);
        break;
    case 14:
        pattern14(n);
        break;
    case 15:
        pattern15(n);
        break;
    case 16:
        pattern16(n);
        break;
    case 17:
        pattern17(n);
        break;
    case 18:
        pattern18(n);
        break;

    case 19:
        pattern19(n);
        break;

    case 20:
        pattern20(n);
        break;

    case 21:
        pattern21(n);
        break;

    case 22:
        pattern22(n);
        break;

    case 23:
        pattern23(n);
        break;

    case 24:
        pattern24(n);
        break;

    case 25:
        pattern25(n);
        break;

    case 26:
        pattern26(n);
        break;

    case 27:
        pattern27(n);
        break;

    default:
        cout << "Invalid pattern number!";
    }

    return 0;
}

// ------------------ PATTERN DEFINITIONS ------------------

/*
Pattern 1: Square of asterisks
*****
*****
*****
*****
*****
*/
void pattern1(int n)
{
    cout << "\nPattern 1: Square of asterisks\n\n";
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << " *";
        }
        cout << "\n";
    }
}

/*
Pattern 2: Lower triangle of stars
*
* *
* * *
* * * *
*/
void pattern2(int n)
{
    cout << "\nPattern 2: Lower triangle of stars\n\n";
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

/*
Pattern 3: Triangle with increasing numbers by column (j)
1
1 2
1 2 3
1 2 3 4
*/
void pattern3(int n)
{
    cout << "\nPattern 3: Triangle with increasing numbers by j\n\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}

/*
Pattern 4: Triangle with increasing numbers by row (i)
1
2 2
3 3 3
4 4 4 4
*/
void pattern4(int n)
{
    cout << "\nPattern 4: Triangle with increasing numbers by i\n\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

/*
Pattern 5: Inverted lower triangle of stars
* * * *
* * *
* *
*
*/
void pattern5(int n)
{
    cout << "\nPattern 5: Inverted lower triangle of stars\n\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j >= 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

/*
Pattern 6: Inverted number triangle
1 2 3 4
1 2 3
1 2
1
*/
void pattern6(int n)
{
    cout << "\nPattern 6: Inverted number triangle\n\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

/*
Pattern 7: Pyramid of stars
   *
  ***
 *****
*******
*/
void pattern7(int n)
{
    cout << "\nPattern 7: Pyramid pattern of stars\n\n";
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
/*
Pattern 8: Inverted pyramid of stars
*******
 *****
  ***
   *
*/
void pattern8(int n)
{
    cout << "\nPattern 8: Inverted pyramid pattern of stars\n\n";
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < 2 * n - 2 * i - 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

/*
Pattern 9: Diamond pattern (upper + lower)
   *
  ***
 *****
*******
*******
 *****
  ***
   *
*/
void pattern9(int n)
{
    cout << "\nPattern 9: Diamond pattern (upper + lower)\n\n";
    // upper half
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    // lower half
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - 2 * i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

/*
Pattern 10: Hourglass pattern
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*
*/
void pattern10(int n)
{
    cout << "\nPattern 10: Diamond pattern (alternative)\n\n";
    // Upper half
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    // Lower half
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - 2 * i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

/*
Pattern 11: Right shifted rectangle
****
 ****
  ****
   ****
*/
void pattern11(int n)
{
    for (int i = 0; i < n; i++)
    {
        // Left spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // Stars in the middle
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }

        // Right spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

/*
Pattern 12: Binary triangle (alternating 0 and 1)
0
1 0
0 1 0
1 0 1 0
*/
void pattern12(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        // Decide starting number based on row
        if (i % 2 == 0)
        {
            start = 0;
        }
        else
        {
            start = 1;
        }

        // Alternate printing 0 and 1
        for (int j = 0; j <= i; j++)
        {
            cout << start << " ";
            start = 1 - start; // toggle between 1 and 0
        }

        cout << endl;
    }
}

/*
Pattern 13: Double-sided numeric pattern
1      1
22    22
333  333
44444444
*/
void pattern13(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // Left numbers
        for (int j = 0; j < i; j++)
        {
            cout << i;
        }

        // Middle spaces
        for (int j = 0; j < 2 * (n - i); j++)
        {
            cout << " ";
        }

        // Right numbers
        for (int j = 0; j < i; j++)
        {
            cout << i;
        }

        cout << endl;
    }
}
/*
Pattern 14: Palindromic number pattern
1      1
12    21
123  321
12344321
*/
void pattern14(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // Increasing numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // Spaces in middle
        for (int j = 0; j < 2 * (n - i); j++)
        {
            cout << " ";
        }

        // Decreasing numbers
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
    }
}
/*
Pattern 15: Continuous number triangle
1
2 3
4 5 6
7 8 9 10
*/
void pattern15(int n)
{
    int k = 1; // start from 1
    for (int i = 1; i <= n; i++)
    {
        // print increasing sequence per row
        for (int j = 1; j <= i; j++)
        {
            cout << k << " ";
            k++; // next number
        }
        cout << endl;
    }
}

/*
Pattern 16: Alphabet increasing triangle
A
A B
A B C
A B C D
*/
void pattern16(int n)
{
    cout << "\nPattern 16: Alphabet increasing pattern\n\n";
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

/*
Pattern 17: Alphabet decreasing triangle
A B C D
A B C
A B
A
*/
void pattern17(int n)
{
    cout << "\nPattern 17: Alphabet decreasing pattern\n\n";
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch < 'A' + n - i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

/*
Pattern 18: Repeating alphabet triangle
A
B B
C C C
D D D D
*/
void pattern18(int n)
{
    cout << "\nPattern 18: Repeating alphabet triangle\n\n";
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j < i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

/*
   A
  ABC
 ABCDE
ABCDEFG
 */

void pattern19(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i - 1; j > 1; j--)
        {
            cout << " ";
        }
        char ch = 'A';
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << ch;
            ch++;
        }
        for (int j = n - i - 1; j > 1; j--)
        {
            cout << " ";
        }
        cout << endl;
    }
}

/*
  A
 ABA
ABCBA*/

void pattern20(int n)
{
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // characters
        char ch = 'A';
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            if (j <= (2 * i + 1) / 2)
            {
                cout << ch;
                ch++;
            }
            else
            {
                cout << ch;
                ch--;
            }
        }

        cout << endl;
    }
}

/*
E
ED
EDC
EDCB
EDCBA
*/
void pattern21(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + n - 1;
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
}

// pascals triangle
void pattern22(int n)
{
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // numbers
        int k = 1;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            if (j <= (2 * i + 1) / 2)
            {
                cout << k;
                k++;
            }

            else
            {
                cout << k;
                k--;
            }
        }
        cout << endl;
    }
}

/*
 * * * * * * * * * * * * * * * *
 * * * * * * *     * * * * * * *
 * * * * * *         * * * * * *
 * * * * *             * * * * *
 * * * *                 * * * *
 * * *                     * * *
 * *                         * *
 *                             *
 *                             *
 * *                         * *
 * * *                     * * *
 * * * *                 * * * *
 * * * * *             * * * * *
 * * * * * *         * * * * * *
 * * * * * * *     * * * * * * *
 * * * * * * * * * * * * * * * * 
 */

void pattern23(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < 2 * i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)

        {
            cout << "* ";
        }
        for (int j = 0; j < 2 * (n - i - 1); j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

/*

*                *
**              **
***            ***
****          ****
*****        *****
******      ******
*******    *******
********  ********
******************
********  ********
*******    *******
******      ******
*****        *****
****          ****
***            ***
**              **
*                * 

*/
void pattern24(int n)
{
    int k = n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * (n - i); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)

        {
            cout << "*";
        }
        for (int j = 0; j < 2 * (i); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
 * * * * * * * *
 *             *
 *             *
 *             *
 *             *
 *             *
 *             *
 * * * * * * * * 
 */
void pattern25(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
/*
5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5 
*/

void pattern26(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int bottom = (2 * n - 2) - i;
            int right = (2 * n - 2) - j;

            cout << (n - min(min(top, bottom), min(right, left))) << " ";
        }
        cout << endl;
    }
}
/*
* * * * * * * * * 
  * * * * * * *   
    * * * * *     
      * * *       
        *
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * *
*/

void pattern27(int n)
{
    for (int i = 0; i < n ; i++)
    {
        //spaces
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        //stars
        
         for (int j = 0 ; j < 2 *( n - i) - 1; j++)
        {
           cout << "* ";
        }
        //spaces
        for (int j = 0; j < i ; j++)
        {
            cout << "  ";
        }
        cout <<endl;
    
    }
        for (int i = 1; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }
        // stars
        for (int j = 0; j < 2 * i +1; j++)
        {
            cout << "* ";
        }
        // space

        cout << endl;
    }
}
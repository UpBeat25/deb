# DEB.EXE
deb.exe is a debugging tool made in C++ and helps you use print statements to debug your apps and works with any language (hopefully).

Since the dawn of time, highly specialized beings have been trained for years to make a rock infused with silicon think and do stuff like 2 + 2

Jokes aside, people use print statements to debug their more often because it is more convenient but, after the problem is solved, sometimes the print statements are shipped to prod.

To solve this problem, deb.exe, a toy alternative to modern debugers.

## Usage:> 

    int num1, num2, sum;
    cout << "hello";

    cout << "debug 1"; // deb

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "debug 2"; // deb
    sum = num1 + num2;

    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;

Just comment the word 'deb' on the print statement of the code.

then run:>

    deb <filename>

## Download:

release page [https://github.com/UpBeat25/deb/releases]


There you go!
Enjoy ＼(ﾟｰﾟ＼)

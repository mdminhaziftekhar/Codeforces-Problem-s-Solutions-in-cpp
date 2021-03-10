#include <iostream>
#include <stack>
typedef long long int ll;

using namespace std;

bool areBracketsBalanced(string expr)
{
    stack<char> s;
    char x;

    // Traversing the Expression
    for (int i = 0; i < expr.length(); i++)
    {
        if (expr[i] == '(' )
        {
            // Push the element in the stack
            s.push(expr[i]);
            continue;
        }

        // IF current current character is not opening
        // bracket, then it must be closing. So stack
        // cannot be empty at this point.
        if (s.empty())
            return false;

        switch (expr[i])
        {
        case ')':

            // Store the top element in a
            x = s.top();
            s.pop();
            if (x == '{' || x == '[')
                return false;
            break;
        }
    }

    return (s.empty());
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++)
    {
        string s;
        cin>>s;
        int l= s.length();
        if(s[0]==s[l-1])
        {
            cout<<"NO\n";
            continue;
        }

        char x;
        char f=s[0];
        char la=s[l-1];
        if ((s[0] == 'B' || s[l - 1] == 'B') && (s[0] == 'A' || s[l - 1] == 'A'))
        {
            x='C';
        }
        else if ((s[0] == 'A' || s[l - 1] == 'A') && (s[0] == 'C' || s[l - 1] == 'C'))
        {
            x = 'B';
        }
        else
        {
            x='A';
        }

        string s2=s;
        for (int i = 0; i < l; i++)
        {
            if(s[i]==f)
            {
                s[i]='(';
                s2[i]='(';
            }
            if (s[i] == la)
            {
                s[i] = ')';
                s2[i] = ')';
            }
            if (s[i] == x)
            {
                s[i] = '(';
                s2[i] = ')';
            }
        }

        //cout<<s<<"\n"<<s2<<"\n";

        if(areBracketsBalanced(s))
        {
            cout<<"YES\n";
            continue;
        }
        if (areBracketsBalanced(s2))
        {
            cout << "YES\n";
            continue;
        }
        cout<<"NO\n";
    }

    return 0;
}

bool ispar(string x)
    {
        // Your code here
        stack<char> s;
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] == '(' || x[i] == '{' || x[i] == '[')
            s.push(x[i]);
        else
        {
            if (s.empty())
                return false;

            char c = s.top();
            if (x[i] == ')' && c != '(')
                return false;
            else if (x[i] == '}' && c != '{')
                return false;
            else if (x[i] == ']' && c != '[')
                return false;
            s.pop();
        }
    }
    return s.empty();
    }

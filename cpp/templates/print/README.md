### ostream(cout/cerr) operator functions

Provides a set of templates functions for operator&lt;&lt;().

Notes:
- Because of templates, A lot complex type/class can printed in-line, with less amount of code
- Each function has a string 'DELIM' which can be changed according to needs.
- For complex types, such as one used in [test.cpp](test.cpp), more than one functions might be used. It is advised to add all the prototypes (at the top) and functions.
- json file has been intentionally ignored for easy checking of code.


### Demo
<pre>

<code>
    map<pair<int, vector<pair<int, int>>>, int> m = 
    {
        {{1, vector(1, make_pair(10, 10)) }, 100},
        {{2, vector(2, make_pair(20, 20))}, 200},
        {{3, vector(3, make_pair(30, 30))}, 300}
    };
</code>

</pre>

### Output:
<samp>

{{1, {10, 10},  }, , 100},
{{2, {20, 20},  {20, 20},  }, , 200},
{{3, {30, 30},  {30, 30},  {30, 30},  }, , 300},
</samp>

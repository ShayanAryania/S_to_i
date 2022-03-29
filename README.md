# S_to_i

int stoi (const string&  str, size_t* idx = 0, int base = 10);

int stoi (const wstring& str, size_t* idx = 0, int base = 10);

(Convert string to integer)

Parses str interpreting its content as an integral number of the specified base, which is returned as an int value.

If idx is not a null pointer, the function also sets the value of idx to the position of the first character in str after the number.

The function uses strtol (or wcstol) to perform the conversion (see strtol for more details on the process).

(Parameters)

(str)::
String object with the representation of an integral number.

(idx)::
Pointer to an object of type size_t, whose value is set by the function to position 
of the next character in str after the numerical value.
This parameter can also be a null pointer, in which case it is not used.

(base)::
Numerical base (radix) that determines the valid characters and their interpretation.
If this is 0, the base used is determined by the format in the sequence (see strtol for details).
Notice that by default this argument is 10, not 0.

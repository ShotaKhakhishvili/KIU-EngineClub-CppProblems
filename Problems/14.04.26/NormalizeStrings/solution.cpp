/*
    normalizeLine

    Transforms the input string according to the following rules:

    1) Whitespace:
       - Remove leading and trailing whitespace
       - Replace consecutive whitespace (spaces, tabs, etc.) with a single space

    2) Allowed characters:
       - Keep letters (a–z, A–Z), digits (0–9), and punctuation: '.', '!', '?'
       - Remove all other characters (e.g. ',', '#', '%', '@')

    3) Letter casing:
       - All letters are lowercase by default
       - After '.', '!', or '?', the next letter must be uppercase
       - Do NOT capitalize the first letter automatically

    4) Punctuation handling:
       - Only '.', '!', '?' are allowed
       - Collapse consecutive punctuation:
            "!!!"     -> "!"
            "???"     -> "?"
            "!!!???"  -> "?"   (last one wins)
       - Remove leading punctuation:
            "...hello" -> "hello"

    5) Digits:
       - Remain unchanged

    6) Empty result:
       - If no valid characters remain, return "Empty"

    Constraints:
       - O(n) time complexity expected
       - Use std::string and <cctype> utilities (isspace, isalpha, isdigit, tolower, toupper)

    Example:
       Input:  "   hELLo,,,   woRLD!!   how ARE   yOu???   "
       Output: "hello world? How are you?"
*/

#include <string>

std::string normalizeLine(const std::string& input)
{
   bool started = false;
   bool makeUpper = true;
   std::string result = "";

   for (int i = 0; i < input.size(); i++){
      char ch = input[i];

      if (!isspace(ch) && isalnum(ch)){
         started = true;
      }
      if (started){
         if (i < input.size() - 1 && isspace(ch) && !isspace(input[i+1])){
            result += " ";
         } 
         else if (ch == '!' || ch == '?' || ch == '.'){
            if ((i == input.size() - 1) || (i < input.size() - 1 && input[i+1] != '!' && input[i+1] != '?' && input[i+1] != '.' && !isalnum(input[i+1]))){

               result += ch;
            }
            makeUpper = true;
         }
         else if (isalpha(ch)){
            if (makeUpper){
               result += toupper(ch);
               makeUpper = false;
            }
            else {
               result += tolower(ch);
            }
         }
         else if (isdigit(ch)){
            result += ch;
            makeUpper = false;
         }
      } 
   }

   if (result.size() == 0){
      return "Empty";
   }
   else {
      return result;
   }
   
}
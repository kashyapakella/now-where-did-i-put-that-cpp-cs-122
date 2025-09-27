#include <string>

using namespace std;

int findString(string input, char find)
{

   if (input.length() == 0)
   {
      return -500;
   }

   for (int i = 0; i < input.length(); i++)
   {

      if (input[i] == find)
      {
         return i;
      }
   }

   return -1;
}

int findString(string input, string find)
{

   if (input.length() == 0)
   {
      return -500;
   }

   for (int i = 0; i <= input.length() - find.length(); i++)
   {
      bool match = true;

      for (int j = 0; j < find.length(); j++)
      {

         if (input[i + j] != find[j])
         {

            match = false;
            break;
         }
      }

      if (match)
      {
         return i;
      }
   }

   return -1;
}

#include <stdio.h>

int main() 

{
  int  html, java, cpp, c_sharp, javascript, php, swift, kotlin, python;
  printf("Welcome to the Calumet High School Programming Survey \n");
  
  printf("Please enter the total number of students who know:\n");

  
  printf("HTML:");
  scanf("%d",&html);

  printf("Java:");
  scanf("%d",&java);
  
  printf("C++:");
  scanf("%d",&cpp);

  printf("C#:");
  scanf("%d",&c_sharp);

  printf("JavaScript:");
  scanf("%d",&javascript);

  printf("PhP:");
  scanf("%d",&php);

  printf("Swift:");
  scanf("%d",&swift);

  printf("Kotlin:");
  scanf("%d",&kotlin);
  
  printf("Python:");
  scanf("%d",&python);

  int all_students = html + java + cpp + c_sharp + javascript + php + swift + kotlin + python;

  int web_languages = javascript + php + html;

  int mobile_language = swift + kotlin;

  int objectoriented_language = java + cpp + c_sharp + python;

  printf("Total students: %d\n", all_students);

  
  printf("Total who know Web languages: %d\n", web_languages);


  
  printf("Total who know Mobile App Dev languages: %d\n", mobile_language);


  
  printf("Total who know Object Oriented languages: %d\n", objectoriented_language);
  
  return 0;
}

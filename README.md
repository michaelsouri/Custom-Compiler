# Custom-Compiler

### Part I 
#### Create the following text file: “finalp1.txt”
 ```
 1.            program  f2021;
 2.            ** This program computes and prints the value
 3.                  Of an expression **
 4.           var
 5.               ** declare variables **
 6.               a1 ,       b2a ,       wc, ba12    : integer ;
 7.          begin
 8.                  a1               = 3 ;
 9.                  b2a =          4 ;
10.                 wc           =  5    ;
11.            write(wc );  ** display wc **
12.
13.                 ** compute the value of the expression **
14.                 ba12 = a1 * ( b2a + 2 * wc)          ;
15.                 write ( "value=",          ba12   ) ;  ** print the value of ba12 **
16.           end.
```

#### Apply the following rules to this file and copy the new version in file “finalp2.txt”
a.    Any line/s or part of a line that begins with ** and ends with ** is considered as a comment line (i.e. lines #2,3,5, 11,13,15), remove them </br>
b.    Any blank lines must be removed (i.e. line #12) </br>
c.    Extra spaces in each line must be removed, Leave one space before and one after each token (example: line 8: a1 = 3 ; ) </br>
```
The “finalp2.txt” should look like this
  1.           program  f2021 ;
  2.           var
  3.           a1 , b2a , wc , ba12  : integer ;
  4.           begin
  5.           a1 = 3 ;
  6.           b2a = 4 ;
  7.           wc = 5 ;
  8.           write (wc ) ;
  8.           ba12 = a1 * ( b2a + 2 * wc) ;
  9.           write ( "value=" , ba12 ) ;  
10.           end.
```
### Part II
#### Use the following grammar
```
  <prog>           -->    program   <identifier>; var  <dec-list>  begin  <stat-list> end.
  <identifier>     -->    <letter>{<letter>|<digit>}
  <dec-list>       -->    <dec> : <type> ;
  <dec>            -->    <identifier>,<dec>| < identifier >
  <type>           -->    integer 
  <stat-list>      -->    <stat> | <stat> <stat-list>
  <stat>           -->    <write> |  <assign>
  <write>          -->    write ( <str> < identifier > );
  <str>            -->    ”value=” , | λ  
  <assign>         -->    < identifier > = <expr>;
  <expr>           -->    <expr> + <term>  | <expr>-< <term> |  < term>
  <term>           -->    <term>*<factor> | <term> / <factor>| <factor> 
  <factor>         -->    < identifier > | <number> | ( <expr> )
  <number>         -->    <sign><digit>{<digit> }
  <sign>           -->    + | - | λ
  <digit>          -->    0|1|2|…|9
  <letter>         -->    a|b|c|d|w|f 
```
> In which  program, var, begin, end. , integer , and write are reserved words

  Your program should detect and produce the following error messages
                                                                                                                                                 
          program   is expected (if program is missing or spelled wrong )
          var            is expected ( if var is missing or spelled wrong)
          begin        is expected (if begin is missing or spelled wrong ) 
          end.          is expected (if end. is missing or spelled wrong)         
          integer     is expected (if integer is missing or spelled wrong)
          unknown identifier  if variable  is not defined

          ;                 is missing
          ,                 is missing
          .                 is missing
          (                  Left parentheses is missing
          )                 Right parentheses is missing 
         If  the write spells wrong, issue an error message 
#### Output : Either one of the above messages or No error/ Some errors without error messages

### Part III
#### If there are no ERRORS, translate the program to a high-level language: C++, C#, Python, or Java. Run the program to display the same output. This is the C++ version of the program in part I
   
    #include  <iostream>
      using namespace  std;
      int main()
      {
           int a1 , b2a , wc, ba12 ;    
           a1 = 3 ;
           b2a = 4 ;
           wc = 5 ;
           cout << wc ;  
           ba12 = a1 * (b2a + 2 * wc ) ;
           cout << "value=" << ba12 << endl;
           return 0;
      }
   
> The first grammar is the general grammar for the whole program, other grammars are to identify the statement within  the program 
> <prog> --> program       <identifier>             ;    var    <dec-list>      begin    <stat-list>    end.

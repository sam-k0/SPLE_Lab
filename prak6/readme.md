Dumme Lösung: 
`g++ -DPASSENGER main.cpp prak6/src/RouteCalc.cpp -o output_executable`

smartere lösung:
`g++ newmain.cpp -o newmain`



| | #ifdef Mechanism | Strategy Pattern | Service Locator |
|---|---|---|---|
| **Maintainability:** Imagine there were real lengthy (but similar) algorithms. What would you have to do to avoid fragments of identical code at different locations in the code? |Thats what functions are for | share them using inheritance|
| **Reuse:** What parts of the code can be reused without modification? What parts are product specific? |Nothing is reusable|We can reuse the interface|
| **Testing:** When reusing the solution - do you trust it or would you rather test it again? |Test again| Test again |
|**Configuration:** What files do you need to touch in order to configure your solution? |none, defines are set during compiletime|All where I need to change the class|
|**Usage:** You misspell "Pasenger" or you choose two variants at once or none at all. What will happen? | if the define is misspelt there will be a problem|There will be a compiler error |
|**Flexibility:** At what time is the selected algorithm fix? (e.g. compile time) | Compile time | Right now compile time, runtime is possible | Runtime |


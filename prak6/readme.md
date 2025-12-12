
| | #ifdef Mechanism | Strategy Pattern | Service Locator |
|---|---|---|---|
| **Maintainability:** Imagine there were real lengthy (but similar) algorithms. What would you have to do to avoid fragments of identical code at different locations in the code? |Different ifdef'd functions | share them using inheritance, move common code to the base class|contains strategy pattern|
| **Reuse:** What parts of the code can be reused without modification? What parts are product specific? |Nothing is reusable|We can reuse the interface|
| **Testing:** When reusing the solution - do you trust it or would you rather test it again? |Test again| If we dont touch it we dont need to test it again |
|**Configuration:** What files do you need to touch in order to configure your solution? |The config file, but we are still changing code|The constructor|Installer script? We use a registry for the components|
|**Usage:** You misspell "Pasenger" or you choose two variants at once or none at all. What will happen? | if the define is misspelt there will be a problem|There will be a compiler error |
|**Flexibility:** At what time is the selected algorithm fix? (e.g. compile time) | Compile time | Right now compile time, runtime is possible | Runtime |



| |#ifdef-Mechanism|Strategy Pattern|Service Locator|
|---|---|---|---|
|What did you have to do to support the new variant(apart from the code for the new variant itself)? |Add new ifdefs for the bus|add a new class|Add the new class and register|			
|Did you have to touch existing code?|Yes|Yes|Theoretically no|
|How did you proceed? Is it likely that you do mistakes when doing this?|YES|Not really|Not really|	
|Imagine you implement 10 algorithms like this! Is this still maintainable?|Not at all|Kinda|Definitely|


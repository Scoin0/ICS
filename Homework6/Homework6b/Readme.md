# Homework 6b Assignment
---

# Git Practice   

You are going to use ```git``` here. First, do some research about the ```git``` command. Once you have basic concepts, follow the step-by-step instructions below.

## Instructions:    
1. Log in to the School's Unix and run the git's configuration commands like these.
    ```
    git config --global user.name <Your name>
    git config --global user.email <Your email address>
    git config --global color.ui auto
    ```    
    - You can check if the settings are done by running this.
    ``` 
    git config -l
    ```
2. Make a new directory and enter the directory
    ```
    mkdir git_practice
    cd git_practice
    ```
3. In the directory, run the following command.
    ```
    git init
    ```    
4. Copy your files of homework 3b (everything you need to compile) to the directory.
5. Create a text filed called ```.gitignore```
    - The file must contain these lines.
    ```
    *
    !.gitignore
    !*.c
    !*.cpp
    !*.h
    !Makefile
    ```    
6. Run the following command.
    ```
    git status
    ```
7. Run the command like this for each file in the directory:
    ```
    git add <file name>
    ```
8. Rerun the ```git status``` command.
9. Run the following command.
    ```
    git commit -m "Add file of homework3b"
    ```
10. Rerun the ```git status``` command.    
11. Run the following commands.
    ```
    script proof.txt
    git log --pretty='%h %ad %cn: %s %d'
    git status
    ls -la
    make
    git status
    ls -la
    exit
    ```
12. Finally, write a report ```report.txt``` to answer the following questions:
    - What is the purpose of the ```git``` utility?
    - What does ```git init``` do?
    - What does ```git add``` do?
    - What does ```git commit``` do? Also what does the ```-m``` option do?
    - What does ```git status``` do?
    - What does ```git log``` do? Also what does ```--pretty='%h %ad %cn: %s %d'``` mean?
    - What is the role of ```.gitignore```?  
---
    
# Test Plan    

    - Write a test plan consisting of a series of tests and desired outcomes to completely test Project 1. You will need around 30 to 40 cases to go through all the requirements.
    
---     

## Comments after submission:

```    

1. Test Plan:
    - Testing arguments? 
    - How does it test readfile/writefile?
   
```

prompt text.code
step 1:- i want to create a new repository through vs code so i want commnds to perform these task and i want to push daily

step 2:- PS C:\Users\Dipith\Downloads\dipith vs code> git commit -m "Initial commit"
On branch main
Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   R25EF075/main.c

step 3:- i want to create new repo and i want to add file and i want to push it daily from vs code

step 4:- PS C:\Users\Dipith\Downloads\dipith vs code> git commit -m "first commit"
On branch main
nothing to commit, working tree clean

step 5:- PS C:\Users\Dipith\Downloads\dipith vs code> git push origin main
info: please complete authentication in your browser...
remote: Repository not found.
fatal: repository 'https://github.com/yourusername/your-repo-name.git/' not found
PS C:\Users\Dipith\Downloads\dipith vs code> 

step 6:- but i have created a repo in my git hub ac

step 7:- in vs code all file are there pls delete it

step 8:- which files are present the vs code

step 9:- nothing added to commit but untracked files present (use "git add" to track)
PS C:\Users\Dipith\Downloads\dipith vs code> git add .
>> git commit -m "Remove all files"
>> git push origin main
[master (root-commit) 3a9b797] Remove all files
 1 file changed, 1 insertion(+)
 create mode 100644 R25EF075/main.c
error: src refspec main does not match any
error: failed to push some refs to 'origin'
PS C:\Users\Dipith\Downloads\dipith vs code> 

step 10:- PS C:\Users\Dipith\Downloads\dipith vs code> git branch -M main
>> git push -u origin main
fatal: 'origin' does not appear to be a git repository
fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.

step 11:- ttps://github.com/dipithsm356-cloud/R25EF075.git
 ! [rejected]        main -> main (fetch first)
error: failed to push some refs to 'https://github.com/dipithsm356-cloud/R25EF075.git'
hint: Updates were rejected because the remote contains work that you do not
hint: have locally. This is usually caused by another repository pushing to
hint: the same ref. If you want to integrate the remote changes, use
hint: 'git pull' before pushing again.
hint: See the 'Note about fast-forwards' in 'git push --help' for details.

step 12:- when i am pushing the branch has not renote branch.would 

step 13:- >> git branch -M main
>> git push -u origin main --force
error: remote origin already exists.
Enumerating objects: 8, done.
Counting objects: 100% (8/8), done.
Delta compression using up to 12 threads
Compressing objects: 100% (2/2), done.
Writing objects: 100% (8/8), 547 bytes | 273.00 KiB/s, done.
Total 8 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
To https://github.com/dipithsm356-cloud/R25EF075.git
 + 20cf23e...8d0cf2a main -> main (forced update)
branch 'main' set up to track 'origin/main'



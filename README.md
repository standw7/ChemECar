# Installation

In order to use this script you need to install a few libraries. Additionally, this is set up as a Jupyter Notebook and should be run as such. 

### Required Packages 

* Ax
* Matplotlib
* pandas
* NumPy 
* ipykernel


### Recommended Install (conda)

To easily install the required packages and set up the environment needed to run this script, run the following lines of code (in order)

1. conda create -n chemcar python=3.11
2. conda activate chemcar
3. conda install matplotlib pandas numpy pytorch jupyter torchvision -c pytorch
4. pip install ax-platform


# How to Sync and Save!

### TO PULL (Sync from GitHub)
1. Close ALL the files in VSCode that are related to chem e car and don’t save them!
2. Open Github Desktop (application not website)
3. Under the “Changes” on the left hand side, right click each staged file and discard the changes (everything useful should be saved from pushing to github, this prevents random stray things floating around)
4. Click “Fetch Origin” and wait for it to load
5. Click “Current Branch”
6. At the bottom of the screen, click “Choose a branch to merge into main”
7. Click (under Other branches) “upstream/main”
8. Click (big blue button) “Create a merge commit”
9. Click the blue “Push origin” button
10. Click “Open in Visual Studio Code”

### TO PUSH (Save to GitHub)
1. Save all of your files on VSCode
2. Click “Source control” (should be the third icon down on the right sidebar of vscode)
3. For each file under the “Changes” tab, click the plus button to stage them (prepare them for saving)
4. IMPORTANT: Write a message to describe what you did (could be as simple as “tested another cell” unless you changed something important). This is an important step because weird things happen with the VSCode integration when you don’t leave a message
5. Click the “Commit” button
6. Click the “Sync Changes” button
7. Click ok if there is a popup (usually says something like “This action will pull and push commits from and to “origin/main”). If there is no popup ignore this step.
8. Navigate to your GitHub repository page (this is not the page everyone shares but your personal copy). This is found in the left bar menu under “repositories”.
9. Click “Contribute”
10. Click “Open Pull Request”
11. You can either write a description or not, up to you.
12. Click “Create Pull Request”
13. Click "Merge Pull Request"
14. Click "Confirm merge"



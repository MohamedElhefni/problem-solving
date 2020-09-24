today=$(date +%D)
git status
git add .
git commit -m "$today"
git push origin master
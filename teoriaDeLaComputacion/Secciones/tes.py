import re

# Check if the string contains "ai"

txt = "The rain in Spain"
x = re.search(".*ai.*",txt)

if x:
    print("YES! We have a match!")
else:
    print("No match")

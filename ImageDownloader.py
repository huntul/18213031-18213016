import os
import urllib
import urllib2
from bs4 import BeautifulSoup

url = 'http://www.itb.ac.id'
page = urllib2.urlopen(url)
soup = BeautifulSoup(page)
tags=soup.findAll('img')
for tag in tags:
	filename = tag["src"].split("/")[-1]
	print tag['src']
	urllib.urlretrieve(url + tag['src'], filename)
os.system('rsync -r "/cygdrive/d/Kuliah/STI/Semester 5/pemrograman integratif/Server Python" "/cygdrive/c/Users/user/"')

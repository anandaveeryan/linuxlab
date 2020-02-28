#!/usr/bin/env bash
ps -ef | tail -f | grep stat.sh > /home/anandaveeryan/Desktop/code/linux/out.txt
if grep -q bash /home/anandaveeryan/Desktop/code/linux/out.txt; then
  sendmail anandaveeryan1999@gmail.com < /home/anandaveeryan/Desktop/email.txt
fi
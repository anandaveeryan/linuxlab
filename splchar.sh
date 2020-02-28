#!/usr/bin/env bash
ls > /home/anandaveeryan/Desktop/code/linux/out.txt
if grep -q "[!@#$%^&*()]" /home/anandaveeryan/Desktop/code/linux/out.txt; then
    echo "Error in file name"
fi
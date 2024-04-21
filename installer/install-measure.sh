#!/bin/bash

# Measure binary here
# Might be something like https://github.com/hinqiwame/measure/releases/latest/measure ?
curl -LJO https://github.com/hinqiwame/measure/releases/latest/download/measure

if [ $? -eq 0 ]; then
    sudo mv measure /usr/bin/
    echo "Measure installed."
else
    echo "Failed to install measure."
fi

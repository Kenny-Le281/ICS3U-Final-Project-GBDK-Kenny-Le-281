#!/bin/bash

# create an GBDK directory in the root directory
mkdir ./GBDK
mkdir ./GBDK/lesson-01
mkdir ./GBDK/lesson-02
mkdir ./GBDK/lesson-03
mkdir ./GBDK/lesson-04
mkdir ./GBDK/lesson-05
mkdir ./GBDK/lesson-06
mkdir ./GBDK/lesson-07
mkdir ./GBDK/lesson-08
mkdir ./GBDK/lesson-09
mkdir ./GBDK/lesson-10
mkdir ./GBDK/lesson-11
mkdir ./GBDK/lesson-12
mkdir ./GBDK/lesson-13

# always run on new instance
cp ./.devcontainer/.bashrc ~/.bashrc
# install CPPLint
sudo apt update
sudo apt -y full-upgrade
sudo apt-get -y install python3-pip
sudo pip3 install cpplint
# shellcheck disable=SC1090
source ~/.bashrc
git config pull.rebase false
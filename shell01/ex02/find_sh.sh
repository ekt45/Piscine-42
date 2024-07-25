#!/bin/bash

DIR=$(pwd)

find . -type f -name "*.sh" -exec basename {} .sh \; 


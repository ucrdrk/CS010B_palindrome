FROM gradescope/autograder-base 

RUN apt update && apt-get -y install build-essential cmake git libc++-14-dev libgtest-dev clang-tidy python3 python3-pip

# Upgrade pip and install gradescope dependencies
RUN pip3 install --upgrade pip
RUN pip3 install subprocess32
RUN pip3 install gradescope-utils
RUN pip3 install canvasapi

COPY run_autograder /autograder/
RUN chmod +x /autograder/run_autograder
COPY autograder.py /autograder/

WORKDIR /autograder

RUN git clone https://github.com/UCR-CS010B/assn_palindrome tests

ENTRYPOINT ./run_autograder
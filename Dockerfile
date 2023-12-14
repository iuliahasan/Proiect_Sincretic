FROM g++:latest
WORKDIR /usr/src/solution
COPY solution.cpp .
RUN gcc -o solution solution.cpp -lstdc++
CMD ["./solution"]

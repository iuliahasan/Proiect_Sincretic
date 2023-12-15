FROM g++:latest
WORKDIR /usr/src/solution
COPY solution.cpp .
RUN g++ -o solution solution.cpp -lstdc++
CMD ["./solution"]

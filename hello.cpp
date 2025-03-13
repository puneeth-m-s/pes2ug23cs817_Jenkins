stage('Build') {
    steps {
        sh 'g++ -o PES2UG23CS817-1 src/hello.cpp'  // Change `src/hello.cpp` if needed
    }
}

pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                script {
                    echo 'Compiling C++ code...'
                    sh 'g++ -o PES2UG23CS817-1 hello.cpp'  // Replace with YOUR_SRN
                }
            }
        }

        stage('Test') {
            steps {
                script {
                    echo 'Running the program...'
                    sh './PES2UG23CS817-1'  // Execute compiled C++ program
                }
            }
        }

        stage('Deploy') {
            steps {
                script {
                    echo 'Deployment step (placeholder)...'
                }
            }
        }
    }

    post {
        failure {
            echo 'Pipeline failed'
        }
    }
}

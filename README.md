# best-test-package-ever
Dummy project for testing

# steps:
(rm -rf build) \
mkdir build \
cd build \
cmake .. \
make \
./tests

# Create runner in Docker container

1. Pull the Runner Image
GitHub provides an official image to use as a self-hosted runner. Pull it with:

```
docker pull myoung34/github-runner:latest
```
2. Generate a GitHub Runner Token
Go to your GitHub repository or organization:

Navigate to Settings > Actions > Runners.
Click "New self-hosted runner".
Select Linux as the OS.
Copy the registration token and URL.

3. Run the GitHub Runner in a Docker Container
Now, use the pulled image to start a container. Replace YOUR_GITHUB_TOKEN and YOUR_REPO_URL with your actual values.

```
docker run -d \
  --name github-runner1 \
  -e REPO_URL="https://" \
  -e RUNNER_NAME="my-docker-runner-1" \
  -e RUNNER_TOKEN="YOUR_GITHUB_TOKEN" \
  -e RUNNER_WORKDIR="/tmp/github-runner-1" \
  -v /var/run/docker.sock:/var/run/docker.sock \
  myoung34/github-runner:latest
```

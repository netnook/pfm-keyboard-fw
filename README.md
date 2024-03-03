# Building qmk firmware

1. Check out qmk firmware somewhere

```
git clone https://github.com/qmk/qmk_firmware
```

2. Copy the qmk folder in this repo to the qmk_firmware folder

```
rsync --recursive <this repo>/qmk/ <qmk_firmware>/keyboards/pfm/
```

3. Switch to qmk firmware folder and bulid

```
cd <qmk_firmware>
RUNTIME=podman util/docker_build.sh pfm:default
```

4. Copy the resulting firmware file to the keyboard

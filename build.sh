#!/bin/bash

# Entity library.
# @copyright MIT License
# @author Emilio González Montaña <emilio@ociotec.com>
# @see https://github.com/ociotec/entity */

cat << EOF

                      ##         .
                ## ## ##        ==
             ## ## ## ## ##    ===
         /"""""""""""""""""\___/ ===
    ~~~ {~~ ~~~~ ~~~ ~~~~ ~~~ ~ /  ===- ~~~ Building entity in a docker container
         \______ o           __/
           \    \         __/
            \____\_______/
EOF

docker run --rm --volume ${PWD}:/root/workspace ociotec/docker-qt-builder \
       bash -c '. /opt/qt59/bin/qt59-env.sh && \
                mkdir -p build && \
                cd build && \
                \
                echo -e "\n\e[93mRunning cmake...\e[0m" && \
                cmake .. && \
                \
                echo -e "\n\e[93mRunning make...\e[0m" && \
                make -j && \
                \
                echo -e "\n\e[93mRunning tests...\e[0m" && \
                GTEST_COLOR=1 ./tests/test-entity && \
                \
                echo -e "\n\e[93mAll done.\e[0m\n"'

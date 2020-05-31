FROM ros:eloquent

RUN apt-get update && apt-get install wget git curl vim qt4-default libeigen3-dev protobuf-compiler libprotobuf-dev --assume-yes


COPY . /root/parsian_ssl
#RUN cd /root/parsian_ssl/ && git submodule update --recursive --init 
#RUN source /root/parsian_ssl/parsian_ws/src/parsian_util/tools/env.zsh


#RUN /root/parsian_ws/src/parsian_ssl/parsian_msgs/deps.sh
#RUN /root/parsian_ws/src/parsian_ssl/parsian_communication/deps.sh
#RUN bash /root/parsian_ws/src/parsian_ssl/parsian_ai/deps.sh

#RUN source /opt/ros/kinetic/setup.bash
#RUN cd /root/parsian_ws/ && catkin build
#RUN source /root/parsian_ws/devel/source.bash

CMD ["bash"]

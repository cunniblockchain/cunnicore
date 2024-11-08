FROM phusion/baseimage:focal-1.0.0
LABEL maintainer="Cunni Developers <dev@cunni.org>"
LABEL description="Dockerised Cunni, built from Travis"

ARG USER_ID
ARG GROUP_ID

ENV HOME /home/cunni

# add user with specified (or default) user/group ids
ENV USER_ID ${USER_ID:-1000}
ENV GROUP_ID ${GROUP_ID:-1000}
RUN groupadd -g ${GROUP_ID} cunni && \
    useradd -u ${USER_ID} -g cunni -s /bin/bash -m -d /home/cunni cunni && \
    mkdir /home/cunni/.cunni && \
    chown ${USER_ID}:${GROUP_ID} -R /home/cunni

COPY bin/* /usr/local/bin/

RUN chmod a+x /usr/local/bin/*

USER cunni

VOLUME ["/home/cunni"]

EXPOSE 19841 9999 29841 29842

WORKDIR /home/cunni

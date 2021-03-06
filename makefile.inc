# generated by ./configure.sh --enable-numpy then edited manually

CC=gcc

CFLAGS=-fPIC -Wall -g -O3 -march=nocona -mtune=haswell -ftree-vectorize -fPIC -fstack-protector-strong -fno-plt -O2 -pipe
LDFLAGS=-g -fPIC -Wl,-O2 -Wl,--sort-common -Wl,--as-needed -Wl,-z,relro -Wl,-z,now -Wl,--disable-new-dtags

# PYTHONCFLAGS = -I/usr/include/python2.7
PYTHONCFLAGS = -I/usr/include/python2.7 -I/home/mirlab/miniconda3/envs/py2/lib/python2.7/site-packages/numpy/core/include

YAELCONF=linux64
YAELCFLAGS=-I/home/mirlab/cnn-cbir-benchmark/yael
YAELLDFLAGS=-L/home/mirlab/cnn-cbir-benchmark/yael/yael -Wl,-rpath,/home/mirlab/cnn-cbir-benchmark/yael/yael -lyael

SWIG=swig -python

WRAPLDFLAGS=-shared
LAPACKLDFLAGS=/usr/lib/libblas.so.3gf /usr/lib/liblapack.so.3gf
LAPACKCFLAGS=-DFINTEGER=int

USEARPACK=no
ARPACKLDFLAGS=/usr/lib64/libarpack.so.2

USETHREADS=yes
THREADCFLAGS=-DHAVE_THREADS

SHAREDEXT=so
SHAREDFLAGS=-shared
YAELSHAREDFLAGS=-shared

USENUMPY=yes
# NUMPYCFLAGS=-I/home/mirlab/.local/lib/python2.7/site-packages/numpy/core/include
NUMPYCFLAGS=-I/home/mirlab/miniconda3/envs/py2/lib/python2.7/site-packages/numpy/core/include
NUMPYSWIGFLAGS=-DHAVE_NUMPY


USEOPENMP=yes

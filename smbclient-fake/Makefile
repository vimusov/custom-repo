CC := clang
TARGET := libsmbclient.so.0

all:
	$(CC) -O2 -fPIC -Wall -Wextra -Werror -Wl,--version-script=stub.syms -shared -o $(TARGET) stub.c

clean:
	-rm $(TARGET)

install:
	install -D --mode=0755 $(TARGET) $(DESTDIR)/usr/lib/$(TARGET)

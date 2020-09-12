cmake_minimum_required(VERSION 3.17)
project(RTv1)

set(CMAKE_C_STANDARD 99)

include_directories(.)
include_directories(gnl)
include_directories(libft)
include_directories(/usr/local/include)

add_executable(RTv1
        gnl/get_next_line.c
        gnl/get_next_line.h
        libft/ft_memdel.c
        libft/ft_bzero.c
        libft/ft_memalloc.c
        libft/ft_join_and_free.c
        libft/ft_strclr.c
        libft/ft_strchr.c
        libft/ft_strdel.c
        libft/ft_strdup.c
        libft/ft_strlen.c
        libft/ft_strlcat.c
        libft/ft_strsub.c
        libft/libft.h
        include/RTv1.h
        src/main.c src/ft_color.c)

target_link_libraries(RTv1
        LINK_PUBLIC /usr/local/lib/libmlx.a "-framework OpenGL" "-framework AppKit")
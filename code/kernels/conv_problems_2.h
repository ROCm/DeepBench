// Vector saves w, h, c, n, k, filter_w(s), filter_h(r), pad_w, pad_h, wstride, hstride
// clang-format on
std::vector<std::tuple<unsigned int, unsigned int, unsigned int, unsigned int,
                       unsigned int, unsigned int, unsigned int, unsigned int,
                       unsigned int, unsigned int, unsigned int>>
    inception_v3_bs128 = {
        std::make_tuple( 17,  17,  128, 128, 128, 7, 1, 3, 0, 1, 1),
        std::make_tuple( 17,  17,  128, 128, 128, 1, 7, 0, 3, 1, 1),
        std::make_tuple( 17,  17,  128, 128, 192, 7, 1, 3, 0, 1, 1),
        std::make_tuple( 17,  17,  128, 128, 192, 1, 7, 0, 3, 1, 1),
        std::make_tuple(  8,   8, 1280, 128, 192, 1, 1, 0, 0, 1, 1),
        std::make_tuple(  8,   8, 1280, 128, 320, 1, 1, 0, 0, 1, 1),
        std::make_tuple(  8,   8, 1280, 128, 384, 1, 1, 0, 0, 1, 1),
        std::make_tuple(  8,   8, 1280, 128, 448, 1, 1, 0, 0, 1, 1),
        std::make_tuple( 17,  17,  160, 128, 160, 7, 1, 3, 0, 1, 1),
        std::make_tuple( 17,  17,  160, 128, 160, 1, 7, 0, 3, 1, 1),
        std::make_tuple( 17,  17,  160, 128, 192, 7, 1, 3, 0, 1, 1),
        std::make_tuple( 17,  17,  160, 128, 192, 1, 7, 0, 3, 1, 1),
        std::make_tuple( 17,  17,  192, 128, 192, 7, 1, 3, 0, 1, 1),
        std::make_tuple( 17,  17,  192, 128, 192, 3, 3, 0, 0, 2, 2),
        std::make_tuple( 17,  17,  192, 128, 192, 1, 7, 0, 3, 1, 1),
        std::make_tuple( 17,  17,  192, 128, 320, 3, 3, 0, 0, 2, 2),
        std::make_tuple( 35,  35,  192, 128,  32, 1, 1, 0, 0, 1, 1),
        std::make_tuple( 35,  35,  192, 128,  48, 1, 1, 0, 0, 1, 1),
        std::make_tuple( 35,  35,  192, 128,  64, 1, 1, 0, 0, 1, 1),
        std::make_tuple(  8,   8, 2048, 128, 192, 1, 1, 0, 0, 1, 1),
        std::make_tuple(  8,   8, 2048, 128, 320, 1, 1, 0, 0, 1, 1),
        std::make_tuple(  8,   8, 2048, 128, 384, 1, 1, 0, 0, 1, 1),
        std::make_tuple(  8,   8, 2048, 128, 448, 1, 1, 0, 0, 1, 1),
        std::make_tuple( 35,  35,  256, 128,  48, 1, 1, 0, 0, 1, 1),
        std::make_tuple( 35,  35,  256, 128,  64, 1, 1, 0, 0, 1, 1),
        std::make_tuple( 35,  35,  288, 128, 384, 3, 3, 0, 0, 2, 2),
        std::make_tuple( 35,  35,  288, 128,  48, 1, 1, 0, 0, 1, 1),
        std::make_tuple( 35,  35,  288, 128,  64, 1, 1, 0, 0, 1, 1),
        std::make_tuple(299, 299,    3, 128,  32, 3, 3, 0, 0, 2, 2),
        std::make_tuple(147, 147,   32, 128,  64, 3, 3, 1, 1, 1, 1),
        std::make_tuple(149, 149,   32, 128,  32, 3, 3, 0, 0, 1, 1),
        std::make_tuple(  8,   8,  384, 128, 384, 3, 1, 1, 0, 1, 1),
        std::make_tuple(  8,   8,  384, 128, 384, 1, 3, 0, 1, 1, 1),
        std::make_tuple(  8,   8,  448, 128, 384, 3, 3, 1, 1, 1, 1),
        std::make_tuple( 35,  35,   48, 128,  64, 5, 5, 2, 2, 1, 1),
        std::make_tuple( 35,  35,   64, 128,  96, 3, 3, 1, 1, 1, 1),
        std::make_tuple( 73,  73,   64, 128,  80, 1, 1, 0, 0, 1, 1),
        std::make_tuple( 17,  17,  768, 128, 128, 1, 1, 0, 0, 1, 1),
        std::make_tuple( 17,  17,  768, 128, 160, 1, 1, 0, 0, 1, 1),
        std::make_tuple( 17,  17,  768, 128, 192, 1, 1, 0, 0, 1, 1),
        std::make_tuple( 73,  73,   80, 128, 192, 3, 3, 0, 0, 1, 1),
        std::make_tuple( 35,  35,   96, 128,  96, 3, 3, 0, 0, 2, 2),
        std::make_tuple( 35,  35,   96, 128,  96, 3, 3, 1, 1, 1, 1)};
// clang-format off

// clang-format off
std::vector<std::tuple<unsigned int, unsigned int, unsigned int, unsigned int,
                       unsigned int, unsigned int, unsigned int, unsigned int,
                       unsigned int, unsigned int, unsigned int>>
    resnet101_bs128 = {
        std::make_tuple( 14,  14, 1024, 128, 1024, 1, 1, 0, 0, 1, 1),
        std::make_tuple( 14,  14, 1024, 128, 1024, 3, 3, 1, 1, 1, 1),
        std::make_tuple( 14,  14, 1024, 128, 2048, 1, 1, 0, 0, 1, 1),
        std::make_tuple( 14,  14, 1024, 128, 2048, 1, 1, 0, 0, 2, 2),
        std::make_tuple( 28,  28, 1024, 128, 1024, 3, 3, 1, 1, 2, 2),
        std::make_tuple( 14,  14, 2048, 128, 2048, 3, 3, 1, 1, 2, 2),
        std::make_tuple(  7,   7, 2048, 128, 2048, 1, 1, 0, 0, 1, 1),
        std::make_tuple(  7,   7, 2048, 128, 2048, 3, 3, 1, 1, 1, 1),
        std::make_tuple( 56,  56,  256, 128,  256, 1, 1, 0, 0, 1, 1),
        std::make_tuple( 56,  56,  256, 128,  256, 3, 3, 1, 1, 1, 1),
        std::make_tuple( 56,  56,  256, 128,  512, 1, 1, 0, 0, 1, 1),
        std::make_tuple( 56,  56,  256, 128,  512, 1, 1, 0, 0, 2, 2),
        std::make_tuple(224, 224,    3, 128,   64, 7, 7, 3, 3, 2, 2),
        std::make_tuple( 28,  28,  512, 128, 1024, 1, 1, 0, 0, 1, 1),
        std::make_tuple( 28,  28,  512, 128, 1024, 1, 1, 0, 0, 2, 2),
        std::make_tuple( 28,  28,  512, 128,  512, 1, 1, 0, 0, 1, 1),
        std::make_tuple( 28,  28,  512, 128,  512, 3, 3, 1, 1, 1, 1),
        std::make_tuple( 56,  56,  512, 128,  512, 3, 3, 1, 1, 2, 2),
        std::make_tuple( 56,  56,   64, 128,  256, 1, 1, 0, 0, 1, 1)};
// clang-format on

// clang-format off
std::vector<std::tuple<unsigned int, unsigned int, unsigned int, unsigned int,
                       unsigned int, unsigned int, unsigned int, unsigned int,
                       unsigned int, unsigned int, unsigned int>>
    resnet50_bs128 = {std::make_tuple( 14,  14, 1024, 128, 2048, 1, 1, 0, 0, 2, 2),
                      std::make_tuple( 14,  14, 1024, 128,  256, 1, 1, 0, 0, 1, 1),
                      std::make_tuple( 14,  14, 1024, 128,  512, 1, 1, 0, 0, 2, 2),
                      std::make_tuple( 28,  28,  128, 128,  128, 3, 3, 1, 1, 1, 1),
                      std::make_tuple( 28,  28,  128, 128,  512, 1, 1, 0, 0, 1, 1),
                      std::make_tuple(  7,   7, 2048, 128,  512, 1, 1, 0, 0, 1, 1),
                      std::make_tuple( 14,  14,  256, 128, 1024, 1, 1, 0, 0, 1, 1),
                      std::make_tuple( 14,  14,  256, 128,  256, 3, 3, 1, 1, 1, 1),
                      std::make_tuple( 56,  56,  256, 128,  128, 1, 1, 0, 0, 2, 2),
                      std::make_tuple( 56,  56,  256, 128,  512, 1, 1, 0, 0, 2, 2),
                      std::make_tuple( 56,  56,  256, 128,   64, 1, 1, 0, 0, 1, 1),
                      std::make_tuple(230, 230,    3, 128,   64, 7, 7, 0, 0, 2, 2),
                      std::make_tuple( 28,  28,  512, 128, 1024, 1, 1, 0, 0, 2, 2),
                      std::make_tuple( 28,  28,  512, 128,  128, 1, 1, 0, 0, 1, 1),
                      std::make_tuple( 28,  28,  512, 128,  256, 1, 1, 0, 0, 2, 2),
                      std::make_tuple(  7,   7,  512, 128, 2048, 1, 1, 0, 0, 1, 1),
                      std::make_tuple(  7,   7,  512, 128,  512, 3, 3, 1, 1, 1, 1),
                      std::make_tuple( 56,  56,   64, 128,  256, 1, 1, 0, 0, 1, 1),
                      std::make_tuple( 56,  56,   64, 128,   64, 1, 1, 0, 0, 1, 1),
                      std::make_tuple( 56,  56,   64, 128,   64, 3, 3, 1, 1, 1, 1)};
// clang-format on

// example_fuzz_target.cc
extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
    YourLibraryFunction(data, size);
    return 0;
}

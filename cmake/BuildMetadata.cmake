include_guard(GLOBAL)

if (IS_DIRECTORY "${PROJECT_SOURCE_DIR}/.git")
    execute_process(
        COMMAND git rev-parse --short HEAD
        OUTPUT_VARIABLE SGXLKL_GIT_COMMIT
        WORKING_DIRECTORY "${PROJECT_SOURCE_DIR}")
    string(STRIP "${SGXLKL_GIT_COMMIT}" SGXLKL_GIT_COMMIT)
else()
    set(SGXLKL_GIT_COMMIT "unknown")
endif()

file(READ "VERSION" SGXLKL_VERSION)
string(STRIP "${SGXLKL_VERSION}" SGXLKL_VERSION)

execute_process(
    COMMAND make --quiet -C "${PROJECT_SOURCE_DIR}/${LKL_SUBDIRECTORY}" kernelversion
    OUTPUT_VARIABLE LKL_VERSION)
string(STRIP "${LKL_VERSION}" LKL_VERSION)

add_library(sgxlkl-build-metadata INTERFACE)
target_compile_definitions(sgxlkl-build-metadata INTERFACE
    -DSGXLKL_GIT_COMMIT="${SGXLKL_GIT_COMMIT}"
    -DSGXLKL_VERSION="${SGXLKL_VERSION}"
    -DLKL_VERSION="${LKL_VERSION}"
    )
add_library(sgx-lkl::build-metadata ALIAS sgxlkl-build-metadata)

message(STATUS "SGX-LKL commit: ${SGXLKL_GIT_COMMIT}")
message(STATUS "SGX-LKL version: ${SGXLKL_VERSION}")
message(STATUS "LKL version: ${LKL_VERSION}")
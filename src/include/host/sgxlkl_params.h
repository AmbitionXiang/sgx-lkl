#ifndef SGXLKL_PARAMS_H
#define SGXLKL_PARAMS_H

#define SGXLKL_APP_CONFIG "SGXLKL_APP_CONFIG"
#define SGXLKL_CMDLINE "SGXLKL_CMDLINE"
#define SGXLKL_CWD "SGXLKL_CWD"
#define SGXLKL_DEBUGMOUNT "SGXLKL_DEBUGMOUNT"
#define SGXLKL_ESPINS "SGXLKL_ESPINS"
#define SGXLKL_ESLEEP "SGXLKL_ESLEEP"
#define SGXLKL_ETHREADS "SGXLKL_ETHREADS"
#define SGXLKL_ETHREADS_AFFINITY "SGXLKL_ETHREADS_AFFINITY"
#define SGXLKL_GW4 "SGXLKL_GW4"
#define SGXLKL_HD "SGXLKL_HD"
#define SGXLKL_HD_KEY "SGXLKL_HD_KEY"
#define SGXLKL_HD_RO "SGXLKL_HD_RO"
#define SGXLKL_HDS "SGXLKL_HDS"
#define SGXLKL_HD_VERITY "SGXLKL_HD_VERITY"
#define SGXLKL_HD_VERITY_OFFSET "SGXLKL_HD_VERITY_OFFSET"
#define SGXLKL_HOSTNAME "SGXLKL_HOSTNAME"
#define SGXLKL_HOSTNET "SGXLKL_HOSTNET"
#define SGXLKL_IP4 "SGXLKL_IP4"
#define SGXLKL_KERNEL_VERBOSE "SGXLKL_KERNEL_VERBOSE"
#define SGXLKL_MASK4 "SGXLKL_MASK4"
#define SGXLKL_MAX_USER_THREADS "SGXLKL_MAX_USER_THREADS"
#define SGXLKL_MMAP_FILES "SGXLKL_MMAP_FILES"
#define SGXLKL_PRINT_APP_RUNTIME "SGXLKL_PRINT_APP_RUNTIME"
#define SGXLKL_STACK_SIZE "SGXLKL_STACK_SIZE"
#define SGXLKL_SYSCTL "SGXLKL_SYSCTL"
#define SGXLKL_TAP "SGXLKL_TAP"
#define SGXLKL_TAP_MTU "SGXLKL_TAP_MTU"
#define SGXLKL_TAP_OFFLOAD "SGXLKL_TAP_OFFLOAD"
#define SGXLKL_TRACE_HOST_SYSCALL "SGXLKL_TRACE_HOST_SYSCALL"
#define SGXLKL_TRACE_INTERNAL_SYSCALL "SGXLKL_TRACE_INTERNAL_SYSCALL"
#define SGXLKL_TRACE_LKL_SYSCALL "SGXLKL_TRACE_LKL_SYSCALL"
#define SGXLKL_TRACE_IGNORED_SYSCALL "SGXLKL_TRACE_IGNORED_SYSCALL"
#define SGXLKL_TRACE_UNSUPPORTED_SYSCALL "SGXLKL_TRACE_UNSUPPORTED_SYSCALL"
#define SGXLKL_TRACE_REDIRECT_SYSCALL "SGXLKL_TRACE_REDIRECT_SYSCALL"
#define SGXLKL_TRACE_MMAP "SGXLKL_TRACE_MMAP"
#define SGXLKL_TRACE_SYSCALL "SGXLKL_TRACE_SYSCALL"
#define SGXLKL_TRACE_THREAD "SGXLKL_TRACE_THREAD"
#define SGXLKL_VERBOSE "SGXLKL_VERBOSE"
#define SGXLKL_WG_IP "SGXLKL_WG_IP"
#define SGXLKL_WG_PORT "SGXLKL_WG_PORT"
#define SGXLKL_WG_KEY "SGXLKL_WG_KEY"
#define SGXLKL_WG_PEERS "SGXLKL_WG_PEERS"
#define SGXLKL_OE_HEAP_PAGE_COUNT "SGXLKL_OE_HEAP_PAGE_COUNT"
#define SGXLKL_ENABLE_SWIOTLB "SGXLKL_ENABLE_SWIOTLB"
#define SGXLKL_HD_OVERLAY "SGXLKL_HD_OVERLAY"
#define SGXLKL_HOST_IMPORT_ENV "SGXLKL_HOST_IMPORT_ENV"

#ifndef SGXLKL_RELEASE
/* These environment variables do not have config settings, they are
 * automatically passed through and imported in the enclave */
extern const char* sgxlkl_auto_passthrough[12];
#endif

#endif /* SGXLKL_PARAMS_H */

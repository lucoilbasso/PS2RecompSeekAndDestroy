#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0017099c
// Address: 0x17099c - 0x1709a0
void entry_0017099c_0x17099c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017099c_0x17099c");
#endif

    ctx->pc = 0x17099cu;

    // 0x17099c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x17099cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    ctx->pc = 0x1709a0u;
}

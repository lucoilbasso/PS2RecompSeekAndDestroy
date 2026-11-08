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

// Function: entry_0011991c
// Address: 0x11991c - 0x119920
void entry_0011991c_0x11991c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011991c_0x11991c");
#endif

    ctx->pc = 0x11991cu;

    // 0x11991c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11991cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    ctx->pc = 0x119920u;
}

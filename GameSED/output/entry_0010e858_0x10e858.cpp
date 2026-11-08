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

// Function: entry_0010e858
// Address: 0x10e858 - 0x10e85c
void entry_0010e858_0x10e858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e858_0x10e858");
#endif

    ctx->pc = 0x10e858u;

    // 0x10e858: 0xae7001a4  sw          $s0, 0x1A4($s3)
    ctx->pc = 0x10e858u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 420), GPR_U32(ctx, 16));
    ctx->pc = 0x10e85cu;
}

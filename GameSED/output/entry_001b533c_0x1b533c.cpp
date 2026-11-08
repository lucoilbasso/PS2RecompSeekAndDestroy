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

// Function: entry_001b533c
// Address: 0x1b533c - 0x1b5348
void entry_001b533c_0x1b533c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b533c_0x1b533c");
#endif

    ctx->pc = 0x1b533cu;

    // 0x1b533c: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1b533cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b5340: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b5340u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1b5344: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1b5344u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x1b5348u;
}

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

// Function: entry_001b552c
// Address: 0x1b552c - 0x1b553c
void entry_001b552c_0x1b552c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b552c_0x1b552c");
#endif

    ctx->pc = 0x1b552cu;

    // 0x1b552c: 0x2e060400  sltiu       $a2, $s0, 0x400
    ctx->pc = 0x1b552cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1b5530: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1b5530u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b5534: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x1b5534u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x1b5538: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1b5538u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x1b553cu;
}

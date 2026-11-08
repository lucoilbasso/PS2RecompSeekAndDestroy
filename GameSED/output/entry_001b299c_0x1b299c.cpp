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

// Function: entry_001b299c
// Address: 0x1b299c - 0x1b29ac
void entry_001b299c_0x1b299c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b299c_0x1b299c");
#endif

    ctx->pc = 0x1b299cu;

    // 0x1b299c: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1b299cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1b29a0: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1b29a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b29a4: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x1b29a4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x1b29a8: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1b29a8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x1b29acu;
}

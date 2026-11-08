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

// Function: entry_001c7d9c
// Address: 0x1c7d9c - 0x1c7da8
void entry_001c7d9c_0x1c7d9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7d9c_0x1c7d9c");
#endif

    ctx->pc = 0x1c7d9cu;

    // 0x1c7d9c: 0x101d03  sra         $v1, $s0, 20
    ctx->pc = 0x1c7d9cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 20));
    // 0x1c7da0: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x1c7da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x1c7da4: 0x2471fc01  addiu       $s1, $v1, -0x3FF
    ctx->pc = 0x1c7da4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966273));
    ctx->pc = 0x1c7da8u;
}

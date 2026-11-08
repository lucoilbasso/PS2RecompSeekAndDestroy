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

// Function: entry_00106d00
// Address: 0x106d00 - 0x106d18
void entry_00106d00_0x106d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106d00_0x106d00");
#endif

    ctx->pc = 0x106d00u;

    // 0x106d00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x106d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x106d04: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x106d04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x106d08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x106d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106d0c: 0x24a538e8  addiu       $a1, $a1, 0x38E8
    ctx->pc = 0x106d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14568));
    // 0x106d10: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x106d10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106d14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x106d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x106d18u;
}

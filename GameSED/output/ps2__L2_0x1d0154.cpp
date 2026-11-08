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

// Function: $L2
// Address: 0x1d0154 - 0x1d0170
void ps2__L2_0x1d0154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L2_0x1d0154");
#endif

    ctx->pc = 0x1d0154u;

    // 0x1d0154: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d0154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d0158: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1d0158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1d015c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1d015cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1d0160: 0x10c2000a  beq         $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D0160u;
    {
        const bool branch_taken_0x1d0160 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d0160) {
            ctx->pc = 0x1D018Cu;
            return;
        }
    }
    ctx->pc = 0x1D0168u;
    // 0x1d0168: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d0168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d016c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1d016cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x1d0170u;
}

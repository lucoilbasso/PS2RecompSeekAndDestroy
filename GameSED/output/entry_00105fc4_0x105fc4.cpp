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

// Function: entry_00105fc4
// Address: 0x105fc4 - 0x105fe0
void entry_00105fc4_0x105fc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105fc4_0x105fc4");
#endif

    ctx->pc = 0x105fc4u;

    // 0x105fc4: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x105FC4u;
    {
        const bool branch_taken_0x105fc4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x105FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105FC4u;
        // 0x105fc8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105fc4) {
            ctx->pc = 0x106030u;
            return;
        }
    }
    ctx->pc = 0x105FCCu;
    // 0x105fcc: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x105fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x105fd0: 0x27928898  addiu       $s2, $gp, -0x7768
    ctx->pc = 0x105fd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936728));
    // 0x105fd4: 0x2454ec00  addiu       $s4, $v0, -0x1400
    ctx->pc = 0x105fd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962176));
    // 0x105fd8: 0x3c130025  lui         $s3, 0x25
    ctx->pc = 0x105fd8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)37 << 16));
    // 0x105fdc: 0x0  nop
    ctx->pc = 0x105fdcu;
    // NOP
    ctx->pc = 0x105fe0u;
}

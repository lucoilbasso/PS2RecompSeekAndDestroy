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

// Function: entry_0018e318
// Address: 0x18e318 - 0x18e33c
void entry_0018e318_0x18e318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e318_0x18e318");
#endif

    ctx->pc = 0x18e318u;

    // 0x18e318: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x18e318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x18e31c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x18e31cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x18e320: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x18e320u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x18e324: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x18e324u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x18e328: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x18e328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18e32c: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x18e32cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x18e330: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x18E330u;
    {
        const bool branch_taken_0x18e330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E330u;
        // 0x18e334: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e330) {
            ctx->pc = 0x18E2D0u;
            return;
        }
    }
    ctx->pc = 0x18E338u;
    // 0x18e338: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x18e338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    ctx->pc = 0x18e33cu;
}

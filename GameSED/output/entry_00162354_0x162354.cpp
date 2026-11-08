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

// Function: entry_00162354
// Address: 0x162354 - 0x16236c
void entry_00162354_0x162354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162354_0x162354");
#endif

    ctx->pc = 0x162354u;

    // 0x162354: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x162354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x162358: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x162358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16235c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x16235cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x162360: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x162360u;
    {
        const bool branch_taken_0x162360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162360u;
        // 0x162364: 0x26430040  addiu       $v1, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162360) {
            ctx->pc = 0x16236Cu;
            return;
        }
    }
    ctx->pc = 0x162368u;
    // 0x162368: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x162368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->pc = 0x16236cu;
}

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

// Function: entry_0014c388
// Address: 0x14c388 - 0x14c3a0
void entry_0014c388_0x14c388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c388_0x14c388");
#endif

    ctx->pc = 0x14c388u;

    // 0x14c388: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14C388u;
    {
        const bool branch_taken_0x14c388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C388u;
        // 0x14c38c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c388) {
            ctx->pc = 0x14C3CCu;
            return;
        }
    }
    ctx->pc = 0x14C390u;
    // 0x14c390: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x14c390u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    // 0x14c394: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x14c394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14c398: 0x34c693df  ori         $a2, $a2, 0x93DF
    ctx->pc = 0x14c398u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)37855);
    // 0x14c39c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x14c39cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x14c3a0u;
}

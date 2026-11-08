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

// Function: entry_0014c3a0
// Address: 0x14c3a0 - 0x14c3bc
void entry_0014c3a0_0x14c3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c3a0_0x14c3a0");
#endif

    ctx->pc = 0x14c3a0u;

    // 0x14c3a0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x14c3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14c3a4: 0x10470005  beq         $v0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x14C3A4u;
    {
        const bool branch_taken_0x14c3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x14C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C3A4u;
        // 0x14c3a8: 0xc2182a  slt         $v1, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c3a4) {
            ctx->pc = 0x14C3BCu;
            return;
        }
    }
    ctx->pc = 0x14C3ACu;
    // 0x14c3ac: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C3ACu;
    {
        const bool branch_taken_0x14c3ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c3ac) {
            ctx->pc = 0x14C3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C3ACu;
            // 0x14c3b0: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C3C0u;
            return;
        }
    }
    ctx->pc = 0x14C3B4u;
    // 0x14c3b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14c3b8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x14c3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x14c3bcu;
}

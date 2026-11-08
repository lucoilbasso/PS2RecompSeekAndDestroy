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

// Function: entry_001db0b4
// Address: 0x1db0b4 - 0x1db0d4
void entry_001db0b4_0x1db0b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db0b4_0x1db0b4");
#endif

    ctx->pc = 0x1db0b4u;

    // 0x1db0b4: 0x260410fc  addiu       $a0, $s0, 0x10FC
    ctx->pc = 0x1db0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4348));
    // 0x1db0b8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1db0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1db0bc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1db0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1db0c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1db0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1db0c4: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1db0c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1db0c8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DB0C8u;
    {
        const bool branch_taken_0x1db0c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB0C8u;
        // 0x1db0cc: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db0c8) {
            ctx->pc = 0x1DB0D4u;
            return;
        }
    }
    ctx->pc = 0x1DB0D0u;
    // 0x1db0d0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1db0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x1db0d4u;
}

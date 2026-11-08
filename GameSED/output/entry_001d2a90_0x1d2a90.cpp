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

// Function: entry_001d2a90
// Address: 0x1d2a90 - 0x1d2ab8
void entry_001d2a90_0x1d2a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2a90_0x1d2a90");
#endif

    ctx->pc = 0x1d2a90u;

label_1d2a90:
    // 0x1d2a90: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1d2a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d2a94: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1d2a94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d2a98: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x1d2a98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1d2a9c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1d2a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1d2aa0: 0x0  nop
    ctx->pc = 0x1d2aa0u;
    // NOP
    // 0x1d2aa4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D2AA4u;
    {
        const bool branch_taken_0x1d2aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2AA4u;
        // 0x1d2aa8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2aa4) {
            ctx->pc = 0x1D2A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2a90;
        }
    }
    ctx->pc = 0x1D2AACu;
    // 0x1d2aac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2AACu;
    {
        const bool branch_taken_0x1d2aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2AACu;
        // 0x1d2ab0: 0x741823  subu        $v1, $v1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2aac) {
            ctx->pc = 0x1D2AC0u;
            return;
        }
    }
    ctx->pc = 0x1D2AB4u;
    // 0x1d2ab4: 0x0  nop
    ctx->pc = 0x1d2ab4u;
    // NOP
    ctx->pc = 0x1d2ab8u;
}

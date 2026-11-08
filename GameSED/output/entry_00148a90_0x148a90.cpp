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

// Function: entry_00148a90
// Address: 0x148a90 - 0x148ab4
void entry_00148a90_0x148a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148a90_0x148a90");
#endif

    ctx->pc = 0x148a90u;

label_148a90:
    // 0x148a90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x148a90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x148a94: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x148a94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x148a98: 0x14600095  bnez        $v1, . + 4 + (0x95 << 2)
    ctx->pc = 0x148A98u;
    {
        const bool branch_taken_0x148a98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x148A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148A98u;
        // 0x148a9c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148a98) {
            ctx->pc = 0x148CF0u;
            return;
        }
    }
    ctx->pc = 0x148AA0u;
    // 0x148aa0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x148aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x148aa4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x148aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x148aa8: 0x0  nop
    ctx->pc = 0x148aa8u;
    // NOP
    // 0x148aac: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x148AACu;
    {
        const bool branch_taken_0x148aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148AACu;
        // 0x148ab0: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148aac) {
            ctx->pc = 0x148A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148a90;
        }
    }
    ctx->pc = 0x148AB4u;
}

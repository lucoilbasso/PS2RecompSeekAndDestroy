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

// Function: entry_00191898
// Address: 0x191898 - 0x1918bc
void entry_00191898_0x191898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191898_0x191898");
#endif

    ctx->pc = 0x191898u;

label_191898:
    // 0x191898: 0x1046ffd1  beq         $v0, $a2, . + 4 + (-0x2F << 2)
    ctx->pc = 0x191898u;
    {
        const bool branch_taken_0x191898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x19189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191898u;
        // 0x19189c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191898) {
            ctx->pc = 0x1917E0u;
            return;
        }
    }
    ctx->pc = 0x1918A0u;
    // 0x1918a0: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x1918a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1918a4: 0x0  nop
    ctx->pc = 0x1918a4u;
    // NOP
    // 0x1918a8: 0x0  nop
    ctx->pc = 0x1918a8u;
    // NOP
    // 0x1918ac: 0x0  nop
    ctx->pc = 0x1918acu;
    // NOP
    // 0x1918b0: 0x0  nop
    ctx->pc = 0x1918b0u;
    // NOP
    // 0x1918b4: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1918B4u;
    {
        const bool branch_taken_0x1918b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1918B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918B4u;
        // 0x1918b8: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1918b4) {
            ctx->pc = 0x191898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191898;
        }
    }
    ctx->pc = 0x1918BCu;
}

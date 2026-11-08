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

// Function: entry_001cd6c0
// Address: 0x1cd6c0 - 0x1cd6e4
void entry_001cd6c0_0x1cd6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd6c0_0x1cd6c0");
#endif

    ctx->pc = 0x1cd6c0u;

label_1cd6c0:
    // 0x1cd6c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1cd6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1cd6c4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1CD6C4u;
    {
        const bool branch_taken_0x1cd6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd6c4) {
            ctx->pc = 0x1CD6C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD6C4u;
            // 0x1cd6c8: 0x31842  srl         $v1, $v1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD6F0u;
            return;
        }
    }
    ctx->pc = 0x1CD6CCu;
    // 0x1cd6cc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1cd6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1cd6d0: 0x0  nop
    ctx->pc = 0x1cd6d0u;
    // NOP
    // 0x1cd6d4: 0x0  nop
    ctx->pc = 0x1cd6d4u;
    // NOP
    // 0x1cd6d8: 0x0  nop
    ctx->pc = 0x1cd6d8u;
    // NOP
    // 0x1cd6dc: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1CD6DCu;
    {
        const bool branch_taken_0x1cd6dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD6DCu;
        // 0x1cd6e0: 0x881006  srlv        $v0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd6dc) {
            ctx->pc = 0x1CD6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd6c0;
        }
    }
    ctx->pc = 0x1CD6E4u;
}

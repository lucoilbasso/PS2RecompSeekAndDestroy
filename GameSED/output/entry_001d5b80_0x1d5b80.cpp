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

// Function: entry_001d5b80
// Address: 0x1d5b80 - 0x1d5bb8
void entry_001d5b80_0x1d5b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5b80_0x1d5b80");
#endif

    ctx->pc = 0x1d5b80u;

label_1d5b80:
    // 0x1d5b80: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d5b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d5b84: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x1d5b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x1d5b88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d5b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d5b8c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1d5b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1d5b90: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1d5b90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1d5b94: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d5b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d5b98: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1d5b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1d5b9c: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x1d5b9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1d5ba0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D5BA0u;
    {
        const bool branch_taken_0x1d5ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5BA0u;
        // 0x1d5ba4: 0xa31806  srlv        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ba0) {
            ctx->pc = 0x1D5B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5b80;
        }
    }
    ctx->pc = 0x1D5BA8u;
    // 0x1d5ba8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D5BA8u;
    {
        const bool branch_taken_0x1d5ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5BA8u;
        // 0x1d5bac: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ba8) {
            ctx->pc = 0x1D5BD4u;
            return;
        }
    }
    ctx->pc = 0x1D5BB0u;
    // 0x1d5bb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5BB0u;
    {
        const bool branch_taken_0x1d5bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5BB0u;
        // 0x1d5bb4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5bb0) {
            ctx->pc = 0x1D5BD4u;
            return;
        }
    }
    ctx->pc = 0x1D5BB8u;
}

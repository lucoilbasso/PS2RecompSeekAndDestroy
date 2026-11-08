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

// Function: entry_001c982c
// Address: 0x1c982c - 0x1c9868
void entry_001c982c_0x1c982c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c982c_0x1c982c");
#endif

    ctx->pc = 0x1c982cu;

    // 0x1c982c: 0x891806  srlv        $v1, $t1, $a0
    ctx->pc = 0x1c982cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x1c9830: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1c9830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c9834: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1c9834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1c9838: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c9838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c983c: 0x9042bee0  lbu         $v0, -0x4120($v0)
    ctx->pc = 0x1c983cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950624)));
    // 0x1c9840: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c9840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c9844: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x1c9844u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c9848: 0x15800019  bnez        $t4, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C9848u;
    {
        const bool branch_taken_0x1c9848 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9848u;
        // 0x1c984c: 0xac7823  subu        $t7, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9848) {
            ctx->pc = 0x1C98B0u;
            return;
        }
    }
    ctx->pc = 0x1C9850u;
    // 0x1c9850: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x1c9850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1c9854: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9854u;
    {
        const bool branch_taken_0x1c9854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9854u;
        // 0x1c9858: 0x1a71023  subu        $v0, $t5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9854) {
            ctx->pc = 0x1C9868u;
            return;
        }
    }
    ctx->pc = 0x1C985Cu;
    // 0x1c985c: 0x1a7102b  sltu        $v0, $t5, $a3
    ctx->pc = 0x1c985cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c9860: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9860u;
    {
        const bool branch_taken_0x1c9860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9860u;
        // 0x1c9864: 0x1a71023  subu        $v0, $t5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9860) {
            ctx->pc = 0x1C9878u;
            return;
        }
    }
    ctx->pc = 0x1C9868u;
}

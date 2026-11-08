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

// Function: entry_0015df90
// Address: 0x15df90 - 0x15dfb8
void entry_0015df90_0x15df90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015df90_0x15df90");
#endif

    ctx->pc = 0x15df90u;

label_15df90:
    // 0x15df90: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x15df90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x15df94: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x15df94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15df98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15df98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15df9c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x15df9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x15dfa0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15dfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15dfa4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15DFA4u;
    {
        const bool branch_taken_0x15dfa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DFA4u;
        // 0x15dfa8: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dfa4) {
            ctx->pc = 0x15DFB8u;
            return;
        }
    }
    ctx->pc = 0x15DFACu;
    // 0x15dfac: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x15DFACu;
    {
        const bool branch_taken_0x15dfac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x15DFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DFACu;
        // 0x15dfb0: 0xae220200  sw          $v0, 0x200($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dfac) {
            ctx->pc = 0x15DF90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15df90;
        }
    }
    ctx->pc = 0x15DFB4u;
    // 0x15dfb4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x15dfb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15dfb8u;
}

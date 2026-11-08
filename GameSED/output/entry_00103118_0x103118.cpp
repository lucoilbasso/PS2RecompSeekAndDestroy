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

// Function: entry_00103118
// Address: 0x103118 - 0x10313c
void entry_00103118_0x103118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103118_0x103118");
#endif

    ctx->pc = 0x103118u;

label_103118:
    // 0x103118: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x103118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x10311c: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x10311cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x103120: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x103120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x103124: 0xc8202a  slt         $a0, $a2, $t0
    ctx->pc = 0x103124u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x103128: 0x10690005  beq         $v1, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x103128u;
    {
        const bool branch_taken_0x103128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        ctx->pc = 0x10312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103128u;
        // 0x10312c: 0xe21021  addu        $v0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103128) {
            ctx->pc = 0x103140u;
            return;
        }
    }
    ctx->pc = 0x103130u;
    // 0x103130: 0x0  nop
    ctx->pc = 0x103130u;
    // NOP
    // 0x103134: 0x5480fff8  bnel        $a0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x103134u;
    {
        const bool branch_taken_0x103134 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x103134) {
            ctx->pc = 0x103138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103134u;
            // 0x103138: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103118;
        }
    }
    ctx->pc = 0x10313Cu;
}

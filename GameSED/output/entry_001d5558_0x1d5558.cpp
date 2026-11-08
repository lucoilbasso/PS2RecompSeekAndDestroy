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

// Function: entry_001d5558
// Address: 0x1d5558 - 0x1d5574
void entry_001d5558_0x1d5558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5558_0x1d5558");
#endif

    ctx->pc = 0x1d5558u;

label_1d5558:
    // 0x1d5558: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x1d5558u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1d555c: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x1d555cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d5560: 0x0  nop
    ctx->pc = 0x1d5560u;
    // NOP
    // 0x1d5564: 0x0  nop
    ctx->pc = 0x1d5564u;
    // NOP
    // 0x1d5568: 0x0  nop
    ctx->pc = 0x1d5568u;
    // NOP
    // 0x1d556c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D556Cu;
    {
        const bool branch_taken_0x1d556c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D556Cu;
        // 0x1d5570: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d556c) {
            ctx->pc = 0x1D5558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5558;
        }
    }
    ctx->pc = 0x1D5574u;
}

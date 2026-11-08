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

// Function: entry_0019cc28
// Address: 0x19cc28 - 0x19cc44
void entry_0019cc28_0x19cc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cc28_0x19cc28");
#endif

    ctx->pc = 0x19cc28u;

label_19cc28:
    // 0x19cc28: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x19cc28u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19cc2c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x19cc2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19cc30: 0x0  nop
    ctx->pc = 0x19cc30u;
    // NOP
    // 0x19cc34: 0x0  nop
    ctx->pc = 0x19cc34u;
    // NOP
    // 0x19cc38: 0x0  nop
    ctx->pc = 0x19cc38u;
    // NOP
    // 0x19cc3c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19CC3Cu;
    {
        const bool branch_taken_0x19cc3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC3Cu;
        // 0x19cc40: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cc3c) {
            ctx->pc = 0x19CC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19cc28;
        }
    }
    ctx->pc = 0x19CC44u;
}

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

// Function: entry_0019e9b0
// Address: 0x19e9b0 - 0x19e9d0
void entry_0019e9b0_0x19e9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e9b0_0x19e9b0");
#endif

    ctx->pc = 0x19e9b0u;

label_19e9b0:
    // 0x19e9b0: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x19e9b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x19e9b4: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x19e9b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19e9b8: 0x0  nop
    ctx->pc = 0x19e9b8u;
    // NOP
    // 0x19e9bc: 0x0  nop
    ctx->pc = 0x19e9bcu;
    // NOP
    // 0x19e9c0: 0x0  nop
    ctx->pc = 0x19e9c0u;
    // NOP
    // 0x19e9c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19E9C4u;
    {
        const bool branch_taken_0x19e9c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9C4u;
        // 0x19e9c8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e9c4) {
            ctx->pc = 0x19E9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e9b0;
        }
    }
    ctx->pc = 0x19E9CCu;
    // 0x19e9cc: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x19e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    ctx->pc = 0x19e9d0u;
}

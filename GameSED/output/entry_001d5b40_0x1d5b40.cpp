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

// Function: entry_001d5b40
// Address: 0x1d5b40 - 0x1d5b5c
void entry_001d5b40_0x1d5b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5b40_0x1d5b40");
#endif

    ctx->pc = 0x1d5b40u;

label_1d5b40:
    // 0x1d5b40: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1d5b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1d5b44: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1d5b44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1d5b48: 0x0  nop
    ctx->pc = 0x1d5b48u;
    // NOP
    // 0x1d5b4c: 0x0  nop
    ctx->pc = 0x1d5b4cu;
    // NOP
    // 0x1d5b50: 0x0  nop
    ctx->pc = 0x1d5b50u;
    // NOP
    // 0x1d5b54: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D5B54u;
    {
        const bool branch_taken_0x1d5b54 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B54u;
        // 0x1d5b58: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5b54) {
            ctx->pc = 0x1D5B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5b40;
        }
    }
    ctx->pc = 0x1D5B5Cu;
}

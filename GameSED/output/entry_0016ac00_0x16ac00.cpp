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

// Function: entry_0016ac00
// Address: 0x16ac00 - 0x16ac20
void entry_0016ac00_0x16ac00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ac00_0x16ac00");
#endif

    ctx->pc = 0x16ac00u;

label_16ac00:
    // 0x16ac00: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x16ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x16ac04: 0x0  nop
    ctx->pc = 0x16ac04u;
    // NOP
    // 0x16ac08: 0x0  nop
    ctx->pc = 0x16ac08u;
    // NOP
    // 0x16ac0c: 0x0  nop
    ctx->pc = 0x16ac0cu;
    // NOP
    // 0x16ac10: 0x0  nop
    ctx->pc = 0x16ac10u;
    // NOP
    // 0x16ac14: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16AC14u;
    {
        const bool branch_taken_0x16ac14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ac14) {
            ctx->pc = 0x16AC18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AC14u;
            // 0x16ac18: 0xac4000e0  sw          $zero, 0xE0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ac00;
        }
    }
    ctx->pc = 0x16AC1Cu;
    // 0x16ac1c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x16ac1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    ctx->pc = 0x16ac20u;
}

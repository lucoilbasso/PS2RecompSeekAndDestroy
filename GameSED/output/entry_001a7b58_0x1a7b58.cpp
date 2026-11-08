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

// Function: entry_001a7b58
// Address: 0x1a7b58 - 0x1a7b74
void entry_001a7b58_0x1a7b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7b58_0x1a7b58");
#endif

    ctx->pc = 0x1a7b58u;

label_1a7b58:
    // 0x1a7b58: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a7b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a7b5c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1a7b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1a7b60: 0x0  nop
    ctx->pc = 0x1a7b60u;
    // NOP
    // 0x1a7b64: 0x0  nop
    ctx->pc = 0x1a7b64u;
    // NOP
    // 0x1a7b68: 0x0  nop
    ctx->pc = 0x1a7b68u;
    // NOP
    // 0x1a7b6c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A7B6Cu;
    {
        const bool branch_taken_0x1a7b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A7B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B6Cu;
        // 0x1a7b70: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7b6c) {
            ctx->pc = 0x1A7B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7b58;
        }
    }
    ctx->pc = 0x1A7B74u;
}

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

// Function: entry_001d3460
// Address: 0x1d3460 - 0x1d3480
void entry_001d3460_0x1d3460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3460_0x1d3460");
#endif

    ctx->pc = 0x1d3460u;

label_1d3460:
    // 0x1d3460: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x1d3460u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d3464: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x1d3464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1d3468: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1d3468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d346c: 0x0  nop
    ctx->pc = 0x1d346cu;
    // NOP
    // 0x1d3470: 0x0  nop
    ctx->pc = 0x1d3470u;
    // NOP
    // 0x1d3474: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D3474u;
    {
        const bool branch_taken_0x1d3474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3474u;
        // 0x1d3478: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3474) {
            ctx->pc = 0x1D3460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3460;
        }
    }
    ctx->pc = 0x1D347Cu;
    // 0x1d347c: 0xaee30044  sw          $v1, 0x44($s7)
    ctx->pc = 0x1d347cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 68), GPR_U32(ctx, 3));
    ctx->pc = 0x1d3480u;
}

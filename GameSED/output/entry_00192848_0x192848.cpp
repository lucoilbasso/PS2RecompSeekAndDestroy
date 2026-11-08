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

// Function: entry_00192848
// Address: 0x192848 - 0x192860
void entry_00192848_0x192848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192848_0x192848");
#endif

    ctx->pc = 0x192848u;

    // 0x192848: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x192848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19284c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19284cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x192850: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x192850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x192854: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x192854u;
    {
        const bool branch_taken_0x192854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x192858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192854u;
        // 0x192858: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192854) {
            ctx->pc = 0x192874u;
            return;
        }
    }
    ctx->pc = 0x19285Cu;
    // 0x19285c: 0x8c9007e0  lw          $s0, 0x7E0($a0)
    ctx->pc = 0x19285cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2016)));
    ctx->pc = 0x192860u;
}

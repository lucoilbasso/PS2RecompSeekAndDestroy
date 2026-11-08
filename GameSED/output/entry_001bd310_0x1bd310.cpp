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

// Function: entry_001bd310
// Address: 0x1bd310 - 0x1bd320
void entry_001bd310_0x1bd310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd310_0x1bd310");
#endif

    ctx->pc = 0x1bd310u;

    // 0x1bd310: 0x16550003  bne         $s2, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD310u;
    {
        const bool branch_taken_0x1bd310 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        ctx->pc = 0x1BD314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD310u;
        // 0x1bd314: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd310) {
            ctx->pc = 0x1BD320u;
            return;
        }
    }
    ctx->pc = 0x1BD318u;
    // 0x1bd318: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD318u;
    SET_GPR_U32(ctx, 31, 0x1BD320u);
    ctx->pc = 0x1BD31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD318u;
    // 0x1bd31c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD318u, 0x1BD320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD320u;
}

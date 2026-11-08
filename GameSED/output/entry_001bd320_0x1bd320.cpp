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

// Function: entry_001bd320
// Address: 0x1bd320 - 0x1bd330
void entry_001bd320_0x1bd320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd320_0x1bd320");
#endif

    ctx->pc = 0x1bd320u;

    // 0x1bd320: 0x16f50003  bne         $s7, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD320u;
    {
        const bool branch_taken_0x1bd320 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 21));
        ctx->pc = 0x1BD324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD320u;
        // 0x1bd324: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd320) {
            ctx->pc = 0x1BD330u;
            return;
        }
    }
    ctx->pc = 0x1BD328u;
    // 0x1bd328: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD328u;
    SET_GPR_U32(ctx, 31, 0x1BD330u);
    ctx->pc = 0x1BD32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD328u;
    // 0x1bd32c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD328u, 0x1BD330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD330u;
}

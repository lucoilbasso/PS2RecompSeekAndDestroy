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

// Function: entry_001034c4
// Address: 0x1034c4 - 0x1034e0
void entry_001034c4_0x1034c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001034c4_0x1034c4");
#endif

    ctx->pc = 0x1034c4u;

    // 0x1034c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1034C4u;
    {
        const bool branch_taken_0x1034c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1034C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034C4u;
        // 0x1034c8: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1034c4) {
            ctx->pc = 0x1034E0u;
            return;
        }
    }
    ctx->pc = 0x1034CCu;
    // 0x1034cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1034ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1034d0: 0x24a51bb8  addiu       $a1, $a1, 0x1BB8
    ctx->pc = 0x1034d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7096));
    // 0x1034d4: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x1034d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1034d8: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x1034D8u;
    SET_GPR_U32(ctx, 31, 0x1034E0u);
    ctx->pc = 0x1034DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1034D8u;
    // 0x1034dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1034D8u, 0x1034E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1034E0u;
}

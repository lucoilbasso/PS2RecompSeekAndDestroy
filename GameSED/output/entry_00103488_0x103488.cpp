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

// Function: entry_00103488
// Address: 0x103488 - 0x1034b0
void entry_00103488_0x103488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103488_0x103488");
#endif

    switch (ctx->pc) {
        case 0x1034a8u: goto label_1034a8;
        default: break;
    }

    ctx->pc = 0x103488u;

    // 0x103488: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x103488u;
    {
        const bool branch_taken_0x103488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103488u;
        // 0x10348c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103488) {
            ctx->pc = 0x1034B0u;
            return;
        }
    }
    ctx->pc = 0x103490u;
    // 0x103490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x103490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103494: 0x24a51bd0  addiu       $a1, $a1, 0x1BD0
    ctx->pc = 0x103494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7120));
    // 0x103498: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x103498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x10349c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10349cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1034a0: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x1034A0u;
    SET_GPR_U32(ctx, 31, 0x1034A8u);
    ctx->pc = 0x1034A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1034A0u;
    // 0x1034a4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1034A0u, 0x1034A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1034A8u;
label_1034a8:
    // 0x1034a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1034A8u;
    {
        const bool branch_taken_0x1034a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1034ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034A8u;
        // 0x1034ac: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1034a8) {
            ctx->pc = 0x1034C4u;
            return;
        }
    }
    ctx->pc = 0x1034B0u;
}

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

// Function: entry_001540a8
// Address: 0x1540a8 - 0x1540c0
void entry_001540a8_0x1540a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001540a8_0x1540a8");
#endif

    switch (ctx->pc) {
        case 0x1540b8u: goto label_1540b8;
        default: break;
    }

    ctx->pc = 0x1540a8u;

    // 0x1540a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1540a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1540ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1540acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1540b0: 0xc04c5ac  jal         func_1316B0
    ctx->pc = 0x1540B0u;
    SET_GPR_U32(ctx, 31, 0x1540B8u);
    ctx->pc = 0x1540B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1540B0u;
    // 0x1540b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x1540B0u, 0x1540B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1540B8u;
label_1540b8:
    // 0x1540b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1540B8u;
    {
        const bool branch_taken_0x1540b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1540BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1540B8u;
        // 0x1540bc: 0x8e220170  lw          $v0, 0x170($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1540b8) {
            ctx->pc = 0x1540D4u;
            return;
        }
    }
    ctx->pc = 0x1540C0u;
}

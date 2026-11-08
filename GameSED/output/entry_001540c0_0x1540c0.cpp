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

// Function: entry_001540c0
// Address: 0x1540c0 - 0x1540d4
void entry_001540c0_0x1540c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001540c0_0x1540c0");
#endif

    switch (ctx->pc) {
        case 0x1540d0u: goto label_1540d0;
        default: break;
    }

    ctx->pc = 0x1540c0u;

    // 0x1540c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1540c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1540c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1540c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1540c8: 0xc04c5ac  jal         func_1316B0
    ctx->pc = 0x1540C8u;
    SET_GPR_U32(ctx, 31, 0x1540D0u);
    ctx->pc = 0x1540CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1540C8u;
    // 0x1540cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x1540C8u, 0x1540D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1540D0u;
label_1540d0:
    // 0x1540d0: 0x8e220170  lw          $v0, 0x170($s1)
    ctx->pc = 0x1540d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
    ctx->pc = 0x1540d4u;
}

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

// Function: entry_00143c90
// Address: 0x143c90 - 0x143cac
void entry_00143c90_0x143c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143c90_0x143c90");
#endif

    switch (ctx->pc) {
        case 0x143c98u: goto label_143c98;
        default: break;
    }

    ctx->pc = 0x143c90u;

    // 0x143c90: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x143C90u;
    SET_GPR_U32(ctx, 31, 0x143C98u);
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x143C90u, 0x143C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143C98u;
label_143c98:
    // 0x143c98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x143c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143c9c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x143c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x143ca0: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x143ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x143ca4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x143CA4u;
    SET_GPR_U32(ctx, 31, 0x143CACu);
    ctx->pc = 0x143CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143CA4u;
    // 0x143ca8: 0x24456a08  addiu       $a1, $v0, 0x6A08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 27144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x143CA4u, 0x143CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143CACu;
}

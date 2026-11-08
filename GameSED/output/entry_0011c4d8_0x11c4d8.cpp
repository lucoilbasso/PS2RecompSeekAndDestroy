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

// Function: entry_0011c4d8
// Address: 0x11c4d8 - 0x11c4f8
void entry_0011c4d8_0x11c4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c4d8_0x11c4d8");
#endif

    switch (ctx->pc) {
        case 0x11c4e4u: goto label_11c4e4;
        default: break;
    }

    ctx->pc = 0x11c4d8u;

    // 0x11c4d8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x11c4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11c4dc: 0xc063a94  jal         func_18EA50
    ctx->pc = 0x11C4DCu;
    SET_GPR_U32(ctx, 31, 0x11C4E4u);
    ctx->pc = 0x11C4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C4DCu;
    // 0x11c4e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EA50u, 0x11C4DCu, 0x11C4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C4E4u;
label_11c4e4:
    // 0x11c4e4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11c4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x11c4e8: 0x8e061cb0  lw          $a2, 0x1CB0($s0)
    ctx->pc = 0x11c4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7344)));
    // 0x11c4ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11c4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c4f0: 0xc063764  jal         func_18DD90
    ctx->pc = 0x11C4F0u;
    SET_GPR_U32(ctx, 31, 0x11C4F8u);
    ctx->pc = 0x11C4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C4F0u;
    // 0x11c4f4: 0x24a54828  addiu       $a1, $a1, 0x4828 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x11C4F0u, 0x11C4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C4F8u;
}

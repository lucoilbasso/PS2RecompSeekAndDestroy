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

// Function: entry_0016a1a4
// Address: 0x16a1a4 - 0x16a1c4
void entry_0016a1a4_0x16a1a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a1a4_0x16a1a4");
#endif

    switch (ctx->pc) {
        case 0x16a1c0u: goto label_16a1c0;
        default: break;
    }

    ctx->pc = 0x16a1a4u;

    // 0x16a1a4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x16a1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a1a8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x16a1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x16a1ac: 0x262200a  movz        $a0, $s3, $v0
    ctx->pc = 0x16a1acu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 19));
    // 0x16a1b0: 0x24a57308  addiu       $a1, $a1, 0x7308
    ctx->pc = 0x16a1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29448));
    // 0x16a1b4: 0x24060045  addiu       $a2, $zero, 0x45
    ctx->pc = 0x16a1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x16a1b8: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x16A1B8u;
    SET_GPR_U32(ctx, 31, 0x16A1C0u);
    ctx->pc = 0x16A1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A1B8u;
    // 0x16a1bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x16A1B8u, 0x16A1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A1C0u;
label_16a1c0:
    // 0x16a1c0: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x16a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    ctx->pc = 0x16a1c4u;
}

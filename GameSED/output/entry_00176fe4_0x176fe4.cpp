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

// Function: entry_00176fe4
// Address: 0x176fe4 - 0x177008
void entry_00176fe4_0x176fe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176fe4_0x176fe4");
#endif

    switch (ctx->pc) {
        case 0x176fecu: goto label_176fec;
        default: break;
    }

    ctx->pc = 0x176fe4u;

    // 0x176fe4: 0xc05d92a  jal         func_1764A8
    ctx->pc = 0x176FE4u;
    SET_GPR_U32(ctx, 31, 0x176FECu);
    ctx->pc = 0x1764A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1764A8u, 0x176FE4u, 0x176FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176FECu;
label_176fec:
    // 0x176fec: 0x8f858d10  lw          $a1, -0x72F0($gp)
    ctx->pc = 0x176fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x176ff0: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x176ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x176ff4: 0x8f848d0c  lw          $a0, -0x72F4($gp)
    ctx->pc = 0x176ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937868)));
    // 0x176ff8: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x176ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x176ffc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x176ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x177000: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x177000u;
    SET_GPR_U32(ctx, 31, 0x177008u);
    ctx->pc = 0x177004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177000u;
    // 0x177004: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x177000u, 0x177008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177008u;
}

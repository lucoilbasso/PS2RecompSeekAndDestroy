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

// Function: entry_00105068
// Address: 0x105068 - 0x1050b0
void entry_00105068_0x105068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105068_0x105068");
#endif

    switch (ctx->pc) {
        case 0x10508cu: goto label_10508c;
        case 0x105094u: goto label_105094;
        case 0x1050a0u: goto label_1050a0;
        case 0x1050acu: goto label_1050ac;
        default: break;
    }

    ctx->pc = 0x105068u;

    // 0x105068: 0x24050e00  addiu       $a1, $zero, 0xE00
    ctx->pc = 0x105068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
    // 0x10506c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x10506cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x105070: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x105070u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105074: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x105074u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105078: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x105078u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10507c: 0x240a0200  addiu       $t2, $zero, 0x200
    ctx->pc = 0x10507cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x105080: 0x240b01c0  addiu       $t3, $zero, 0x1C0
    ctx->pc = 0x105080u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x105084: 0xc06acf0  jal         func_1AB3C0
    ctx->pc = 0x105084u;
    SET_GPR_U32(ctx, 31, 0x10508Cu);
    ctx->pc = 0x105088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105084u;
    // 0x105088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB3C0u, 0x105084u, 0x10508Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10508Cu;
label_10508c:
    // 0x10508c: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x10508Cu;
    SET_GPR_U32(ctx, 31, 0x105094u);
    ctx->pc = 0x105090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10508Cu;
    // 0x105090: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x10508Cu, 0x105094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105094u;
label_105094:
    // 0x105094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105098: 0xc06ad40  jal         func_1AB500
    ctx->pc = 0x105098u;
    SET_GPR_U32(ctx, 31, 0x1050A0u);
    ctx->pc = 0x10509Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105098u;
    // 0x10509c: 0x8f8588a8  lw          $a1, -0x7758($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB500u, 0x105098u, 0x1050A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1050A0u;
label_1050a0:
    // 0x1050a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1050a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1050a4: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x1050A4u;
    SET_GPR_U32(ctx, 31, 0x1050ACu);
    ctx->pc = 0x1050A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1050A4u;
    // 0x1050a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x1050A4u, 0x1050ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1050ACu;
label_1050ac:
    // 0x1050ac: 0x8f838c50  lw          $v1, -0x73B0($gp)
    ctx->pc = 0x1050acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    ctx->pc = 0x1050b0u;
}

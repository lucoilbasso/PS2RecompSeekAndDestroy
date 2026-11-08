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

// Function: entry_00146fa0
// Address: 0x146fa0 - 0x146fc8
void entry_00146fa0_0x146fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146fa0_0x146fa0");
#endif

    switch (ctx->pc) {
        case 0x146facu: goto label_146fac;
        case 0x146fbcu: goto label_146fbc;
        default: break;
    }

    ctx->pc = 0x146fa0u;

    // 0x146fa0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x146fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146fa4: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x146FA4u;
    SET_GPR_U32(ctx, 31, 0x146FACu);
    ctx->pc = 0x146FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146FA4u;
    // 0x146fa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x146FA4u, 0x146FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146FACu;
label_146fac:
    // 0x146fac: 0x8f848c64  lw          $a0, -0x739C($gp)
    ctx->pc = 0x146facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
    // 0x146fb0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x146fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146fb4: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x146FB4u;
    SET_GPR_U32(ctx, 31, 0x146FBCu);
    ctx->pc = 0x146FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146FB4u;
    // 0x146fb8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x146FB4u, 0x146FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146FBCu;
label_146fbc:
    // 0x146fbc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x146fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x146fc0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x146fc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146fc4: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x146fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    ctx->pc = 0x146fc8u;
}

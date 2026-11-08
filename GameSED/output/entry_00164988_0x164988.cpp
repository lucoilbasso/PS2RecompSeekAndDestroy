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

// Function: entry_00164988
// Address: 0x164988 - 0x1649a8
void entry_00164988_0x164988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164988_0x164988");
#endif

    switch (ctx->pc) {
        case 0x1649a4u: goto label_1649a4;
        default: break;
    }

    ctx->pc = 0x164988u;

    // 0x164988: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x164988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x16498c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16498cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164990: 0x24a56f98  addiu       $a1, $a1, 0x6F98
    ctx->pc = 0x164990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28568));
    // 0x164994: 0x2a2200a  movz        $a0, $s5, $v0
    ctx->pc = 0x164994u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
    // 0x164998: 0x24060045  addiu       $a2, $zero, 0x45
    ctx->pc = 0x164998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x16499c: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x16499Cu;
    SET_GPR_U32(ctx, 31, 0x1649A4u);
    ctx->pc = 0x1649A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16499Cu;
    // 0x1649a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x16499Cu, 0x1649A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1649A4u;
label_1649a4:
    // 0x1649a4: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1649a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    ctx->pc = 0x1649a8u;
}

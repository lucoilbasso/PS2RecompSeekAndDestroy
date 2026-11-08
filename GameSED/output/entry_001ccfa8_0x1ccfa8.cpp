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

// Function: entry_001ccfa8
// Address: 0x1ccfa8 - 0x1ccff4
void entry_001ccfa8_0x1ccfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccfa8_0x1ccfa8");
#endif

    switch (ctx->pc) {
        case 0x1ccfbcu: goto label_1ccfbc;
        case 0x1ccfc8u: goto label_1ccfc8;
        case 0x1ccfdcu: goto label_1ccfdc;
        case 0x1ccfe4u: goto label_1ccfe4;
        default: break;
    }

    ctx->pc = 0x1ccfa8u;

    // 0x1ccfa8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ccfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ccfac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ccfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ccfb0: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1ccfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x1ccfb4: 0xc07358e  jal         func_1CD638
    ctx->pc = 0x1CCFB4u;
    SET_GPR_U32(ctx, 31, 0x1CCFBCu);
    ctx->pc = 0x1CCFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCFB4u;
    // 0x1ccfb8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD638u, 0x1CCFB4u, 0x1CCFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCFBCu;
label_1ccfbc:
    // 0x1ccfbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ccfbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfc0: 0xc078600  jal         func_1E1800
    ctx->pc = 0x1CCFC0u;
    SET_GPR_U32(ctx, 31, 0x1CCFC8u);
    ctx->pc = 0x1CCFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCFC0u;
    // 0x1ccfc4: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1800u, 0x1CCFC0u, 0x1CCFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCFC8u;
label_1ccfc8:
    // 0x1ccfc8: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1ccfc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1ccfcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccfccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ccfd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfd4: 0xc0732ee  jal         func_1CCBB8
    ctx->pc = 0x1CCFD4u;
    SET_GPR_U32(ctx, 31, 0x1CCFDCu);
    ctx->pc = 0x1CCFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCFD4u;
    // 0x1ccfd8: 0x24c61860  addiu       $a2, $a2, 0x1860 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCBB8u, 0x1CCFD4u, 0x1CCFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCFDCu;
label_1ccfdc:
    // 0x1ccfdc: 0xc073880  jal         func_1CE200
    ctx->pc = 0x1CCFDCu;
    SET_GPR_U32(ctx, 31, 0x1CCFE4u);
    ctx->pc = 0x1CE200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE200u, 0x1CCFDCu, 0x1CCFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCFE4u;
label_1ccfe4:
    // 0x1ccfe4: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1ccfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1ccfe8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ccfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1ccfec: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x1ccfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
    // 0x1ccff0: 0x2484c858  addiu       $a0, $a0, -0x37A8
    ctx->pc = 0x1ccff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953048));
    ctx->pc = 0x1ccff4u;
}

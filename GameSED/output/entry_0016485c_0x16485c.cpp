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

// Function: entry_0016485c
// Address: 0x16485c - 0x1648b0
void entry_0016485c_0x16485c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016485c_0x16485c");
#endif

    switch (ctx->pc) {
        case 0x164864u: goto label_164864;
        case 0x164870u: goto label_164870;
        case 0x16487cu: goto label_16487c;
        case 0x164888u: goto label_164888;
        case 0x164894u: goto label_164894;
        case 0x1648a4u: goto label_1648a4;
        default: break;
    }

    ctx->pc = 0x16485cu;

    // 0x16485c: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x16485Cu;
    SET_GPR_U32(ctx, 31, 0x164864u);
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x16485Cu, 0x164864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164864u;
label_164864:
    // 0x164864: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x164864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164868: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x164868u;
    SET_GPR_U32(ctx, 31, 0x164870u);
    ctx->pc = 0x16486Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164868u;
    // 0x16486c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x164868u, 0x164870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164870u;
label_164870:
    // 0x164870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164874: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x164874u;
    SET_GPR_U32(ctx, 31, 0x16487Cu);
    ctx->pc = 0x164878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164874u;
    // 0x164878: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x164874u, 0x16487Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16487Cu;
label_16487c:
    // 0x16487c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16487cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164880: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x164880u;
    SET_GPR_U32(ctx, 31, 0x164888u);
    ctx->pc = 0x164884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164880u;
    // 0x164884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x164880u, 0x164888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164888u;
label_164888:
    // 0x164888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16488c: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x16488Cu;
    SET_GPR_U32(ctx, 31, 0x164894u);
    ctx->pc = 0x164890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16488Cu;
    // 0x164890: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x16488Cu, 0x164894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164894u;
label_164894:
    // 0x164894: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x164894u;
    {
        const bool branch_taken_0x164894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164894u;
        // 0x164898: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164894) {
            ctx->pc = 0x1648B0u;
            return;
        }
    }
    ctx->pc = 0x16489Cu;
    // 0x16489c: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x16489Cu;
    SET_GPR_U32(ctx, 31, 0x1648A4u);
    ctx->pc = 0x1648A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16489Cu;
    // 0x1648a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x16489Cu, 0x1648A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1648A4u;
label_1648a4:
    // 0x1648a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1648A4u;
    {
        const bool branch_taken_0x1648a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1648A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1648A4u;
        // 0x1648a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1648a4) {
            ctx->pc = 0x1648B8u;
            return;
        }
    }
    ctx->pc = 0x1648ACu;
    // 0x1648ac: 0x0  nop
    ctx->pc = 0x1648acu;
    // NOP
    ctx->pc = 0x1648b0u;
}

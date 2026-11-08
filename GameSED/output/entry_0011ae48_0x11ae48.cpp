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

// Function: entry_0011ae48
// Address: 0x11ae48 - 0x11aea0
void entry_0011ae48_0x11ae48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ae48_0x11ae48");
#endif

    switch (ctx->pc) {
        case 0x11ae5cu: goto label_11ae5c;
        case 0x11ae6cu: goto label_11ae6c;
        case 0x11ae7cu: goto label_11ae7c;
        case 0x11ae88u: goto label_11ae88;
        case 0x11ae94u: goto label_11ae94;
        case 0x11ae9cu: goto label_11ae9c;
        default: break;
    }

    ctx->pc = 0x11ae48u;

    // 0x11ae48: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x11AE48u;
    {
        const bool branch_taken_0x11ae48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AE48u;
        // 0x11ae4c: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae48) {
            ctx->pc = 0x11AEA8u;
            return;
        }
    }
    ctx->pc = 0x11AE50u;
    // 0x11ae50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11ae50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae54: 0xc0671e8  jal         func_19C7A0
    ctx->pc = 0x11AE54u;
    SET_GPR_U32(ctx, 31, 0x11AE5Cu);
    ctx->pc = 0x11AE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AE54u;
    // 0x11ae58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C7A0u, 0x11AE54u, 0x11AE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AE5Cu;
label_11ae5c:
    // 0x11ae5c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x11ae5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x11ae60: 0x24a5d208  addiu       $a1, $a1, -0x2DF8
    ctx->pc = 0x11ae60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955528));
    // 0x11ae64: 0xc066e3e  jal         func_19B8F8
    ctx->pc = 0x11AE64u;
    SET_GPR_U32(ctx, 31, 0x11AE6Cu);
    ctx->pc = 0x11AE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AE64u;
    // 0x11ae68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B8F8u, 0x11AE64u, 0x11AE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AE6Cu;
label_11ae6c:
    // 0x11ae6c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x11ae6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x11ae70: 0x24a5d210  addiu       $a1, $a1, -0x2DF0
    ctx->pc = 0x11ae70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955536));
    // 0x11ae74: 0xc067328  jal         func_19CCA0
    ctx->pc = 0x11AE74u;
    SET_GPR_U32(ctx, 31, 0x11AE7Cu);
    ctx->pc = 0x11AE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AE74u;
    // 0x11ae78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CCA0u, 0x11AE74u, 0x11AE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AE7Cu;
label_11ae7c:
    // 0x11ae7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11ae7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae80: 0xc04161e  jal         func_105878
    ctx->pc = 0x11AE80u;
    SET_GPR_U32(ctx, 31, 0x11AE88u);
    ctx->pc = 0x11AE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AE80u;
    // 0x11ae84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105878u, 0x11AE80u, 0x11AE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AE88u;
label_11ae88:
    // 0x11ae88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11ae88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae8c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x11AE8Cu;
    SET_GPR_U32(ctx, 31, 0x11AE94u);
    ctx->pc = 0x11AE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AE8Cu;
    // 0x11ae90: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x11AE8Cu, 0x11AE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AE94u;
label_11ae94:
    // 0x11ae94: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x11AE94u;
    SET_GPR_U32(ctx, 31, 0x11AE9Cu);
    ctx->pc = 0x11AE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AE94u;
    // 0x11ae98: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x11AE94u, 0x11AE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AE9Cu;
label_11ae9c:
    // 0x11ae9c: 0xae510088  sw          $s1, 0x88($s2)
    ctx->pc = 0x11ae9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 17));
    ctx->pc = 0x11aea0u;
}

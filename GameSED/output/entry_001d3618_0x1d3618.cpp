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

// Function: entry_001d3618
// Address: 0x1d3618 - 0x1d36d8
void entry_001d3618_0x1d3618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3618_0x1d3618");
#endif

    switch (ctx->pc) {
        case 0x1d3620u: goto label_1d3620;
        case 0x1d3630u: goto label_1d3630;
        case 0x1d3644u: goto label_1d3644;
        case 0x1d368cu: goto label_1d368c;
        case 0x1d36a0u: goto label_1d36a0;
        case 0x1d36b8u: goto label_1d36b8;
        case 0x1d36c8u: goto label_1d36c8;
        default: break;
    }

    ctx->pc = 0x1d3618u;

    // 0x1d3618: 0xc072916  jal         func_1CA458
    ctx->pc = 0x1D3618u;
    SET_GPR_U32(ctx, 31, 0x1D3620u);
    ctx->pc = 0x1D361Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3618u;
    // 0x1d361c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA458u, 0x1D3618u, 0x1D3620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3620u;
label_1d3620:
    // 0x1d3620: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d3620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3624: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d3624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3628: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1D3628u;
    SET_GPR_U32(ctx, 31, 0x1D3630u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1D3628u, 0x1D3630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3630u;
label_1d3630:
    // 0x1d3630: 0x34058038  ori         $a1, $zero, 0x8038
    ctx->pc = 0x1d3630u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32824);
    // 0x1d3634: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1d3634u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1d3638: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d3638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d363c: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1D363Cu;
    SET_GPR_U32(ctx, 31, 0x1D3644u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1D363Cu, 0x1D3644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3644u;
label_1d3644:
    // 0x1d3644: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1d3644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1d3648: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1d3648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1d364c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d364cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3650: 0x3c02fcc0  lui         $v0, 0xFCC0
    ctx->pc = 0x1d3650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64704 << 16));
    // 0x1d3654: 0x12183f  dsra32      $v1, $s2, 0
    ctx->pc = 0x1d3654u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x1d3658: 0x2449024  and         $s2, $s2, $a0
    ctx->pc = 0x1d3658u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x1d365c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d365cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d3660: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d3660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d3664: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x1d3664u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x1d3668: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d3668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d366c: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D366Cu;
    {
        const bool branch_taken_0x1d366c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D366Cu;
        // 0x1d3670: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d366c) {
            ctx->pc = 0x1D36D8u;
            return;
        }
    }
    ctx->pc = 0x1D3674u;
    // 0x1d3674: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x1d3674u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x1d3678: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1d3678u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1d367c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d367cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3680: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x1d3680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x1d3684: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1D3684u;
    SET_GPR_U32(ctx, 31, 0x1D368Cu);
    ctx->pc = 0x1D3688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3684u;
    // 0x1d3688: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1D3684u, 0x1D368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D368Cu;
label_1d368c:
    // 0x1d368c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d368cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3690: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d3690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3694: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3698: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D3698u;
    SET_GPR_U32(ctx, 31, 0x1D36A0u);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D3698u, 0x1D36A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D36A0u;
label_1d36a0:
    // 0x1d36a0: 0x1c4001e3  bgtz        $v0, . + 4 + (0x1E3 << 2)
    ctx->pc = 0x1D36A0u;
    {
        const bool branch_taken_0x1d36a0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1D36A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D36A0u;
        // 0x1d36a4: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d36a0) {
            ctx->pc = 0x1D3E30u;
            return;
        }
    }
    ctx->pc = 0x1D36A8u;
    // 0x1d36a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d36a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d36ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d36acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d36b0: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1D36B0u;
    SET_GPR_U32(ctx, 31, 0x1D36B8u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1D36B0u, 0x1D36B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D36B8u;
label_1d36b8:
    // 0x1d36b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d36b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d36bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d36bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d36c0: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D36C0u;
    SET_GPR_U32(ctx, 31, 0x1D36C8u);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D36C0u, 0x1D36C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D36C8u;
label_1d36c8:
    // 0x1d36c8: 0x44001d5  bltz        $v0, . + 4 + (0x1D5 << 2)
    ctx->pc = 0x1D36C8u;
    {
        const bool branch_taken_0x1d36c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D36CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D36C8u;
        // 0x1d36cc: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d36c8) {
            ctx->pc = 0x1D3E20u;
            return;
        }
    }
    ctx->pc = 0x1D36D0u;
    // 0x1d36d0: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1D36D0u;
    {
        const bool branch_taken_0x1d36d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d36d0) {
            ctx->pc = 0x1D38E0u;
            return;
        }
    }
    ctx->pc = 0x1D36D8u;
}

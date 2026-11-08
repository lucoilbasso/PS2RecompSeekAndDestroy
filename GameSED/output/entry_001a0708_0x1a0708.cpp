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

// Function: entry_001a0708
// Address: 0x1a0708 - 0x1a07c0
void entry_001a0708_0x1a0708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0708_0x1a0708");
#endif

    switch (ctx->pc) {
        case 0x1a0720u: goto label_1a0720;
        case 0x1a072cu: goto label_1a072c;
        case 0x1a0748u: goto label_1a0748;
        case 0x1a0754u: goto label_1a0754;
        case 0x1a0768u: goto label_1a0768;
        case 0x1a0770u: goto label_1a0770;
        case 0x1a077cu: goto label_1a077c;
        case 0x1a0784u: goto label_1a0784;
        case 0x1a0790u: goto label_1a0790;
        case 0x1a07a0u: goto label_1a07a0;
        case 0x1a07b4u: goto label_1a07b4;
        default: break;
    }

    ctx->pc = 0x1a0708u;

    // 0x1a0708: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a0708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a070c: 0x5602002c  bnel        $s0, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1A070Cu;
    {
        const bool branch_taken_0x1a070c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a070c) {
            ctx->pc = 0x1A0710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A070Cu;
            // 0x1a0710: 0x2e02004c  sltiu       $v0, $s0, 0x4C (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)76) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A07C0u;
            return;
        }
    }
    ctx->pc = 0x1A0714u;
    // 0x1a0714: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a0714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0718: 0xc0680f6  jal         func_1A03D8
    ctx->pc = 0x1A0718u;
    SET_GPR_U32(ctx, 31, 0x1A0720u);
    ctx->pc = 0x1A071Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0718u;
    // 0x1a071c: 0x3c100026  lui         $s0, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A03D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A03D8u, 0x1A0718u, 0x1A0720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0720u;
label_1a0720:
    // 0x1a0720: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a0720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0724: 0xc0680f6  jal         func_1A03D8
    ctx->pc = 0x1A0724u;
    SET_GPR_U32(ctx, 31, 0x1A072Cu);
    ctx->pc = 0x1A0728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0724u;
    // 0x1a0728: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A03D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A03D8u, 0x1A0724u, 0x1A072Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A072Cu;
label_1a072c:
    // 0x1a072c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a072cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0730: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1a0730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1a0734: 0x8c451134  lw          $a1, 0x1134($v0)
    ctx->pc = 0x1a0734u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x281134u));
    // 0x1a0738: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1a0738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1a073c: 0x24848fd8  addiu       $a0, $a0, -0x7028
    ctx->pc = 0x1a073cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938584));
    // 0x1a0740: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A0740u;
    SET_GPR_U32(ctx, 31, 0x1A0748u);
    ctx->pc = 0x1A0744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0740u;
    // 0x1a0744: 0x26108fe8  addiu       $s0, $s0, -0x7018 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A0740u, 0x1A0748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0748u;
label_1a0748:
    // 0x1a0748: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1a0748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1a074c: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A074Cu;
    SET_GPR_U32(ctx, 31, 0x1A0754u);
    ctx->pc = 0x1A0750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A074Cu;
    // 0x1a0750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A074Cu, 0x1A0754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0754u;
label_1a0754:
    // 0x1a0754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0758: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x1a0758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1a075c: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x1a075cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x1a0760: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A0760u;
    SET_GPR_U32(ctx, 31, 0x1A0768u);
    ctx->pc = 0x1A0764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0760u;
    // 0x1a0764: 0x26108ff8  addiu       $s0, $s0, -0x7008 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A0760u, 0x1A0768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0768u;
label_1a0768:
    // 0x1a0768: 0xc06804a  jal         func_1A0128
    ctx->pc = 0x1A0768u;
    SET_GPR_U32(ctx, 31, 0x1A0770u);
    ctx->pc = 0x1A076Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0768u;
    // 0x1a076c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0128u, 0x1A0768u, 0x1A0770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0770u;
label_1a0770:
    // 0x1a0770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0774: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A0774u;
    SET_GPR_U32(ctx, 31, 0x1A077Cu);
    ctx->pc = 0x1A0778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0774u;
    // 0x1a0778: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A0774u, 0x1A077Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A077Cu;
label_1a077c:
    // 0x1a077c: 0xc06804a  jal         func_1A0128
    ctx->pc = 0x1A077Cu;
    SET_GPR_U32(ctx, 31, 0x1A0784u);
    ctx->pc = 0x1A0780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A077Cu;
    // 0x1a0780: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0128u, 0x1A077Cu, 0x1A0784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0784u;
label_1a0784:
    // 0x1a0784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0788: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A0788u;
    SET_GPR_U32(ctx, 31, 0x1A0790u);
    ctx->pc = 0x1A078Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0788u;
    // 0x1a078c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A0788u, 0x1A0790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0790u;
label_1a0790:
    // 0x1a0790: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1a0790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1a0794: 0x8f858e0c  lw          $a1, -0x71F4($gp)
    ctx->pc = 0x1a0794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938124)));
    // 0x1a0798: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A0798u;
    SET_GPR_U32(ctx, 31, 0x1A07A0u);
    ctx->pc = 0x1A079Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0798u;
    // 0x1a079c: 0x24849008  addiu       $a0, $a0, -0x6FF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A0798u, 0x1A07A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A07A0u;
label_1a07a0:
    // 0x1a07a0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a07a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a07a4: 0x24a59018  addiu       $a1, $a1, -0x6FE8
    ctx->pc = 0x1a07a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938648));
    // 0x1a07a8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1a07a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a07ac: 0xc066d1c  jal         func_19B470
    ctx->pc = 0x1A07ACu;
    SET_GPR_U32(ctx, 31, 0x1A07B4u);
    ctx->pc = 0x1A07B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A07ACu;
    // 0x1a07b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B470u, 0x1A07ACu, 0x1A07B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A07B4u;
label_1a07b4:
    // 0x1a07b4: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1A07B4u;
    {
        const bool branch_taken_0x1a07b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a07b4) {
            ctx->pc = 0x1A0948u;
            return;
        }
    }
    ctx->pc = 0x1A07BCu;
    // 0x1a07bc: 0x0  nop
    ctx->pc = 0x1a07bcu;
    // NOP
    ctx->pc = 0x1a07c0u;
}

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

// Function: entry_00104788
// Address: 0x104788 - 0x104858
void entry_00104788_0x104788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104788_0x104788");
#endif

    switch (ctx->pc) {
        case 0x104794u: goto label_104794;
        case 0x1047a0u: goto label_1047a0;
        case 0x1047b0u: goto label_1047b0;
        case 0x1047c0u: goto label_1047c0;
        case 0x1047ccu: goto label_1047cc;
        case 0x1047d8u: goto label_1047d8;
        case 0x1047e4u: goto label_1047e4;
        case 0x1047f0u: goto label_1047f0;
        case 0x1047fcu: goto label_1047fc;
        case 0x104808u: goto label_104808;
        case 0x104814u: goto label_104814;
        case 0x104820u: goto label_104820;
        case 0x10482cu: goto label_10482c;
        case 0x10483cu: goto label_10483c;
        case 0x104848u: goto label_104848;
        default: break;
    }

    ctx->pc = 0x104788u;

    // 0x104788: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x104788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x10478c: 0xc06a228  jal         func_1A88A0
    ctx->pc = 0x10478Cu;
    SET_GPR_U32(ctx, 31, 0x104794u);
    ctx->pc = 0x104790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10478Cu;
    // 0x104790: 0x24130080  addiu       $s3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88A0u, 0x10478Cu, 0x104794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104794u;
label_104794:
    // 0x104794: 0x260533c0  addiu       $a1, $s0, 0x33C0
    ctx->pc = 0x104794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 13248));
    // 0x104798: 0xc06a228  jal         func_1A88A0
    ctx->pc = 0x104798u;
    SET_GPR_U32(ctx, 31, 0x1047A0u);
    ctx->pc = 0x10479Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104798u;
    // 0x10479c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88A0u, 0x104798u, 0x1047A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1047A0u;
label_1047a0:
    // 0x1047a0: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x1047a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x1047a4: 0x24a5d188  addiu       $a1, $a1, -0x2E78
    ctx->pc = 0x1047a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955400));
    // 0x1047a8: 0xc06a228  jal         func_1A88A0
    ctx->pc = 0x1047A8u;
    SET_GPR_U32(ctx, 31, 0x1047B0u);
    ctx->pc = 0x1047ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1047A8u;
    // 0x1047ac: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88A0u, 0x1047A8u, 0x1047B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1047B0u;
label_1047b0:
    // 0x1047b0: 0x8f858d10  lw          $a1, -0x72F0($gp)
    ctx->pc = 0x1047b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1047b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1047b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1047b8: 0xc06a228  jal         func_1A88A0
    ctx->pc = 0x1047B8u;
    SET_GPR_U32(ctx, 31, 0x1047C0u);
    ctx->pc = 0x1047BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1047B8u;
    // 0x1047bc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88A0u, 0x1047B8u, 0x1047C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1047C0u;
label_1047c0:
    // 0x1047c0: 0x2785896c  addiu       $a1, $gp, -0x7694
    ctx->pc = 0x1047c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936940));
    // 0x1047c4: 0xc06a228  jal         func_1A88A0
    ctx->pc = 0x1047C4u;
    SET_GPR_U32(ctx, 31, 0x1047CCu);
    ctx->pc = 0x1047C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1047C4u;
    // 0x1047c8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88A0u, 0x1047C4u, 0x1047CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1047CCu;
label_1047cc:
    // 0x1047cc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1047ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1047d0: 0xc06a228  jal         func_1A88A0
    ctx->pc = 0x1047D0u;
    SET_GPR_U32(ctx, 31, 0x1047D8u);
    ctx->pc = 0x1047D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1047D0u;
    // 0x1047d4: 0x260533c4  addiu       $a1, $s0, 0x33C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 13252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88A0u, 0x1047D0u, 0x1047D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1047D8u;
label_1047d8:
    // 0x1047d8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1047d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1047dc: 0xc06a228  jal         func_1A88A0
    ctx->pc = 0x1047DCu;
    SET_GPR_U32(ctx, 31, 0x1047E4u);
    ctx->pc = 0x1047E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1047DCu;
    // 0x1047e0: 0x260533c8  addiu       $a1, $s0, 0x33C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 13256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88A0u, 0x1047DCu, 0x1047E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1047E4u;
label_1047e4:
    // 0x1047e4: 0x278588d0  addiu       $a1, $gp, -0x7730
    ctx->pc = 0x1047e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936784));
    // 0x1047e8: 0xc06a228  jal         func_1A88A0
    ctx->pc = 0x1047E8u;
    SET_GPR_U32(ctx, 31, 0x1047F0u);
    ctx->pc = 0x1047ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1047E8u;
    // 0x1047ec: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88A0u, 0x1047E8u, 0x1047F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1047F0u;
label_1047f0:
    // 0x1047f0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1047f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1047f4: 0xc06a228  jal         func_1A88A0
    ctx->pc = 0x1047F4u;
    SET_GPR_U32(ctx, 31, 0x1047FCu);
    ctx->pc = 0x1047F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1047F4u;
    // 0x1047f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88A0u, 0x1047F4u, 0x1047FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1047FCu;
label_1047fc:
    // 0x1047fc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1047fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x104800: 0xc06a228  jal         func_1A88A0
    ctx->pc = 0x104800u;
    SET_GPR_U32(ctx, 31, 0x104808u);
    ctx->pc = 0x104804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104800u;
    // 0x104804: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88A0u, 0x104800u, 0x104808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104808u;
label_104808:
    // 0x104808: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x104808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x10480c: 0xc06a228  jal         func_1A88A0
    ctx->pc = 0x10480Cu;
    SET_GPR_U32(ctx, 31, 0x104814u);
    ctx->pc = 0x104810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10480Cu;
    // 0x104810: 0x2605361c  addiu       $a1, $s0, 0x361C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 13852));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88A0u, 0x10480Cu, 0x104814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104814u;
label_104814:
    // 0x104814: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x104814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x104818: 0xc06a228  jal         func_1A88A0
    ctx->pc = 0x104818u;
    SET_GPR_U32(ctx, 31, 0x104820u);
    ctx->pc = 0x10481Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104818u;
    // 0x10481c: 0x26053620  addiu       $a1, $s0, 0x3620 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 13856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88A0u, 0x104818u, 0x104820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104820u;
label_104820:
    // 0x104820: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x104820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x104824: 0xc06a228  jal         func_1A88A0
    ctx->pc = 0x104824u;
    SET_GPR_U32(ctx, 31, 0x10482Cu);
    ctx->pc = 0x104828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104824u;
    // 0x104828: 0x26053624  addiu       $a1, $s0, 0x3624 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 13860));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88A0u, 0x104824u, 0x10482Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10482Cu;
label_10482c:
    // 0x10482c: 0x8f858d10  lw          $a1, -0x72F0($gp)
    ctx->pc = 0x10482cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x104830: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x104830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x104834: 0xc06a228  jal         func_1A88A0
    ctx->pc = 0x104834u;
    SET_GPR_U32(ctx, 31, 0x10483Cu);
    ctx->pc = 0x104838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104834u;
    // 0x104838: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88A0u, 0x104834u, 0x10483Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10483Cu;
label_10483c:
    // 0x10483c: 0x278588a4  addiu       $a1, $gp, -0x775C
    ctx->pc = 0x10483cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936740));
    // 0x104840: 0xc06a228  jal         func_1A88A0
    ctx->pc = 0x104840u;
    SET_GPR_U32(ctx, 31, 0x104848u);
    ctx->pc = 0x104844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104840u;
    // 0x104844: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88A0u, 0x104840u, 0x104848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104848u;
label_104848:
    // 0x104848: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x104848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x10484c: 0x2450bf08  addiu       $s0, $v0, -0x40F8
    ctx->pc = 0x10484cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950664));
    // 0x104850: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x104850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104854: 0x0  nop
    ctx->pc = 0x104854u;
    // NOP
    ctx->pc = 0x104858u;
}

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

// Function: entry_00172770
// Address: 0x172770 - 0x172860
void entry_00172770_0x172770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172770_0x172770");
#endif

    switch (ctx->pc) {
        case 0x172790u: goto label_172790;
        case 0x172798u: goto label_172798;
        case 0x1727acu: goto label_1727ac;
        case 0x1727b8u: goto label_1727b8;
        case 0x1727c4u: goto label_1727c4;
        case 0x1727d4u: goto label_1727d4;
        case 0x1727f8u: goto label_1727f8;
        case 0x17280cu: goto label_17280c;
        case 0x172818u: goto label_172818;
        case 0x172828u: goto label_172828;
        case 0x172834u: goto label_172834;
        case 0x172844u: goto label_172844;
        case 0x172850u: goto label_172850;
        default: break;
    }

    ctx->pc = 0x172770u;

    // 0x172770: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x172770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x172774: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x172774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x172778: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x172778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x17277c: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x17277cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x172780: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x172780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x172784: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x172784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x172788: 0xc06bad2  jal         func_1AEB48
    ctx->pc = 0x172788u;
    SET_GPR_U32(ctx, 31, 0x172790u);
    ctx->pc = 0x17278Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172788u;
    // 0x17278c: 0x7b903  sra         $s7, $a3, 4 (Delay Slot)
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 7), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB48u, 0x172788u, 0x172790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172790u;
label_172790:
    // 0x172790: 0xc06bad6  jal         func_1AEB58
    ctx->pc = 0x172790u;
    SET_GPR_U32(ctx, 31, 0x172798u);
    ctx->pc = 0x172794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172790u;
    // 0x172794: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB58u, 0x172790u, 0x172798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172798u;
label_172798:
    // 0x172798: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x172798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x17279c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17279cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1727a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1727a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1727a4: 0xc06bb2c  jal         func_1AECB0
    ctx->pc = 0x1727A4u;
    SET_GPR_U32(ctx, 31, 0x1727ACu);
    ctx->pc = 0x1727A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1727A4u;
    // 0x1727a8: 0x24a52300  addiu       $a1, $a1, 0x2300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AECB0u, 0x1727A4u, 0x1727ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1727ACu;
label_1727ac:
    // 0x1727ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1727acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1727b0: 0xc06baf0  jal         func_1AEBC0
    ctx->pc = 0x1727B0u;
    SET_GPR_U32(ctx, 31, 0x1727B8u);
    ctx->pc = 0x1727B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1727B0u;
    // 0x1727b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEBC0u, 0x1727B0u, 0x1727B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1727B8u;
label_1727b8:
    // 0x1727b8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1727b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1727bc: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x1727BCu;
    SET_GPR_U32(ctx, 31, 0x1727C4u);
    ctx->pc = 0x1727C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1727BCu;
    // 0x1727c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x1727BCu, 0x1727C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1727C4u;
label_1727c4:
    // 0x1727c4: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x1727c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x1727c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1727c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1727cc: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x1727CCu;
    SET_GPR_U32(ctx, 31, 0x1727D4u);
    ctx->pc = 0x1727D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1727CCu;
    // 0x1727d0: 0x34a50404  ori         $a1, $a1, 0x404 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1028);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x1727CCu, 0x1727D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1727D4u;
label_1727d4:
    // 0x1727d4: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x1727d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1727d8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1727d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1727dc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1727dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1727e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1727e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1727e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1727e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1727e8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1727e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1727ec: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1727ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1727f0: 0xc05c7d4  jal         func_171F50
    ctx->pc = 0x1727F0u;
    SET_GPR_U32(ctx, 31, 0x1727F8u);
    ctx->pc = 0x1727F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1727F0u;
    // 0x1727f4: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171F50u, 0x1727F0u, 0x1727F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1727F8u;
label_1727f8:
    // 0x1727f8: 0x3c056c01  lui         $a1, 0x6C01
    ctx->pc = 0x1727f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27649 << 16));
    // 0x1727fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1727fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172800: 0x34a50007  ori         $a1, $a1, 0x7
    ctx->pc = 0x172800u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7);
    // 0x172804: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x172804u;
    SET_GPR_U32(ctx, 31, 0x17280Cu);
    ctx->pc = 0x172808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172804u;
    // 0x172808: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x172804u, 0x17280Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17280Cu;
label_17280c:
    // 0x17280c: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x17280cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172810: 0xc06bbe8  jal         func_1AEFA0
    ctx->pc = 0x172810u;
    SET_GPR_U32(ctx, 31, 0x172818u);
    ctx->pc = 0x172814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172810u;
    // 0x172814: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEFA0u, 0x172810u, 0x172818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172818u;
label_172818:
    // 0x172818: 0x3c056c01  lui         $a1, 0x6C01
    ctx->pc = 0x172818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27649 << 16));
    // 0x17281c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17281cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172820: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x172820u;
    SET_GPR_U32(ctx, 31, 0x172828u);
    ctx->pc = 0x172824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172820u;
    // 0x172824: 0x34a5015a  ori         $a1, $a1, 0x15A (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)346);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x172820u, 0x172828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172828u;
label_172828:
    // 0x172828: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x172828u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17282c: 0xc06bbe8  jal         func_1AEFA0
    ctx->pc = 0x17282Cu;
    SET_GPR_U32(ctx, 31, 0x172834u);
    ctx->pc = 0x172830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17282Cu;
    // 0x172830: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEFA0u, 0x17282Cu, 0x172834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172834u;
label_172834:
    // 0x172834: 0x3c056c01  lui         $a1, 0x6C01
    ctx->pc = 0x172834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27649 << 16));
    // 0x172838: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17283c: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x17283Cu;
    SET_GPR_U32(ctx, 31, 0x172844u);
    ctx->pc = 0x172840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17283Cu;
    // 0x172840: 0x34a502ad  ori         $a1, $a1, 0x2AD (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)685);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x17283Cu, 0x172844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172844u;
label_172844:
    // 0x172844: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x172844u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172848: 0xc06bbe8  jal         func_1AEFA0
    ctx->pc = 0x172848u;
    SET_GPR_U32(ctx, 31, 0x172850u);
    ctx->pc = 0x17284Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172848u;
    // 0x17284c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEFA0u, 0x172848u, 0x172850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172850u;
label_172850:
    // 0x172850: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x172850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x172854: 0x1840019b  blez        $v0, . + 4 + (0x19B << 2)
    ctx->pc = 0x172854u;
    {
        const bool branch_taken_0x172854 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x172858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172854u;
        // 0x172858: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172854) {
            ctx->pc = 0x172EC4u;
            return;
        }
    }
    ctx->pc = 0x17285Cu;
    // 0x17285c: 0x0  nop
    ctx->pc = 0x17285cu;
    // NOP
    ctx->pc = 0x172860u;
}

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

// Function: Cmd_RANKING_DISP_Entry__FP15BsSCDEntControl
// Address: 0x1175c0 - 0x117838
void Cmd_RANKING_DISP_Entry__FP15BsSCDEntControl_0x1175c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_RANKING_DISP_Entry__FP15BsSCDEntControl_0x1175c0");
#endif

    switch (ctx->pc) {
        case 0x1175e8u: goto label_1175e8;
        case 0x1175f4u: goto label_1175f4;
        case 0x117600u: goto label_117600;
        case 0x11760cu: goto label_11760c;
        case 0x117618u: goto label_117618;
        case 0x117628u: goto label_117628;
        case 0x117638u: goto label_117638;
        case 0x11764cu: goto label_11764c;
        case 0x11769cu: goto label_11769c;
        case 0x1176b8u: goto label_1176b8;
        case 0x1176c4u: goto label_1176c4;
        case 0x1176dcu: goto label_1176dc;
        case 0x1176e8u: goto label_1176e8;
        case 0x117700u: goto label_117700;
        case 0x11770cu: goto label_11770c;
        case 0x117770u: goto label_117770;
        case 0x11777cu: goto label_11777c;
        case 0x11778cu: goto label_11778c;
        case 0x117798u: goto label_117798;
        case 0x1177dcu: goto label_1177dc;
        case 0x1177e8u: goto label_1177e8;
        case 0x1177f8u: goto label_1177f8;
        case 0x117804u: goto label_117804;
        case 0x117814u: goto label_117814;
        default: break;
    }

    ctx->pc = 0x1175c0u;

    // 0x1175c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1175c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1175c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1175c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1175c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1175c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1175cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1175ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1175d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1175d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1175d4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1175d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1175d8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1175d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1175dc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1175dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1175e0: 0xc043258  jal         func_10C960
    ctx->pc = 0x1175E0u;
    SET_GPR_U32(ctx, 31, 0x1175E8u);
    ctx->pc = 0x1175E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1175E0u;
    // 0x1175e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C960u, 0x1175E0u, 0x1175E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1175E8u;
label_1175e8:
    // 0x1175e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1175e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1175ec: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1175ECu;
    SET_GPR_U32(ctx, 31, 0x1175F4u);
    ctx->pc = 0x1175F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1175ECu;
    // 0x1175f0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1175ECu, 0x1175F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1175F4u;
label_1175f4:
    // 0x1175f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1175f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1175f8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1175F8u;
    SET_GPR_U32(ctx, 31, 0x117600u);
    ctx->pc = 0x1175FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1175F8u;
    // 0x1175fc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1175F8u, 0x117600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117600u;
label_117600:
    // 0x117600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117604: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x117604u;
    SET_GPR_U32(ctx, 31, 0x11760Cu);
    ctx->pc = 0x117608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117604u;
    // 0x117608: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x117604u, 0x11760Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11760Cu;
label_11760c:
    // 0x11760c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11760cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117610: 0xc0637a8  jal         func_18DEA0
    ctx->pc = 0x117610u;
    SET_GPR_U32(ctx, 31, 0x117618u);
    ctx->pc = 0x117614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117610u;
    // 0x117614: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DEA0u, 0x117610u, 0x117618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117618u;
label_117618:
    // 0x117618: 0x16110004  bne         $s0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x117618u;
    {
        const bool branch_taken_0x117618 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x11761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117618u;
        // 0x11761c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117618) {
            ctx->pc = 0x11762Cu;
            goto label_11762c;
        }
    }
    ctx->pc = 0x117620u;
    // 0x117620: 0xc063a90  jal         func_18EA40
    ctx->pc = 0x117620u;
    SET_GPR_U32(ctx, 31, 0x117628u);
    ctx->pc = 0x117624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117620u;
    // 0x117624: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EA40u, 0x117620u, 0x117628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117628u;
label_117628:
    // 0x117628: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11762c:
    // 0x11762c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11762cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117630: 0xc063a94  jal         func_18EA50
    ctx->pc = 0x117630u;
    SET_GPR_U32(ctx, 31, 0x117638u);
    ctx->pc = 0x117634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117630u;
    // 0x117634: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EA50u, 0x117630u, 0x117638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117638u;
label_117638:
    // 0x117638: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x117638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x11763c: 0x24a5d1b0  addiu       $a1, $a1, -0x2E50
    ctx->pc = 0x11763cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955440));
    // 0x117640: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117644: 0xc063764  jal         func_18DD90
    ctx->pc = 0x117644u;
    SET_GPR_U32(ctx, 31, 0x11764Cu);
    ctx->pc = 0x117648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117644u;
    // 0x117648: 0x26260001  addiu       $a2, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x117644u, 0x11764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11764Cu;
label_11764c:
    // 0x11764c: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x11764cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x117650: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x117650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x117654: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x117654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x117658: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x117658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x11765c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x11765cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x117660: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x117660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x117664: 0x249533b0  addiu       $s5, $a0, 0x33B0
    ctx->pc = 0x117664u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 13232));
    // 0x117668: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x117668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x11766c: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x11766cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x117670: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x117670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x117674: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x117674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x117678: 0x298c0  sll         $s3, $v0, 3
    ctx->pc = 0x117678u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x11767c: 0x264a021  addu        $s4, $s3, $a0
    ctx->pc = 0x11767cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x117680: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x117680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x117684: 0x1045002c  beq         $v0, $a1, . + 4 + (0x2C << 2)
    ctx->pc = 0x117684u;
    {
        const bool branch_taken_0x117684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x117688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117684u;
        // 0x117688: 0x2b31021  addu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117684) {
            ctx->pc = 0x117738u;
            goto label_117738;
        }
    }
    ctx->pc = 0x11768Cu;
    // 0x11768c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x11768cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x117690: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x117690u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x117694: 0xc041882  jal         func_106208
    ctx->pc = 0x117694u;
    SET_GPR_U32(ctx, 31, 0x11769Cu);
    ctx->pc = 0x117698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117694u;
    // 0x117698: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x117694u, 0x11769Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11769Cu;
label_11769c:
    // 0x11769c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x11769cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1176a0: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1176a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1176a4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1176a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1176a8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1176a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1176ac: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x1176acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x1176b0: 0xc041882  jal         func_106208
    ctx->pc = 0x1176B0u;
    SET_GPR_U32(ctx, 31, 0x1176B8u);
    ctx->pc = 0x1176B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1176B0u;
    // 0x1176b4: 0x2610d1c0  addiu       $s0, $s0, -0x2E40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x1176B0u, 0x1176B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1176B8u;
label_1176b8:
    // 0x1176b8: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1176b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1176bc: 0xc041882  jal         func_106208
    ctx->pc = 0x1176BCu;
    SET_GPR_U32(ctx, 31, 0x1176C4u);
    ctx->pc = 0x1176C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1176BCu;
    // 0x1176c0: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x1176BCu, 0x1176C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1176C4u;
label_1176c4:
    // 0x1176c4: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1176c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1176c8: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x1176c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1176cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1176ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1176d0: 0x24a5d1b8  addiu       $a1, $a1, -0x2E48
    ctx->pc = 0x1176d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955448));
    // 0x1176d4: 0xc063764  jal         func_18DD90
    ctx->pc = 0x1176D4u;
    SET_GPR_U32(ctx, 31, 0x1176DCu);
    ctx->pc = 0x1176D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1176D4u;
    // 0x1176d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x1176D4u, 0x1176DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1176DCu;
label_1176dc:
    // 0x1176dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1176dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1176e0: 0xc063764  jal         func_18DD90
    ctx->pc = 0x1176E0u;
    SET_GPR_U32(ctx, 31, 0x1176E8u);
    ctx->pc = 0x1176E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1176E0u;
    // 0x1176e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x1176E0u, 0x1176E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1176E8u;
label_1176e8:
    // 0x1176e8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1176e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1176ec: 0x2751021  addu        $v0, $s3, $s5
    ctx->pc = 0x1176ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x1176f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1176f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1176f4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1176f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1176f8: 0xc063764  jal         func_18DD90
    ctx->pc = 0x1176F8u;
    SET_GPR_U32(ctx, 31, 0x117700u);
    ctx->pc = 0x1176FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1176F8u;
    // 0x1176fc: 0x24a5d1c8  addiu       $a1, $a1, -0x2E38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x1176F8u, 0x117700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117700u;
label_117700:
    // 0x117700: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117704: 0xc063764  jal         func_18DD90
    ctx->pc = 0x117704u;
    SET_GPR_U32(ctx, 31, 0x11770Cu);
    ctx->pc = 0x117708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117704u;
    // 0x117708: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x117704u, 0x11770Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11770Cu;
label_11770c:
    // 0x11770c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11770cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117710: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x117710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117714: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x117714u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x117718: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117718u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11771c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11771cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117720: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x117720u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x117724: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x117724u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117728: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x117728u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11772c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11772cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117730: 0x8063b2e  j           func_18ECB8
    ctx->pc = 0x117730u;
    ctx->pc = 0x117734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117730u;
    // 0x117734: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ECB8u;
    WTxPanelPrint__FP9WcTxPanelPc_0x18ecb8(rdram, ctx, runtime); return;
    ctx->pc = 0x117738u;
label_117738:
    // 0x117738: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x117738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11773c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x11773cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x117740: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x117740u;
    {
        const bool branch_taken_0x117740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x117744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117740u;
        // 0x117744: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117740) {
            ctx->pc = 0x117758u;
            goto label_117758;
        }
    }
    ctx->pc = 0x117748u;
    // 0x117748: 0x5062001f  beql        $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x117748u;
    {
        const bool branch_taken_0x117748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x117748) {
            ctx->pc = 0x11774Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117748u;
            // 0x11774c: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1177C8u;
            goto label_1177c8;
        }
    }
    ctx->pc = 0x117750u;
    // 0x117750: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x117750u;
    {
        const bool branch_taken_0x117750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117750u;
        // 0x117754: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117750) {
            ctx->pc = 0x117818u;
            goto label_117818;
        }
    }
    ctx->pc = 0x117758u;
label_117758:
    // 0x117758: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x117758u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x11775c: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x11775cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x117760: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117764: 0x2610d1c0  addiu       $s0, $s0, -0x2E40
    ctx->pc = 0x117764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955456));
    // 0x117768: 0xc063764  jal         func_18DD90
    ctx->pc = 0x117768u;
    SET_GPR_U32(ctx, 31, 0x117770u);
    ctx->pc = 0x11776Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117768u;
    // 0x11776c: 0x24a5d1d0  addiu       $a1, $a1, -0x2E30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x117768u, 0x117770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117770u;
label_117770:
    // 0x117770: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117774: 0xc063764  jal         func_18DD90
    ctx->pc = 0x117774u;
    SET_GPR_U32(ctx, 31, 0x11777Cu);
    ctx->pc = 0x117778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117774u;
    // 0x117778: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x117774u, 0x11777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11777Cu;
label_11777c:
    // 0x11777c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11777cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x117780: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117784: 0xc063764  jal         func_18DD90
    ctx->pc = 0x117784u;
    SET_GPR_U32(ctx, 31, 0x11778Cu);
    ctx->pc = 0x117788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117784u;
    // 0x117788: 0x24a54638  addiu       $a1, $a1, 0x4638 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x117784u, 0x11778Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11778Cu;
label_11778c:
    // 0x11778c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11778cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117790: 0xc063764  jal         func_18DD90
    ctx->pc = 0x117790u;
    SET_GPR_U32(ctx, 31, 0x117798u);
    ctx->pc = 0x117794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117790u;
    // 0x117794: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x117790u, 0x117798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117798u;
label_117798:
    // 0x117798: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x117798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x11779c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11779cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1177a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1177a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1177a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1177a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1177a8: 0x24a54650  addiu       $a1, $a1, 0x4650
    ctx->pc = 0x1177a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18000));
    // 0x1177ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1177acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1177b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1177b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1177b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1177b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1177b8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1177b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1177bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1177bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1177c0: 0x8063764  j           func_18DD90
    ctx->pc = 0x1177C0u;
    ctx->pc = 0x1177C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1177C0u;
    // 0x1177c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    WTxPanelPrintf__FP9WcTxPanelPce_0x18dd90(rdram, ctx, runtime); return;
    ctx->pc = 0x1177C8u;
label_1177c8:
    // 0x1177c8: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x1177c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x1177cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1177ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1177d0: 0x24a5d1d0  addiu       $a1, $a1, -0x2E30
    ctx->pc = 0x1177d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955472));
    // 0x1177d4: 0xc063764  jal         func_18DD90
    ctx->pc = 0x1177D4u;
    SET_GPR_U32(ctx, 31, 0x1177DCu);
    ctx->pc = 0x1177D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1177D4u;
    // 0x1177d8: 0x2610d1c0  addiu       $s0, $s0, -0x2E40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x1177D4u, 0x1177DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1177DCu;
label_1177dc:
    // 0x1177dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1177dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1177e0: 0xc063764  jal         func_18DD90
    ctx->pc = 0x1177E0u;
    SET_GPR_U32(ctx, 31, 0x1177E8u);
    ctx->pc = 0x1177E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1177E0u;
    // 0x1177e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x1177E0u, 0x1177E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1177E8u;
label_1177e8:
    // 0x1177e8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1177e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1177ec: 0x24a54638  addiu       $a1, $a1, 0x4638
    ctx->pc = 0x1177ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17976));
    // 0x1177f0: 0xc063764  jal         func_18DD90
    ctx->pc = 0x1177F0u;
    SET_GPR_U32(ctx, 31, 0x1177F8u);
    ctx->pc = 0x1177F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1177F0u;
    // 0x1177f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x1177F0u, 0x1177F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1177F8u;
label_1177f8:
    // 0x1177f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1177f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1177fc: 0xc063764  jal         func_18DD90
    ctx->pc = 0x1177FCu;
    SET_GPR_U32(ctx, 31, 0x117804u);
    ctx->pc = 0x117800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1177FCu;
    // 0x117800: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x1177FCu, 0x117804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117804u;
label_117804:
    // 0x117804: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x117804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x117808: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11780c: 0xc063764  jal         func_18DD90
    ctx->pc = 0x11780Cu;
    SET_GPR_U32(ctx, 31, 0x117814u);
    ctx->pc = 0x117810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11780Cu;
    // 0x117810: 0x24a54668  addiu       $a1, $a1, 0x4668 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x11780Cu, 0x117814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117814u;
label_117814:
    // 0x117814: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_117818:
    // 0x117818: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x117818u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11781c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11781cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117820: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x117820u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x117824: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x117824u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117828: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x117828u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11782c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11782cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117830: 0x3e00008  jr          $ra
    ctx->pc = 0x117830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117830u;
        // 0x117834: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117838u;
}

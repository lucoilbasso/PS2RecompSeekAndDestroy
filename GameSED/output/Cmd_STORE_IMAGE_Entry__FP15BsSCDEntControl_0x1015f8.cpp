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

// Function: Cmd_STORE_IMAGE_Entry__FP15BsSCDEntControl
// Address: 0x1015f8 - 0x101830
void Cmd_STORE_IMAGE_Entry__FP15BsSCDEntControl_0x1015f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_STORE_IMAGE_Entry__FP15BsSCDEntControl_0x1015f8");
#endif

    switch (ctx->pc) {
        case 0x101630u: goto label_101630;
        case 0x10163cu: goto label_10163c;
        case 0x10165cu: goto label_10165c;
        case 0x101688u: goto label_101688;
        case 0x101690u: goto label_101690;
        case 0x1016b8u: goto label_1016b8;
        case 0x1016d0u: goto label_1016d0;
        case 0x1016e0u: goto label_1016e0;
        case 0x1016e8u: goto label_1016e8;
        case 0x101760u: goto label_101760;
        case 0x10176cu: goto label_10176c;
        case 0x101774u: goto label_101774;
        case 0x101788u: goto label_101788;
        case 0x101794u: goto label_101794;
        case 0x1017a0u: goto label_1017a0;
        default: break;
    }

    ctx->pc = 0x1015f8u;

    // 0x1015f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1015f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1015fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1015fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x101600: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x101600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101604: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x101604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x101608: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x101608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10160c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10160cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x101610: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x101610u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101614: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x101614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x101618: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x101618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x10161c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x10161cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x101620: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x101620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x101624: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x101624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x101628: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x101628u;
    SET_GPR_U32(ctx, 31, 0x101630u);
    ctx->pc = 0x10162Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101628u;
    // 0x10162c: 0x8c550044  lw          $s5, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x101628u, 0x101630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101630u;
label_101630:
    // 0x101630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101634: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x101634u;
    SET_GPR_U32(ctx, 31, 0x10163Cu);
    ctx->pc = 0x101638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101634u;
    // 0x101638: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x101634u, 0x10163Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10163Cu;
label_10163c:
    // 0x10163c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x10163cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x101640: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x101640u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101644: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x101644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x101648: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x101648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10164c: 0x50440005  beql        $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10164Cu;
    {
        const bool branch_taken_0x10164c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x10164c) {
            ctx->pc = 0x101650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10164Cu;
            // 0x101650: 0x8ea20028  lw          $v0, 0x28($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101664u;
            goto label_101664;
        }
    }
    ctx->pc = 0x101654u;
    // 0x101654: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x101654u;
    SET_GPR_U32(ctx, 31, 0x10165Cu);
    ctx->pc = 0x101658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101654u;
    // 0x101658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x101654u, 0x10165Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10165Cu;
label_10165c:
    // 0x10165c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10165cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101660: 0x8ea20028  lw          $v0, 0x28($s5)
    ctx->pc = 0x101660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_101664:
    // 0x101664: 0x11a100  sll         $s4, $s1, 4
    ctx->pc = 0x101664u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x101668: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x101668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x10166c: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x10166cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x101670: 0x52200066  beql        $s1, $zero, . + 4 + (0x66 << 2)
    ctx->pc = 0x101670u;
    {
        const bool branch_taken_0x101670 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x101670) {
            ctx->pc = 0x101674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101670u;
            // 0x101674: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10180Cu;
            goto label_10180c;
        }
    }
    ctx->pc = 0x101678u;
    // 0x101678: 0x6400035  bltz        $s2, . + 4 + (0x35 << 2)
    ctx->pc = 0x101678u;
    {
        const bool branch_taken_0x101678 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x10167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101678u;
        // 0x10167c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101678) {
            ctx->pc = 0x101750u;
            goto label_101750;
        }
    }
    ctx->pc = 0x101680u;
    // 0x101680: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x101680u;
    SET_GPR_U32(ctx, 31, 0x101688u);
    ctx->pc = 0x101684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101680u;
    // 0x101684: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x101680u, 0x101688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101688u;
label_101688:
    // 0x101688: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x101688u;
    SET_GPR_U32(ctx, 31, 0x101690u);
    ctx->pc = 0x10168Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101688u;
    // 0x10168c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x101688u, 0x101690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101690u;
label_101690:
    // 0x101690: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x101690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x101694: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x101694u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x101698: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x101698u;
    {
        const bool branch_taken_0x101698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101698u;
        // 0x10169c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101698) {
            ctx->pc = 0x1016BCu;
            goto label_1016bc;
        }
    }
    ctx->pc = 0x1016A0u;
    // 0x1016a0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1016a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1016a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1016a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1016a8: 0x24a51a90  addiu       $a1, $a1, 0x1A90
    ctx->pc = 0x1016a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6800));
    // 0x1016ac: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1016acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1016b0: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x1016B0u;
    SET_GPR_U32(ctx, 31, 0x1016B8u);
    ctx->pc = 0x1016B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1016B0u;
    // 0x1016b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1016B0u, 0x1016B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1016B8u;
label_1016b8:
    // 0x1016b8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1016b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1016bc:
    // 0x1016bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1016bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1016c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1016c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1016c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1016c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1016c8: 0xc05f768  jal         func_17DDA0
    ctx->pc = 0x1016C8u;
    SET_GPR_U32(ctx, 31, 0x1016D0u);
    ctx->pc = 0x1016CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1016C8u;
    // 0x1016cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DDA0u, 0x1016C8u, 0x1016D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1016D0u;
label_1016d0:
    // 0x1016d0: 0x8eb00028  lw          $s0, 0x28($s5)
    ctx->pc = 0x1016d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x1016d4: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1016d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1016d8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1016D8u;
    SET_GPR_U32(ctx, 31, 0x1016E0u);
    ctx->pc = 0x1016DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1016D8u;
    // 0x1016dc: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1016D8u, 0x1016E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1016E0u;
label_1016e0:
    // 0x1016e0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1016E0u;
    SET_GPR_U32(ctx, 31, 0x1016E8u);
    ctx->pc = 0x1016E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1016E0u;
    // 0x1016e4: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1016E0u, 0x1016E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1016E8u;
label_1016e8:
    // 0x1016e8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1016e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1016ec: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x1016ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1016f0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1016f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1016f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1016f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1016f8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1016f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1016fc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1016fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x101700: 0x122180  sll         $a0, $s2, 6
    ctx->pc = 0x101700u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x101704: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x101704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x101708: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x101708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x10170c: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x10170cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x101710: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x101710u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x101714: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x101714u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x101718: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x101718u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x10171c: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x10171cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x101720: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x101720u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
    // 0x101724: 0xdca30018  ld          $v1, 0x18($a1)
    ctx->pc = 0x101724u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x101728: 0xfc830018  sd          $v1, 0x18($a0)
    ctx->pc = 0x101728u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 3));
    // 0x10172c: 0xdca20020  ld          $v0, 0x20($a1)
    ctx->pc = 0x10172cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x101730: 0xfc820020  sd          $v0, 0x20($a0)
    ctx->pc = 0x101730u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 2));
    // 0x101734: 0xdca30028  ld          $v1, 0x28($a1)
    ctx->pc = 0x101734u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x101738: 0xfc830028  sd          $v1, 0x28($a0)
    ctx->pc = 0x101738u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 3));
    // 0x10173c: 0xdca20030  ld          $v0, 0x30($a1)
    ctx->pc = 0x10173cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x101740: 0xfc820030  sd          $v0, 0x30($a0)
    ctx->pc = 0x101740u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 2));
    // 0x101744: 0xdca30038  ld          $v1, 0x38($a1)
    ctx->pc = 0x101744u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x101748: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x101748u;
    {
        const bool branch_taken_0x101748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101748u;
        // 0x10174c: 0xfc830038  sd          $v1, 0x38($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101748) {
            ctx->pc = 0x101808u;
            goto label_101808;
        }
    }
    ctx->pc = 0x101750u;
label_101750:
    // 0x101750: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x101750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101754: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x101754u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101758: 0xc05f820  jal         func_17E080
    ctx->pc = 0x101758u;
    SET_GPR_U32(ctx, 31, 0x101760u);
    ctx->pc = 0x10175Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101758u;
    // 0x10175c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E080u, 0x101758u, 0x101760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101760u;
label_101760:
    // 0x101760: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x101760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x101764: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x101764u;
    SET_GPR_U32(ctx, 31, 0x10176Cu);
    ctx->pc = 0x101768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101764u;
    // 0x101768: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x101764u, 0x10176Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10176Cu;
label_10176c:
    // 0x10176c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x10176Cu;
    SET_GPR_U32(ctx, 31, 0x101774u);
    ctx->pc = 0x101770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10176Cu;
    // 0x101770: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x10176Cu, 0x101774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101774u;
label_101774:
    // 0x101774: 0x8e330020  lw          $s3, 0x20($s1)
    ctx->pc = 0x101774u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x101778: 0x5a600024  blezl       $s3, . + 4 + (0x24 << 2)
    ctx->pc = 0x101778u;
    {
        const bool branch_taken_0x101778 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x101778) {
            ctx->pc = 0x10177Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101778u;
            // 0x10177c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10180Cu;
            goto label_10180c;
        }
    }
    ctx->pc = 0x101780u;
    // 0x101780: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x101780u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101784: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x101784u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_101788:
    // 0x101788: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x101788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10178c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x10178Cu;
    SET_GPR_U32(ctx, 31, 0x101794u);
    ctx->pc = 0x101790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10178Cu;
    // 0x101790: 0x8eb00028  lw          $s0, 0x28($s5) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x10178Cu, 0x101794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101794u;
label_101794:
    // 0x101794: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x101794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x101798: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x101798u;
    SET_GPR_U32(ctx, 31, 0x1017A0u);
    ctx->pc = 0x10179Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101798u;
    // 0x10179c: 0x2168021  addu        $s0, $s0, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x101798u, 0x1017A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1017A0u;
label_1017a0:
    // 0x1017a0: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x1017a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1017a4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1017a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1017a8: 0x122980  sll         $a1, $s2, 6
    ctx->pc = 0x1017a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1017ac: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x1017acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x1017b0: 0x26940050  addiu       $s4, $s4, 0x50
    ctx->pc = 0x1017b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x1017b4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1017b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1017b8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1017b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1017bc: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x1017bcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1017c0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1017c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1017c4: 0x253302a  slt         $a2, $s2, $s3
    ctx->pc = 0x1017c4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1017c8: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x1017c8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x1017cc: 0xdc820008  ld          $v0, 0x8($a0)
    ctx->pc = 0x1017ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1017d0: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x1017d0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x1017d4: 0xdc830010  ld          $v1, 0x10($a0)
    ctx->pc = 0x1017d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1017d8: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x1017d8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x1017dc: 0xdc820018  ld          $v0, 0x18($a0)
    ctx->pc = 0x1017dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1017e0: 0xfca20018  sd          $v0, 0x18($a1)
    ctx->pc = 0x1017e0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 2));
    // 0x1017e4: 0xdc830020  ld          $v1, 0x20($a0)
    ctx->pc = 0x1017e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1017e8: 0xfca30020  sd          $v1, 0x20($a1)
    ctx->pc = 0x1017e8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 3));
    // 0x1017ec: 0xdc820028  ld          $v0, 0x28($a0)
    ctx->pc = 0x1017ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1017f0: 0xfca20028  sd          $v0, 0x28($a1)
    ctx->pc = 0x1017f0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 2));
    // 0x1017f4: 0xdc830030  ld          $v1, 0x30($a0)
    ctx->pc = 0x1017f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1017f8: 0xfca30030  sd          $v1, 0x30($a1)
    ctx->pc = 0x1017f8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 3));
    // 0x1017fc: 0xdc820038  ld          $v0, 0x38($a0)
    ctx->pc = 0x1017fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x101800: 0x14c0ffe1  bnez        $a2, . + 4 + (-0x1F << 2)
    ctx->pc = 0x101800u;
    {
        const bool branch_taken_0x101800 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x101804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101800u;
        // 0x101804: 0xfca20038  sd          $v0, 0x38($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101800) {
            ctx->pc = 0x101788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101788;
        }
    }
    ctx->pc = 0x101808u;
label_101808:
    // 0x101808: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x101808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10180c:
    // 0x10180c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10180cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x101810: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x101810u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101814: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x101814u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x101818: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x101818u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10181c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x10181cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x101820: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x101820u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101824: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x101824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x101828: 0x3e00008  jr          $ra
    ctx->pc = 0x101828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101828u;
        // 0x10182c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101830u;
}

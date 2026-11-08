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

// Function: Cmd_LIGHT_BANK_Entry__FP15BsSCDEntControl
// Address: 0x10d680 - 0x10d7e0
void Cmd_LIGHT_BANK_Entry__FP15BsSCDEntControl_0x10d680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_LIGHT_BANK_Entry__FP15BsSCDEntControl_0x10d680");
#endif

    switch (ctx->pc) {
        case 0x10d6a8u: goto label_10d6a8;
        case 0x10d6d8u: goto label_10d6d8;
        case 0x10d710u: goto label_10d710;
        case 0x10d718u: goto label_10d718;
        case 0x10d734u: goto label_10d734;
        case 0x10d740u: goto label_10d740;
        case 0x10d770u: goto label_10d770;
        case 0x10d784u: goto label_10d784;
        default: break;
    }

    ctx->pc = 0x10d680u;

    // 0x10d680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10d680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10d684: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10d684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d688: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10d68c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10d68cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d690: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10d690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10d694: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10d694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d698: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10d698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10d69c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10d6a0: 0xc04110c  jal         func_104430
    ctx->pc = 0x10D6A0u;
    SET_GPR_U32(ctx, 31, 0x10D6A8u);
    ctx->pc = 0x10D6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D6A0u;
    // 0x10d6a4: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10D6A0u, 0x10D6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D6A8u;
label_10d6a8:
    // 0x10d6a8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x10d6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10d6ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10d6acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d6b0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10d6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10d6b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10d6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10d6b8: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10D6B8u;
    {
        const bool branch_taken_0x10d6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x10d6b8) {
            ctx->pc = 0x10D6D0u;
            goto label_10d6d0;
        }
    }
    ctx->pc = 0x10D6C0u;
    // 0x10d6c0: 0x8e2201bc  lw          $v0, 0x1BC($s1)
    ctx->pc = 0x10d6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x10d6c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10d6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d6c8: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x10D6C8u;
    {
        const bool branch_taken_0x10d6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6C8u;
        // 0x10d6cc: 0xae2301c0  sw          $v1, 0x1C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d6c8) {
            ctx->pc = 0x10D7CCu;
            goto label_10d7cc;
        }
    }
    ctx->pc = 0x10D6D0u;
label_10d6d0:
    // 0x10d6d0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10D6D0u;
    SET_GPR_U32(ctx, 31, 0x10D6D8u);
    ctx->pc = 0x10D6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D6D0u;
    // 0x10d6d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10D6D0u, 0x10D6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D6D8u;
label_10d6d8:
    // 0x10d6d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10d6d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d6dc: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x10D6DCu;
    {
        const bool branch_taken_0x10d6dc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x10D6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6DCu;
        // 0x10d6e0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d6dc) {
            ctx->pc = 0x10D700u;
            goto label_10d700;
        }
    }
    ctx->pc = 0x10D6E4u;
    // 0x10d6e4: 0x8e2201bc  lw          $v0, 0x1BC($s1)
    ctx->pc = 0x10d6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x10d6e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10d6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10d6ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10d6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10d6f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10d6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10d6f4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x10D6F4u;
    {
        const bool branch_taken_0x10d6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6F4u;
        // 0x10d6f8: 0xae2401c0  sw          $a0, 0x1C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d6f4) {
            ctx->pc = 0x10D7CCu;
            goto label_10d7cc;
        }
    }
    ctx->pc = 0x10D6FCu;
    // 0x10d6fc: 0x0  nop
    ctx->pc = 0x10d6fcu;
    // NOP
label_10d700:
    // 0x10d700: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10D700u;
    {
        const bool branch_taken_0x10d700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10D704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D700u;
        // 0x10d704: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d700) {
            ctx->pc = 0x10D748u;
            goto label_10d748;
        }
    }
    ctx->pc = 0x10D708u;
    // 0x10d708: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x10D708u;
    SET_GPR_U32(ctx, 31, 0x10D710u);
    ctx->pc = 0x10D70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D708u;
    // 0x10d70c: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x10D708u, 0x10D710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D710u;
label_10d710:
    // 0x10d710: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x10D710u;
    SET_GPR_U32(ctx, 31, 0x10D718u);
    ctx->pc = 0x10D714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D710u;
    // 0x10d714: 0x24040250  addiu       $a0, $zero, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x10D710u, 0x10D718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D718u;
label_10d718:
    // 0x10d718: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10d718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d71c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10d71cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d720: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x10d720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x10d724: 0x2442ffb0  addiu       $v0, $v0, -0x50
    ctx->pc = 0x10d724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
    // 0x10d728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10d728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d72c: 0xc0624a8  jal         func_1892A0
    ctx->pc = 0x10D72Cu;
    SET_GPR_U32(ctx, 31, 0x10D734u);
    ctx->pc = 0x10D730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D72Cu;
    // 0x10d730: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1892A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892A0u, 0x10D72Cu, 0x10D734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D734u;
label_10d734:
    // 0x10d734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10d734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d738: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x10D738u;
    SET_GPR_U32(ctx, 31, 0x10D740u);
    ctx->pc = 0x10D73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D738u;
    // 0x10d73c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x10D738u, 0x10D740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D740u;
label_10d740:
    // 0x10d740: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x10D740u;
    {
        const bool branch_taken_0x10d740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D740u;
        // 0x10d744: 0xae3001c4  sw          $s0, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d740) {
            ctx->pc = 0x10D7CCu;
            goto label_10d7cc;
        }
    }
    ctx->pc = 0x10D748u;
label_10d748:
    // 0x10d748: 0x8ce201b8  lw          $v0, 0x1B8($a3)
    ctx->pc = 0x10d748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x10d74c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x10D74Cu;
    {
        const bool branch_taken_0x10d74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D74Cu;
        // 0x10d750: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d74c) {
            ctx->pc = 0x10D7D0u;
            goto label_10d7d0;
        }
    }
    ctx->pc = 0x10D754u;
    // 0x10d754: 0x8ce301bc  lw          $v1, 0x1BC($a3)
    ctx->pc = 0x10d754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
    // 0x10d758: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10d758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d75c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x10d75cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10d760: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x10D760u;
    {
        const bool branch_taken_0x10d760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D760u;
        // 0x10d764: 0x8c690000  lw          $t1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d760) {
            ctx->pc = 0x10D7D0u;
            goto label_10d7d0;
        }
    }
    ctx->pc = 0x10D768u;
    // 0x10d768: 0x25280250  addiu       $t0, $t1, 0x250
    ctx->pc = 0x10d768u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 592));
    // 0x10d76c: 0x8ce201bc  lw          $v0, 0x1BC($a3)
    ctx->pc = 0x10d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
label_10d770:
    // 0x10d770: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x10d770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x10d774: 0x25250150  addiu       $a1, $t1, 0x150
    ctx->pc = 0x10d774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 336));
    // 0x10d778: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10d778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10d77c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10d77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10d780: 0x24840150  addiu       $a0, $a0, 0x150
    ctx->pc = 0x10d780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
label_10d784:
    // 0x10d784: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x10d784u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10d788: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x10d788u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x10d78c: 0xdcaa0010  ld          $t2, 0x10($a1)
    ctx->pc = 0x10d78cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x10d790: 0xdcab0018  ld          $t3, 0x18($a1)
    ctx->pc = 0x10d790u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x10d794: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x10d794u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x10d798: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x10d798u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x10d79c: 0xfc8a0010  sd          $t2, 0x10($a0)
    ctx->pc = 0x10d79cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 10));
    // 0x10d7a0: 0xfc8b0018  sd          $t3, 0x18($a0)
    ctx->pc = 0x10d7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 11));
    // 0x10d7a4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x10d7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x10d7a8: 0x0  nop
    ctx->pc = 0x10d7a8u;
    // NOP
    // 0x10d7ac: 0x0  nop
    ctx->pc = 0x10d7acu;
    // NOP
    // 0x10d7b0: 0x14a8fff4  bne         $a1, $t0, . + 4 + (-0xC << 2)
    ctx->pc = 0x10D7B0u;
    {
        const bool branch_taken_0x10d7b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 8));
        ctx->pc = 0x10D7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D7B0u;
        // 0x10d7b4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d7b0) {
            ctx->pc = 0x10D784u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d784;
        }
    }
    ctx->pc = 0x10D7B8u;
    // 0x10d7b8: 0x8ce201b8  lw          $v0, 0x1B8($a3)
    ctx->pc = 0x10d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x10d7bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x10d7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x10d7c0: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x10d7c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10d7c4: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x10D7C4u;
    {
        const bool branch_taken_0x10d7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d7c4) {
            ctx->pc = 0x10D7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D7C4u;
            // 0x10d7c8: 0x8ce201bc  lw          $v0, 0x1BC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d770;
        }
    }
    ctx->pc = 0x10D7CCu;
label_10d7cc:
    // 0x10d7cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d7ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10d7d0:
    // 0x10d7d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10d7d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10d7d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10d7d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x10D7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D7D8u;
        // 0x10d7dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D7E0u;
}

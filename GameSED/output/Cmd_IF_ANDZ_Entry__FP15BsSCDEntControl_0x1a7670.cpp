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

// Function: Cmd_IF_ANDZ_Entry__FP15BsSCDEntControl
// Address: 0x1a7670 - 0x1a77b0
void Cmd_IF_ANDZ_Entry__FP15BsSCDEntControl_0x1a7670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_IF_ANDZ_Entry__FP15BsSCDEntControl_0x1a7670");
#endif

    switch (ctx->pc) {
        case 0x1a76b8u: goto label_1a76b8;
        case 0x1a76f4u: goto label_1a76f4;
        case 0x1a7728u: goto label_1a7728;
        case 0x1a7780u: goto label_1a7780;
        default: break;
    }

    ctx->pc = 0x1a7670u;

    // 0x1a7670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a7670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a7674: 0x3c027ffe  lui         $v0, 0x7FFE
    ctx->pc = 0x1a7674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32766 << 16));
    // 0x1a7678: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a7678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a767c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a767cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7680: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a7684: 0x2645001c  addiu       $a1, $s2, 0x1C
    ctx->pc = 0x1a7684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x1a7688: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a7688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a768c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a768cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a7690: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a7690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a7694: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a7694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a7698: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a7698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a769c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1a769cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a76a0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a76a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1a76a4: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1a76a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a76a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A76A8u;
    {
        const bool branch_taken_0x1a76a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A76ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A76A8u;
        // 0x1a76ac: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a76a8) {
            ctx->pc = 0x1A76C0u;
            goto label_1a76c0;
        }
    }
    ctx->pc = 0x1A76B0u;
    // 0x1a76b0: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A76B0u;
    SET_GPR_U32(ctx, 31, 0x1A76B8u);
    ctx->pc = 0x1A76B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A76B0u;
    // 0x1a76b4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A76B0u, 0x1A76B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A76B8u;
label_1a76b8:
    // 0x1a76b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A76B8u;
    {
        const bool branch_taken_0x1a76b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A76BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A76B8u;
        // 0x1a76bc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a76b8) {
            ctx->pc = 0x1A76C4u;
            goto label_1a76c4;
        }
    }
    ctx->pc = 0x1A76C0u;
label_1a76c0:
    // 0x1a76c0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1a76c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a76c4:
    // 0x1a76c4: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x1a76c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x1a76c8: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a76c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a76cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a76ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a76d0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a76d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a76d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a76d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a76d8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a76d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a76dc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a76dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a76e0: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a76e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a76e4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A76E4u;
    {
        const bool branch_taken_0x1a76e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A76E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A76E4u;
        // 0x1a76e8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a76e4) {
            ctx->pc = 0x1A76FCu;
            goto label_1a76fc;
        }
    }
    ctx->pc = 0x1A76ECu;
    // 0x1a76ec: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A76ECu;
    SET_GPR_U32(ctx, 31, 0x1A76F4u);
    ctx->pc = 0x1A76F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A76ECu;
    // 0x1a76f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A76ECu, 0x1A76F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A76F4u;
label_1a76f4:
    // 0x1a76f4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a76f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a76f8: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x1a76f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_1a76fc:
    // 0x1a76fc: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a76fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a7700: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a7700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a7704: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a7704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7708: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a7708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a770c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a770cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7710: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a7710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a7714: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a7714u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a7718: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7718u;
    {
        const bool branch_taken_0x1a7718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7718u;
        // 0x1a771c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7718) {
            ctx->pc = 0x1A7730u;
            goto label_1a7730;
        }
    }
    ctx->pc = 0x1A7720u;
    // 0x1a7720: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A7720u;
    SET_GPR_U32(ctx, 31, 0x1A7728u);
    ctx->pc = 0x1A7724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7720u;
    // 0x1a7724: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A7720u, 0x1A7728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7728u;
label_1a7728:
    // 0x1a7728: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A7728u;
    {
        const bool branch_taken_0x1a7728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7728u;
        // 0x1a772c: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7728) {
            ctx->pc = 0x1A7734u;
            goto label_1a7734;
        }
    }
    ctx->pc = 0x1A7730u;
label_1a7730:
    // 0x1a7730: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a7730u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a7734:
    // 0x1a7734: 0x2701024  and         $v0, $s3, $s0
    ctx->pc = 0x1a7734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
    // 0x1a7738: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A7738u;
    {
        const bool branch_taken_0x1a7738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7738u;
        // 0x1a773c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7738) {
            ctx->pc = 0x1A7798u;
            goto label_1a7798;
        }
    }
    ctx->pc = 0x1A7740u;
    // 0x1a7740: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a7740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a7744: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A7744u;
    {
        const bool branch_taken_0x1a7744 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a7744) {
            ctx->pc = 0x1A7748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7744u;
            // 0x1a7748: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7760u;
            goto label_1a7760;
        }
    }
    ctx->pc = 0x1A774Cu;
    // 0x1a774c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1a774cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1a7750: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a7750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a7754: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A7754u;
    {
        const bool branch_taken_0x1a7754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7754u;
        // 0x1a7758: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7754) {
            ctx->pc = 0x1A7798u;
            goto label_1a7798;
        }
    }
    ctx->pc = 0x1A775Cu;
    // 0x1a775c: 0x0  nop
    ctx->pc = 0x1a775cu;
    // NOP
label_1a7760:
    // 0x1a7760: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a7760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a7764: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a7764u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a7768: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7768u;
    {
        const bool branch_taken_0x1a7768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7768u;
        // 0x1a776c: 0x8e440028  lw          $a0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7768) {
            ctx->pc = 0x1A7780u;
            goto label_1a7780;
        }
    }
    ctx->pc = 0x1A7770u;
    // 0x1a7770: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a7770u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a7774: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1a7774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1a7778: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A7778u;
    SET_GPR_U32(ctx, 31, 0x1A7780u);
    ctx->pc = 0x1A777Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7778u;
    // 0x1a777c: 0x24a593c8  addiu       $a1, $a1, -0x6C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A7778u, 0x1A7780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7780u;
label_1a7780:
    // 0x1a7780: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1a7780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1a7784: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a7784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a7788: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1a7788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1a778c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1a778cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1a7790: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1a7790u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x1a7794: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7794u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a7798:
    // 0x1a7798: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a7798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a779c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a779cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a77a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a77a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a77a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a77a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a77a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A77A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A77ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A77A8u;
        // 0x1a77ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A77A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A77B0u;
}

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

// Function: TankLoadInfoSetData__9ApcObjRsciiP7WcModelP7WcImage
// Address: 0x102568 - 0x1026d8
void TankLoadInfoSetData__9ApcObjRsciiP7WcModelP7WcImage_0x102568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TankLoadInfoSetData__9ApcObjRsciiP7WcModelP7WcImage_0x102568");
#endif

    switch (ctx->pc) {
        case 0x1025c0u: goto label_1025c0;
        case 0x1025f0u: goto label_1025f0;
        default: break;
    }

    ctx->pc = 0x102568u;

    // 0x102568: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x102568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10256c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10256cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x102570: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x102570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102574: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x102574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x102578: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x102578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10257c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10257cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x102580: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x102580u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102584: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x102584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x102588: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x102588u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10258c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x10258cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x102590: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x102590u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102594: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x102594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x102598: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x102598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10259c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x10259cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1025a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1025A0u;
    {
        const bool branch_taken_0x1025a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1025A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1025A0u;
        // 0x1025a4: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1025a0) {
            ctx->pc = 0x1025C0u;
            goto label_1025c0;
        }
    }
    ctx->pc = 0x1025A8u;
    // 0x1025a8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1025a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1025ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1025acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1025b0: 0x24a51b58  addiu       $a1, $a1, 0x1B58
    ctx->pc = 0x1025b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7000));
    // 0x1025b4: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1025b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1025b8: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x1025B8u;
    SET_GPR_U32(ctx, 31, 0x1025C0u);
    ctx->pc = 0x1025BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1025B8u;
    // 0x1025bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1025B8u, 0x1025C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1025C0u;
label_1025c0:
    // 0x1025c0: 0x6430025  bgezl       $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x1025C0u;
    {
        const bool branch_taken_0x1025c0 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1025c0) {
            ctx->pc = 0x1025C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1025C0u;
            // 0x1025c4: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102658u;
            goto label_102658;
        }
    }
    ctx->pc = 0x1025C8u;
    // 0x1025c8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1025c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1025cc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1025ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1025d0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1025D0u;
    {
        const bool branch_taken_0x1025d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1025D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1025D0u;
        // 0x1025d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1025d0) {
            ctx->pc = 0x102618u;
            goto label_102618;
        }
    }
    ctx->pc = 0x1025D8u;
    // 0x1025d8: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1025d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1025dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1025dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1025e0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1025E0u;
    {
        const bool branch_taken_0x1025e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1025e0) {
            ctx->pc = 0x1025E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1025E0u;
            // 0x1025e4: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1025F0u;
            goto label_1025f0;
        }
    }
    ctx->pc = 0x1025E8u;
    // 0x1025e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1025E8u;
    {
        const bool branch_taken_0x1025e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1025ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1025E8u;
        // 0x1025ec: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1025e8) {
            ctx->pc = 0x102618u;
            goto label_102618;
        }
    }
    ctx->pc = 0x1025F0u;
label_1025f0:
    // 0x1025f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1025f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1025f4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1025f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1025f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1025F8u;
    {
        const bool branch_taken_0x1025f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1025FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1025F8u;
        // 0x1025fc: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1025f8) {
            ctx->pc = 0x102618u;
            goto label_102618;
        }
    }
    ctx->pc = 0x102600u;
    // 0x102600: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x102600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x102604: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x102608: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x102608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10260c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x10260Cu;
    {
        const bool branch_taken_0x10260c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10260c) {
            ctx->pc = 0x102610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10260Cu;
            // 0x102610: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1025F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1025f0;
        }
    }
    ctx->pc = 0x102614u;
    // 0x102614: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x102614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_102618:
    // 0x102618: 0x56200023  bnel        $s1, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x102618u;
    {
        const bool branch_taken_0x102618 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x102618) {
            ctx->pc = 0x10261Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102618u;
            // 0x10261c: 0xae30000c  sw          $s0, 0xC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1026A8u;
            goto label_1026a8;
        }
    }
    ctx->pc = 0x102620u;
    // 0x102620: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x102620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102624: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x102624u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102628: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x102628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10262c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10262cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102630: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x102630u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x102634: 0x24a51b58  addiu       $a1, $a1, 0x1B58
    ctx->pc = 0x102634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7000));
    // 0x102638: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x102638u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10263c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x10263cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x102640: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x102640u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102644: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x102644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102648: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x102648u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10264c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10264cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102650: 0x80415ec  j           func_1057B0
    ctx->pc = 0x102650u;
    ctx->pc = 0x102654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102650u;
    // 0x102654: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    ApSCDEntError__FiPciP5BcObj_0x1057b0(rdram, ctx, runtime); return;
    ctx->pc = 0x102658u;
label_102658:
    // 0x102658: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x102658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x10265c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x10265cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x102660: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x102660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x102664: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x102664u;
    {
        const bool branch_taken_0x102664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x102664) {
            ctx->pc = 0x102668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102664u;
            // 0x102668: 0xae30000c  sw          $s0, 0xC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1026A8u;
            goto label_1026a8;
        }
    }
    ctx->pc = 0x10266Cu;
    // 0x10266c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10266cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102670: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x102670u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102674: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x102674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x102678: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10267c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10267cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x102680: 0x24a51b58  addiu       $a1, $a1, 0x1B58
    ctx->pc = 0x102680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7000));
    // 0x102684: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x102684u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x102688: 0x24060049  addiu       $a2, $zero, 0x49
    ctx->pc = 0x102688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x10268c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10268cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102690: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x102690u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102694: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x102694u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x102698: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x102698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10269c: 0x80415ec  j           func_1057B0
    ctx->pc = 0x10269Cu;
    ctx->pc = 0x1026A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10269Cu;
    // 0x1026a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    ApSCDEntError__FiPciP5BcObj_0x1057b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1026A4u;
    // 0x1026a4: 0x0  nop
    ctx->pc = 0x1026a4u;
    // NOP
label_1026a8:
    // 0x1026a8: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x1026a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x1026ac: 0xae340004  sw          $s4, 0x4($s1)
    ctx->pc = 0x1026acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 20));
    // 0x1026b0: 0xae350008  sw          $s5, 0x8($s1)
    ctx->pc = 0x1026b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 21));
    // 0x1026b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1026b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1026b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1026b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1026bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1026bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1026c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1026c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1026c4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1026c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1026c8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1026c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1026cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1026ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1026d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1026D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1026D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1026D0u;
        // 0x1026d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1026D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1026D8u;
}

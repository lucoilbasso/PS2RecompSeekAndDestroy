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

// Function: sceRename
// Address: 0x1b47f0 - 0x1b49e0
void sceRename_0x1b47f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceRename_0x1b47f0");
#endif

    switch (ctx->pc) {
        case 0x1b482cu: goto label_1b482c;
        case 0x1b4844u: goto label_1b4844;
        case 0x1b4868u: goto label_1b4868;
        case 0x1b48c8u: goto label_1b48c8;
        case 0x1b4914u: goto label_1b4914;
        case 0x1b4938u: goto label_1b4938;
        case 0x1b4960u: goto label_1b4960;
        case 0x1b4970u: goto label_1b4970;
        case 0x1b4978u: goto label_1b4978;
        case 0x1b498cu: goto label_1b498c;
        case 0x1b499cu: goto label_1b499c;
        case 0x1b49acu: goto label_1b49ac;
        case 0x1b49b4u: goto label_1b49b4;
        default: break;
    }

    ctx->pc = 0x1b47f0u;

    // 0x1b47f0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1b47f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1b47f4: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1b47f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1b47f8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1b47f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1b47fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b47fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4800: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1b4800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1b4804: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b4804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4808: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1b4808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1b480c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1b480cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1b4810: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1b4810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1b4814: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x1b4814u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x1b4818: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1b4818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1b481c: 0x26d29a80  addiu       $s2, $s6, -0x6580
    ctx->pc = 0x1b481cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941312));
    // 0x1b4820: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1b4820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1b4824: 0xc06c92c  jal         func_1B24B0
    ctx->pc = 0x1B4824u;
    SET_GPR_U32(ctx, 31, 0x1B482Cu);
    ctx->pc = 0x1B4828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4824u;
    // 0x1b4828: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24B0u, 0x1B4824u, 0x1B482Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B482Cu;
label_1b482c:
    // 0x1b482c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b482cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1b4830: 0x8c43aa04  lw          $v1, -0x55FC($v0)
    ctx->pc = 0x1b4830u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24AA04u));
    // 0x1b4834: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4834u;
    {
        const bool branch_taken_0x1b4834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4834) {
            ctx->pc = 0x1B4838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4834u;
            // 0x1b4838: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4848u;
            goto label_1b4848;
        }
    }
    ctx->pc = 0x1B483Cu;
    // 0x1b483c: 0xc06c96e  jal         func_1B25B8
    ctx->pc = 0x1B483Cu;
    SET_GPR_U32(ctx, 31, 0x1B4844u);
    ctx->pc = 0x1B25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B25B8u, 0x1B483Cu, 0x1B4844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4844u;
label_1b4844:
    // 0x1b4844: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1b4844u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1b4848:
    // 0x1b4848: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b484c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1b484cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1b4850: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B4850u;
    {
        const bool branch_taken_0x1b4850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4850u;
        // 0x1b4854: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4850) {
            ctx->pc = 0x1B4894u;
            goto label_1b4894;
        }
    }
    ctx->pc = 0x1B4858u;
    // 0x1b4858: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1b4858u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b485c: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b485cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1b4860: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1b4860u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x1b4864: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b4864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1b4868:
    // 0x1b4868: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1b4868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1b486c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B486Cu;
    {
        const bool branch_taken_0x1b486c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B486Cu;
        // 0x1b4870: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b486c) {
            ctx->pc = 0x1B48A0u;
            goto label_1b48a0;
        }
    }
    ctx->pc = 0x1B4874u;
    // 0x1b4874: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x1b4874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1b4878: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b4878u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b487c: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1b487cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b4880: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1b4880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1b4884: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B4884u;
    {
        const bool branch_taken_0x1b4884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4884) {
            ctx->pc = 0x1B4888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4884u;
            // 0x1b4888: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4868;
        }
    }
    ctx->pc = 0x1B488Cu;
    // 0x1b488c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B488Cu;
    {
        const bool branch_taken_0x1b488c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B488Cu;
        // 0x1b4890: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b488c) {
            ctx->pc = 0x1B48A4u;
            goto label_1b48a4;
        }
    }
    ctx->pc = 0x1B4894u;
label_1b4894:
    // 0x1b4894: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1b4894u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b4898: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b4898u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1b489c: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1b489cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
label_1b48a0:
    // 0x1b48a0: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1b48a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1b48a4:
    // 0x1b48a4: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B48A4u;
    {
        const bool branch_taken_0x1b48a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b48a4) {
            ctx->pc = 0x1B48A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B48A4u;
            // 0x1b48a8: 0xa240040b  sb          $zero, 0x40B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B48ACu;
            goto label_1b48ac;
        }
    }
    ctx->pc = 0x1B48ACu;
label_1b48ac:
    // 0x1b48ac: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1b48acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b48b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b48b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b48b4: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1b48b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1b48b8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1B48B8u;
    {
        const bool branch_taken_0x1b48b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B48BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B48B8u;
        // 0x1b48bc: 0xa242040c  sb          $v0, 0x40C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b48b8) {
            ctx->pc = 0x1B48ECu;
            goto label_1b48ec;
        }
    }
    ctx->pc = 0x1B48C0u;
    // 0x1b48c0: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x1b48c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
    // 0x1b48c4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b48c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1b48c8:
    // 0x1b48c8: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1b48c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1b48cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B48CCu;
    {
        const bool branch_taken_0x1b48cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B48D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B48CCu;
        // 0x1b48d0: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b48cc) {
            ctx->pc = 0x1B48ECu;
            goto label_1b48ec;
        }
    }
    ctx->pc = 0x1B48D4u;
    // 0x1b48d4: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1b48d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1b48d8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b48d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b48dc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1b48dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b48e0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1b48e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1b48e4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B48E4u;
    {
        const bool branch_taken_0x1b48e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b48e4) {
            ctx->pc = 0x1B48E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B48E4u;
            // 0x1b48e8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B48C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b48c8;
        }
    }
    ctx->pc = 0x1B48ECu;
label_1b48ec:
    // 0x1b48ec: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1b48ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1b48f0: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B48F0u;
    {
        const bool branch_taken_0x1b48f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b48f0) {
            ctx->pc = 0x1B48F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B48F0u;
            // 0x1b48f4: 0xa240080b  sb          $zero, 0x80B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 2059), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B48F8u;
            goto label_1b48f8;
        }
    }
    ctx->pc = 0x1B48F8u;
label_1b48f8:
    // 0x1b48f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b48f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b48fc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b48fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b4900: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1b4900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1b4904: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b4904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b4908: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1b4908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1b490c: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B490Cu;
    SET_GPR_U32(ctx, 31, 0x1B4914u);
    ctx->pc = 0x1B4910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B490Cu;
    // 0x1b4910: 0x26d09a80  addiu       $s0, $s6, -0x6580 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B490Cu, 0x1B4914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4914u;
label_1b4914:
    // 0x1b4914: 0x2694a6c0  addiu       $s4, $s4, -0x5940
    ctx->pc = 0x1b4914u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294944448));
    // 0x1b4918: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b4918u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b491c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b491cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4920: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b4920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b4924: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1b4924u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1b4928: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1b4928u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1b492c: 0x2405080c  addiu       $a1, $zero, 0x80C
    ctx->pc = 0x1b492cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x1b4930: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1B4930u;
    SET_GPR_U32(ctx, 31, 0x1B4938u);
    ctx->pc = 0x1B4934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4930u;
    // 0x1b4934: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1B4930u, 0x1B4938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4938u;
label_1b4938:
    // 0x1b4938: 0x26a4b180  addiu       $a0, $s5, -0x4E80
    ctx->pc = 0x1b4938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947200));
    // 0x1b493c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b493cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4940: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b4940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b4944: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1b4944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1b4948: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b4948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b494c: 0x2408080c  addiu       $t0, $zero, 0x80C
    ctx->pc = 0x1b494cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x1b4950: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1b4950u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4954: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b4954u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b4958: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B4958u;
    SET_GPR_U32(ctx, 31, 0x1B4960u);
    ctx->pc = 0x1B495Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4958u;
    // 0x1b495c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B4958u, 0x1B4960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4960u;
label_1b4960:
    // 0x1b4960: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4960u;
    {
        const bool branch_taken_0x1b4960 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B4964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4960u;
        // 0x1b4964: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4960) {
            ctx->pc = 0x1B4980u;
            goto label_1b4980;
        }
    }
    ctx->pc = 0x1B4968u;
    // 0x1b4968: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B4968u;
    SET_GPR_U32(ctx, 31, 0x1B4970u);
    ctx->pc = 0x1B496Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4968u;
    // 0x1b496c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B4968u, 0x1B4970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4970u;
label_1b4970:
    // 0x1b4970: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4970u;
    SET_GPR_U32(ctx, 31, 0x1B4978u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4970u, 0x1B4978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4978u;
label_1b4978:
    // 0x1b4978: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B4978u;
    {
        const bool branch_taken_0x1b4978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4978u;
        // 0x1b497c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4978) {
            ctx->pc = 0x1B49B8u;
            goto label_1b49b8;
        }
    }
    ctx->pc = 0x1B4980u;
label_1b4980:
    // 0x1b4980: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1b4980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1b4984: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4984u;
    SET_GPR_U32(ctx, 31, 0x1B498Cu);
    ctx->pc = 0x1B4988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4984u;
    // 0x1b4988: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4984u, 0x1B498Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B498Cu;
label_1b498c:
    // 0x1b498c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B498Cu;
    {
        const bool branch_taken_0x1b498c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b498c) {
            ctx->pc = 0x1B49A4u;
            goto label_1b49a4;
        }
    }
    ctx->pc = 0x1B4994u;
    // 0x1b4994: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B4994u;
    SET_GPR_U32(ctx, 31, 0x1B499Cu);
    ctx->pc = 0x1B4998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4994u;
    // 0x1b4998: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B4994u, 0x1B499Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B499Cu;
label_1b499c:
    // 0x1b499c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B499Cu;
    {
        const bool branch_taken_0x1b499c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B49A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B499Cu;
        // 0x1b49a0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b499c) {
            ctx->pc = 0x1B49B8u;
            goto label_1b49b8;
        }
    }
    ctx->pc = 0x1B49A4u;
label_1b49a4:
    // 0x1b49a4: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B49A4u;
    SET_GPR_U32(ctx, 31, 0x1B49ACu);
    ctx->pc = 0x1B49A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B49A4u;
    // 0x1b49a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B49A4u, 0x1B49ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B49ACu;
label_1b49ac:
    // 0x1b49ac: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B49ACu;
    SET_GPR_U32(ctx, 31, 0x1B49B4u);
    ctx->pc = 0x1B49B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B49ACu;
    // 0x1b49b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B49ACu, 0x1B49B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B49B4u;
label_1b49b4:
    // 0x1b49b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b49b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b49b8:
    // 0x1b49b8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1b49b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b49bc: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1b49bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b49c0: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1b49c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b49c4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1b49c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b49c8: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1b49c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b49cc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1b49ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b49d0: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1b49d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b49d4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1b49d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b49d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B49D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B49DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B49D8u;
        // 0x1b49dc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B49D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B49E0u;
}

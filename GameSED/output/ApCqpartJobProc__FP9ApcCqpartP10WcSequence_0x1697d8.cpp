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

// Function: ApCqpartJobProc__FP9ApcCqpartP10WcSequence
// Address: 0x1697d8 - 0x169990
void ApCqpartJobProc__FP9ApcCqpartP10WcSequence_0x1697d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCqpartJobProc__FP9ApcCqpartP10WcSequence_0x1697d8");
#endif

    switch (ctx->pc) {
        case 0x1697d8u: goto label_1697d8;
        case 0x1697dcu: goto label_1697dc;
        case 0x1697e0u: goto label_1697e0;
        case 0x1697e4u: goto label_1697e4;
        case 0x1697e8u: goto label_1697e8;
        case 0x1697ecu: goto label_1697ec;
        case 0x1697f0u: goto label_1697f0;
        case 0x1697f4u: goto label_1697f4;
        case 0x1697f8u: goto label_1697f8;
        case 0x1697fcu: goto label_1697fc;
        case 0x169800u: goto label_169800;
        case 0x169804u: goto label_169804;
        case 0x169808u: goto label_169808;
        case 0x16980cu: goto label_16980c;
        case 0x169810u: goto label_169810;
        case 0x169814u: goto label_169814;
        case 0x169818u: goto label_169818;
        case 0x16981cu: goto label_16981c;
        case 0x169820u: goto label_169820;
        case 0x169824u: goto label_169824;
        case 0x169828u: goto label_169828;
        case 0x16982cu: goto label_16982c;
        case 0x169830u: goto label_169830;
        case 0x169834u: goto label_169834;
        case 0x169838u: goto label_169838;
        case 0x16983cu: goto label_16983c;
        case 0x169840u: goto label_169840;
        case 0x169844u: goto label_169844;
        case 0x169848u: goto label_169848;
        case 0x16984cu: goto label_16984c;
        case 0x169850u: goto label_169850;
        case 0x169854u: goto label_169854;
        case 0x169858u: goto label_169858;
        case 0x16985cu: goto label_16985c;
        case 0x169860u: goto label_169860;
        case 0x169864u: goto label_169864;
        case 0x169868u: goto label_169868;
        case 0x16986cu: goto label_16986c;
        case 0x169870u: goto label_169870;
        case 0x169874u: goto label_169874;
        case 0x169878u: goto label_169878;
        case 0x16987cu: goto label_16987c;
        case 0x169880u: goto label_169880;
        case 0x169884u: goto label_169884;
        case 0x169888u: goto label_169888;
        case 0x16988cu: goto label_16988c;
        case 0x169890u: goto label_169890;
        case 0x169894u: goto label_169894;
        case 0x169898u: goto label_169898;
        case 0x16989cu: goto label_16989c;
        case 0x1698a0u: goto label_1698a0;
        case 0x1698a4u: goto label_1698a4;
        case 0x1698a8u: goto label_1698a8;
        case 0x1698acu: goto label_1698ac;
        case 0x1698b0u: goto label_1698b0;
        case 0x1698b4u: goto label_1698b4;
        case 0x1698b8u: goto label_1698b8;
        case 0x1698bcu: goto label_1698bc;
        case 0x1698c0u: goto label_1698c0;
        case 0x1698c4u: goto label_1698c4;
        case 0x1698c8u: goto label_1698c8;
        case 0x1698ccu: goto label_1698cc;
        case 0x1698d0u: goto label_1698d0;
        case 0x1698d4u: goto label_1698d4;
        case 0x1698d8u: goto label_1698d8;
        case 0x1698dcu: goto label_1698dc;
        case 0x1698e0u: goto label_1698e0;
        case 0x1698e4u: goto label_1698e4;
        case 0x1698e8u: goto label_1698e8;
        case 0x1698ecu: goto label_1698ec;
        case 0x1698f0u: goto label_1698f0;
        case 0x1698f4u: goto label_1698f4;
        case 0x1698f8u: goto label_1698f8;
        case 0x1698fcu: goto label_1698fc;
        case 0x169900u: goto label_169900;
        case 0x169904u: goto label_169904;
        case 0x169908u: goto label_169908;
        case 0x16990cu: goto label_16990c;
        case 0x169910u: goto label_169910;
        case 0x169914u: goto label_169914;
        case 0x169918u: goto label_169918;
        case 0x16991cu: goto label_16991c;
        case 0x169920u: goto label_169920;
        case 0x169924u: goto label_169924;
        case 0x169928u: goto label_169928;
        case 0x16992cu: goto label_16992c;
        case 0x169930u: goto label_169930;
        case 0x169934u: goto label_169934;
        case 0x169938u: goto label_169938;
        case 0x16993cu: goto label_16993c;
        case 0x169940u: goto label_169940;
        case 0x169944u: goto label_169944;
        case 0x169948u: goto label_169948;
        case 0x16994cu: goto label_16994c;
        case 0x169950u: goto label_169950;
        case 0x169954u: goto label_169954;
        case 0x169958u: goto label_169958;
        case 0x16995cu: goto label_16995c;
        case 0x169960u: goto label_169960;
        case 0x169964u: goto label_169964;
        case 0x169968u: goto label_169968;
        case 0x16996cu: goto label_16996c;
        case 0x169970u: goto label_169970;
        case 0x169974u: goto label_169974;
        case 0x169978u: goto label_169978;
        case 0x16997cu: goto label_16997c;
        case 0x169980u: goto label_169980;
        case 0x169984u: goto label_169984;
        case 0x169988u: goto label_169988;
        case 0x16998cu: goto label_16998c;
        default: break;
    }

    ctx->pc = 0x1697d8u;

label_1697d8:
    // 0x1697d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1697d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1697dc:
    // 0x1697dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1697dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1697e0:
    // 0x1697e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1697e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1697e4:
    // 0x1697e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1697e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1697e8:
    // 0x1697e8: 0x260310fc  addiu       $v1, $s0, 0x10FC
    ctx->pc = 0x1697e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4348));
label_1697ec:
    // 0x1697ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1697ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1697f0:
    // 0x1697f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1697f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1697f4:
    // 0x1697f4: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
label_1697f8:
    if (ctx->pc == 0x1697F8u) {
        ctx->pc = 0x1697F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697F4u;
        // 0x1697f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1697FCu;
        goto label_1697fc;
    }
    ctx->pc = 0x1697F4u;
    {
        const bool branch_taken_0x1697f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1697F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697F4u;
        // 0x1697f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1697f4) {
            ctx->pc = 0x169824u;
            goto label_169824;
        }
    }
    ctx->pc = 0x1697FCu;
label_1697fc:
    // 0x1697fc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1697fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_169800:
    // 0x169800: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_169804:
    if (ctx->pc == 0x169804u) {
        ctx->pc = 0x169804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169800u;
        // 0x169804: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169808u;
        goto label_169808;
    }
    ctx->pc = 0x169800u;
    {
        const bool branch_taken_0x169800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169800) {
            ctx->pc = 0x169804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169800u;
            // 0x169804: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169818u;
            goto label_169818;
        }
    }
    ctx->pc = 0x169808u;
label_169808:
    // 0x169808: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x169808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_16980c:
    // 0x16980c: 0x10000004  b           . + 4 + (0x4 << 2)
label_169810:
    if (ctx->pc == 0x169810u) {
        ctx->pc = 0x169810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16980Cu;
        // 0x169810: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169814u;
        goto label_169814;
    }
    ctx->pc = 0x16980Cu;
    {
        const bool branch_taken_0x16980c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16980Cu;
        // 0x169810: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16980c) {
            ctx->pc = 0x169820u;
            goto label_169820;
        }
    }
    ctx->pc = 0x169814u;
label_169814:
    // 0x169814: 0x0  nop
    ctx->pc = 0x169814u;
    // NOP
label_169818:
    // 0x169818: 0x10000002  b           . + 4 + (0x2 << 2)
label_16981c:
    if (ctx->pc == 0x16981Cu) {
        ctx->pc = 0x16981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169818u;
        // 0x16981c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169820u;
        goto label_169820;
    }
    ctx->pc = 0x169818u;
    {
        const bool branch_taken_0x169818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169818u;
        // 0x16981c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169818) {
            ctx->pc = 0x169824u;
            goto label_169824;
        }
    }
    ctx->pc = 0x169820u;
label_169820:
    // 0x169820: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x169820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169824:
    // 0x169824: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_169828:
    if (ctx->pc == 0x169828u) {
        ctx->pc = 0x169828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169824u;
        // 0x169828: 0x2605111c  addiu       $a1, $s0, 0x111C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4380));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16982Cu;
        goto label_16982c;
    }
    ctx->pc = 0x169824u;
    {
        const bool branch_taken_0x169824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169824u;
        // 0x169828: 0x2605111c  addiu       $a1, $s0, 0x111C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4380));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169824) {
            ctx->pc = 0x1698DCu;
            goto label_1698dc;
        }
    }
    ctx->pc = 0x16982Cu;
label_16982c:
    // 0x16982c: 0x8e021100  lw          $v0, 0x1100($s0)
    ctx->pc = 0x16982cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4352)));
label_169830:
    // 0x169830: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_169834:
    if (ctx->pc == 0x169834u) {
        ctx->pc = 0x169834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169830u;
        // 0x169834: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169838u;
        goto label_169838;
    }
    ctx->pc = 0x169830u;
    {
        const bool branch_taken_0x169830 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x169834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169830u;
        // 0x169834: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169830) {
            ctx->pc = 0x169848u;
            goto label_169848;
        }
    }
    ctx->pc = 0x169838u;
label_169838:
    // 0x169838: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x169838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16983c:
    // 0x16983c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x16983cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_169840:
    // 0x169840: 0x10000002  b           . + 4 + (0x2 << 2)
label_169844:
    if (ctx->pc == 0x169844u) {
        ctx->pc = 0x169844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169840u;
        // 0x169844: 0x8c421108  lw          $v0, 0x1108($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4360)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169848u;
        goto label_169848;
    }
    ctx->pc = 0x169840u;
    {
        const bool branch_taken_0x169840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169840u;
        // 0x169844: 0x8c421108  lw          $v0, 0x1108($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169840) {
            ctx->pc = 0x16984Cu;
            goto label_16984c;
        }
    }
    ctx->pc = 0x169848u;
label_169848:
    // 0x169848: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x169848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16984c:
    // 0x16984c: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
label_169850:
    if (ctx->pc == 0x169850u) {
        ctx->pc = 0x169850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16984Cu;
        // 0x169850: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169854u;
        goto label_169854;
    }
    ctx->pc = 0x16984Cu;
    {
        const bool branch_taken_0x16984c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x169850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16984Cu;
        // 0x169850: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16984c) {
            ctx->pc = 0x16987Cu;
            goto label_16987c;
        }
    }
    ctx->pc = 0x169854u;
label_169854:
    // 0x169854: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x169854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_169858:
    // 0x169858: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16985c:
    // 0x16985c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16985cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_169860:
    // 0x169860: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x169860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_169864:
    // 0x169864: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x169864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_169868:
    // 0x169868: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x169868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_16986c:
    // 0x16986c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16986cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_169870:
    // 0x169870: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x169870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_169874:
    // 0x169874: 0x60f809  jalr        $v1
label_169878:
    if (ctx->pc == 0x169878u) {
        ctx->pc = 0x169878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169874u;
        // 0x169878: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16987Cu;
        goto label_16987c;
    }
    ctx->pc = 0x169874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16987Cu);
        ctx->pc = 0x169878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169874u;
        // 0x169878: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169874u, 0x16987Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16987Cu;
label_16987c:
    // 0x16987c: 0x262410fc  addiu       $a0, $s1, 0x10FC
    ctx->pc = 0x16987cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4348));
label_169880:
    // 0x169880: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x169880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_169884:
    // 0x169884: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_169888:
    // 0x169888: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x169888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_16988c:
    // 0x16988c: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x16988cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_169890:
    // 0x169890: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_169894:
    if (ctx->pc == 0x169894u) {
        ctx->pc = 0x169894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169890u;
        // 0x169894: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169898u;
        goto label_169898;
    }
    ctx->pc = 0x169890u;
    {
        const bool branch_taken_0x169890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x169894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169890u;
        // 0x169894: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169890) {
            ctx->pc = 0x16989Cu;
            goto label_16989c;
        }
    }
    ctx->pc = 0x169898u;
label_169898:
    // 0x169898: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x169898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_16989c:
    // 0x16989c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x16989cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1698a0:
    // 0x1698a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1698a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1698a4:
    // 0x1698a4: 0x8e2401b4  lw          $a0, 0x1B4($s1)
    ctx->pc = 0x1698a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_1698a8:
    // 0x1698a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1698a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1698ac:
    // 0x1698ac: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1698acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1698b0:
    // 0x1698b0: 0x8c421108  lw          $v0, 0x1108($v0)
    ctx->pc = 0x1698b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4360)));
label_1698b4:
    // 0x1698b4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1698b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1698b8:
    // 0x1698b8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1698b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1698bc:
    // 0x1698bc: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1698bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1698c0:
    // 0x1698c0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1698c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1698c4:
    // 0x1698c4: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1698c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_1698c8:
    // 0x1698c8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1698c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1698cc:
    // 0x1698cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1698ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1698d0:
    // 0x1698d0: 0x60f809  jalr        $v1
label_1698d4:
    if (ctx->pc == 0x1698D4u) {
        ctx->pc = 0x1698D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1698D0u;
        // 0x1698d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1698D8u;
        goto label_1698d8;
    }
    ctx->pc = 0x1698D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1698D8u);
        ctx->pc = 0x1698D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1698D0u;
        // 0x1698d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1698D0u, 0x1698D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1698D8u;
label_1698d8:
    // 0x1698d8: 0x2605111c  addiu       $a1, $s0, 0x111C
    ctx->pc = 0x1698d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4380));
label_1698dc:
    // 0x1698dc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1698dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1698e0:
    // 0x1698e0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1698e4:
    if (ctx->pc == 0x1698E4u) {
        ctx->pc = 0x1698E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1698E0u;
        // 0x1698e4: 0x92030c00  lbu         $v1, 0xC00($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1698E8u;
        goto label_1698e8;
    }
    ctx->pc = 0x1698E0u;
    {
        const bool branch_taken_0x1698e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1698e0) {
            ctx->pc = 0x1698E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1698E0u;
            // 0x1698e4: 0x92030c00  lbu         $v1, 0xC00($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1698F8u;
            goto label_1698f8;
        }
    }
    ctx->pc = 0x1698E8u;
label_1698e8:
    // 0x1698e8: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x1698e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1698ec:
    // 0x1698ec: 0x40f809  jalr        $v0
label_1698f0:
    if (ctx->pc == 0x1698F0u) {
        ctx->pc = 0x1698F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1698ECu;
        // 0x1698f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1698F4u;
        goto label_1698f4;
    }
    ctx->pc = 0x1698ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1698F4u);
        ctx->pc = 0x1698F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1698ECu;
        // 0x1698f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1698ECu, 0x1698F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1698F4u;
label_1698f4:
    // 0x1698f4: 0x92030c00  lbu         $v1, 0xC00($s0)
    ctx->pc = 0x1698f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3072)));
label_1698f8:
    // 0x1698f8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1698f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1698fc:
    // 0x1698fc: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_169900:
    if (ctx->pc == 0x169900u) {
        ctx->pc = 0x169900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1698FCu;
        // 0x169900: 0x92020c00  lbu         $v0, 0xC00($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169904u;
        goto label_169904;
    }
    ctx->pc = 0x1698FCu;
    {
        const bool branch_taken_0x1698fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1698fc) {
            ctx->pc = 0x169900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1698FCu;
            // 0x169900: 0x92020c00  lbu         $v0, 0xC00($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169910u;
            goto label_169910;
        }
    }
    ctx->pc = 0x169904u;
label_169904:
    // 0x169904: 0xc0594ca  jal         func_165328
label_169908:
    if (ctx->pc == 0x169908u) {
        ctx->pc = 0x169908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169904u;
        // 0x169908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16990Cu;
        goto label_16990c;
    }
    ctx->pc = 0x169904u;
    SET_GPR_U32(ctx, 31, 0x16990Cu);
    ctx->pc = 0x169908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169904u;
    // 0x169908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165328u, 0x169904u, 0x16990Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16990Cu;
label_16990c:
    // 0x16990c: 0x92020c00  lbu         $v0, 0xC00($s0)
    ctx->pc = 0x16990cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3072)));
label_169910:
    // 0x169910: 0x2442ffcb  addiu       $v0, $v0, -0x35
    ctx->pc = 0x169910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967243));
label_169914:
    // 0x169914: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x169914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_169918:
    // 0x169918: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_16991c:
    if (ctx->pc == 0x16991Cu) {
        ctx->pc = 0x16991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169918u;
        // 0x16991c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169920u;
        goto label_169920;
    }
    ctx->pc = 0x169918u;
    {
        const bool branch_taken_0x169918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169918) {
            ctx->pc = 0x16991Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169918u;
            // 0x16991c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169980u;
            goto label_169980;
        }
    }
    ctx->pc = 0x169920u;
label_169920:
    // 0x169920: 0x8e021264  lw          $v0, 0x1264($s0)
    ctx->pc = 0x169920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4708)));
label_169924:
    // 0x169924: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_169928:
    if (ctx->pc == 0x169928u) {
        ctx->pc = 0x169928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169924u;
        // 0x169928: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16992Cu;
        goto label_16992c;
    }
    ctx->pc = 0x169924u;
    {
        const bool branch_taken_0x169924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169924) {
            ctx->pc = 0x169928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169924u;
            // 0x169928: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169980u;
            goto label_169980;
        }
    }
    ctx->pc = 0x16992Cu;
label_16992c:
    // 0x16992c: 0x8c420180  lw          $v0, 0x180($v0)
    ctx->pc = 0x16992cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
label_169930:
    // 0x169930: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x169930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_169934:
    // 0x169934: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_169938:
    if (ctx->pc == 0x169938u) {
        ctx->pc = 0x169938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169934u;
        // 0x169938: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16993Cu;
        goto label_16993c;
    }
    ctx->pc = 0x169934u;
    {
        const bool branch_taken_0x169934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169934) {
            ctx->pc = 0x169938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169934u;
            // 0x169938: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169980u;
            goto label_169980;
        }
    }
    ctx->pc = 0x16993Cu;
label_16993c:
    // 0x16993c: 0x8e031234  lw          $v1, 0x1234($s0)
    ctx->pc = 0x16993cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4660)));
label_169940:
    // 0x169940: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_169944:
    if (ctx->pc == 0x169944u) {
        ctx->pc = 0x169944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169940u;
        // 0x169944: 0xae001268  sw          $zero, 0x1268($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4712), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169948u;
        goto label_169948;
    }
    ctx->pc = 0x169940u;
    {
        const bool branch_taken_0x169940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x169944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169940u;
        // 0x169944: 0xae001268  sw          $zero, 0x1268($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4712), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169940) {
            ctx->pc = 0x169958u;
            goto label_169958;
        }
    }
    ctx->pc = 0x169948u;
label_169948:
    // 0x169948: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x169948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_16994c:
    // 0x16994c: 0xae001234  sw          $zero, 0x1234($s0)
    ctx->pc = 0x16994cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4660), GPR_U32(ctx, 0));
label_169950:
    // 0x169950: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x169950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_169954:
    // 0x169954: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x169954u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_169958:
    // 0x169958: 0x8e041258  lw          $a0, 0x1258($s0)
    ctx->pc = 0x169958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4696)));
label_16995c:
    // 0x16995c: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_169960:
    if (ctx->pc == 0x169960u) {
        ctx->pc = 0x169960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16995Cu;
        // 0x169960: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169964u;
        goto label_169964;
    }
    ctx->pc = 0x16995Cu;
    {
        const bool branch_taken_0x16995c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16995c) {
            ctx->pc = 0x169960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16995Cu;
            // 0x169960: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169980u;
            goto label_169980;
        }
    }
    ctx->pc = 0x169964u;
label_169964:
    // 0x169964: 0xc04c6c6  jal         func_131B18
label_169968:
    if (ctx->pc == 0x169968u) {
        ctx->pc = 0x16996Cu;
        goto label_16996c;
    }
    ctx->pc = 0x169964u;
    SET_GPR_U32(ctx, 31, 0x16996Cu);
    ctx->pc = 0x131B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B18u, 0x169964u, 0x16996Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16996Cu;
label_16996c:
    // 0x16996c: 0x8e031258  lw          $v1, 0x1258($s0)
    ctx->pc = 0x16996cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4696)));
label_169970:
    // 0x169970: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x169970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_169974:
    // 0x169974: 0xae001258  sw          $zero, 0x1258($s0)
    ctx->pc = 0x169974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4696), GPR_U32(ctx, 0));
label_169978:
    // 0x169978: 0xac620134  sw          $v0, 0x134($v1)
    ctx->pc = 0x169978u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 2));
label_16997c:
    // 0x16997c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16997cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_169980:
    // 0x169980: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x169980u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_169984:
    // 0x169984: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x169984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_169988:
    // 0x169988: 0x3e00008  jr          $ra
label_16998c:
    if (ctx->pc == 0x16998Cu) {
        ctx->pc = 0x16998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169988u;
        // 0x16998c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169990u;
        goto label_fallthrough_0x169988;
    }
    ctx->pc = 0x169988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169988u;
        // 0x16998c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x169988:
    ctx->pc = 0x169990u;
}

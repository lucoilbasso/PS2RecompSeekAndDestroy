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

// Function: SPartsPost2Tank__FP9ApcCqtankP11WStrobjCtrli
// Address: 0x16a400 - 0x16a554
void SPartsPost2Tank__FP9ApcCqtankP11WStrobjCtrli_0x16a400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SPartsPost2Tank__FP9ApcCqtankP11WStrobjCtrli_0x16a400");
#endif

    switch (ctx->pc) {
        case 0x16a400u: goto label_16a400;
        case 0x16a404u: goto label_16a404;
        case 0x16a408u: goto label_16a408;
        case 0x16a40cu: goto label_16a40c;
        case 0x16a410u: goto label_16a410;
        case 0x16a414u: goto label_16a414;
        case 0x16a418u: goto label_16a418;
        case 0x16a41cu: goto label_16a41c;
        case 0x16a420u: goto label_16a420;
        case 0x16a424u: goto label_16a424;
        case 0x16a428u: goto label_16a428;
        case 0x16a42cu: goto label_16a42c;
        case 0x16a430u: goto label_16a430;
        case 0x16a434u: goto label_16a434;
        case 0x16a438u: goto label_16a438;
        case 0x16a43cu: goto label_16a43c;
        case 0x16a440u: goto label_16a440;
        case 0x16a444u: goto label_16a444;
        case 0x16a448u: goto label_16a448;
        case 0x16a44cu: goto label_16a44c;
        case 0x16a450u: goto label_16a450;
        case 0x16a454u: goto label_16a454;
        case 0x16a458u: goto label_16a458;
        case 0x16a45cu: goto label_16a45c;
        case 0x16a460u: goto label_16a460;
        case 0x16a464u: goto label_16a464;
        case 0x16a468u: goto label_16a468;
        case 0x16a46cu: goto label_16a46c;
        case 0x16a470u: goto label_16a470;
        case 0x16a474u: goto label_16a474;
        case 0x16a478u: goto label_16a478;
        case 0x16a47cu: goto label_16a47c;
        case 0x16a480u: goto label_16a480;
        case 0x16a484u: goto label_16a484;
        case 0x16a488u: goto label_16a488;
        case 0x16a48cu: goto label_16a48c;
        case 0x16a490u: goto label_16a490;
        case 0x16a494u: goto label_16a494;
        case 0x16a498u: goto label_16a498;
        case 0x16a49cu: goto label_16a49c;
        case 0x16a4a0u: goto label_16a4a0;
        case 0x16a4a4u: goto label_16a4a4;
        case 0x16a4a8u: goto label_16a4a8;
        case 0x16a4acu: goto label_16a4ac;
        case 0x16a4b0u: goto label_16a4b0;
        case 0x16a4b4u: goto label_16a4b4;
        case 0x16a4b8u: goto label_16a4b8;
        case 0x16a4bcu: goto label_16a4bc;
        case 0x16a4c0u: goto label_16a4c0;
        case 0x16a4c4u: goto label_16a4c4;
        case 0x16a4c8u: goto label_16a4c8;
        case 0x16a4ccu: goto label_16a4cc;
        case 0x16a4d0u: goto label_16a4d0;
        case 0x16a4d4u: goto label_16a4d4;
        case 0x16a4d8u: goto label_16a4d8;
        case 0x16a4dcu: goto label_16a4dc;
        case 0x16a4e0u: goto label_16a4e0;
        case 0x16a4e4u: goto label_16a4e4;
        case 0x16a4e8u: goto label_16a4e8;
        case 0x16a4ecu: goto label_16a4ec;
        case 0x16a4f0u: goto label_16a4f0;
        case 0x16a4f4u: goto label_16a4f4;
        case 0x16a4f8u: goto label_16a4f8;
        case 0x16a4fcu: goto label_16a4fc;
        case 0x16a500u: goto label_16a500;
        case 0x16a504u: goto label_16a504;
        case 0x16a508u: goto label_16a508;
        case 0x16a50cu: goto label_16a50c;
        case 0x16a510u: goto label_16a510;
        case 0x16a514u: goto label_16a514;
        case 0x16a518u: goto label_16a518;
        case 0x16a51cu: goto label_16a51c;
        case 0x16a520u: goto label_16a520;
        case 0x16a524u: goto label_16a524;
        case 0x16a528u: goto label_16a528;
        case 0x16a52cu: goto label_16a52c;
        case 0x16a530u: goto label_16a530;
        case 0x16a534u: goto label_16a534;
        case 0x16a538u: goto label_16a538;
        case 0x16a53cu: goto label_16a53c;
        case 0x16a540u: goto label_16a540;
        case 0x16a544u: goto label_16a544;
        case 0x16a548u: goto label_16a548;
        case 0x16a54cu: goto label_16a54c;
        case 0x16a550u: goto label_16a550;
        default: break;
    }

    ctx->pc = 0x16a400u;

label_16a400:
    // 0x16a400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16a400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_16a404:
    // 0x16a404: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x16a404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16a408:
    // 0x16a408: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16a408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_16a40c:
    // 0x16a40c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x16a40cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16a410:
    // 0x16a410: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16a410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_16a414:
    // 0x16a414: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x16a414u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16a418:
    // 0x16a418: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16a41c:
    // 0x16a41c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16a41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_16a420:
    // 0x16a420: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_16a424:
    if (ctx->pc == 0x16A424u) {
        ctx->pc = 0x16A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A420u;
        // 0x16a424: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A428u;
        goto label_16a428;
    }
    ctx->pc = 0x16A420u;
    {
        const bool branch_taken_0x16a420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A420u;
        // 0x16a424: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a420) {
            ctx->pc = 0x16A538u;
            goto label_16a538;
        }
    }
    ctx->pc = 0x16A428u;
label_16a428:
    // 0x16a428: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16a428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16a42c:
    // 0x16a42c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16a42cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a430:
    // 0x16a430: 0xc0592d6  jal         func_164B58
label_16a434:
    if (ctx->pc == 0x16A434u) {
        ctx->pc = 0x16A434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A430u;
        // 0x16a434: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A438u;
        goto label_16a438;
    }
    ctx->pc = 0x16A430u;
    SET_GPR_U32(ctx, 31, 0x16A438u);
    ctx->pc = 0x16A434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A430u;
    // 0x16a434: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B58u, 0x16A430u, 0x16A438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A438u;
label_16a438:
    // 0x16a438: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_16a43c:
    if (ctx->pc == 0x16A43Cu) {
        ctx->pc = 0x16A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A438u;
        // 0x16a43c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A440u;
        goto label_16a440;
    }
    ctx->pc = 0x16A438u;
    {
        const bool branch_taken_0x16a438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a438) {
            ctx->pc = 0x16A43Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A438u;
            // 0x16a43c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A470u;
            goto label_16a470;
        }
    }
    ctx->pc = 0x16A440u;
label_16a440:
    // 0x16a440: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x16a440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16a444:
    // 0x16a444: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x16a444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_16a448:
    // 0x16a448: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x16a448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_16a44c:
    // 0x16a44c: 0x24630068  addiu       $v1, $v1, 0x68
    ctx->pc = 0x16a44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
label_16a450:
    // 0x16a450: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x16a450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_16a454:
    // 0x16a454: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x16a454u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_16a458:
    // 0x16a458: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x16a458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_16a45c:
    // 0x16a45c: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x16a45cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_16a460:
    // 0x16a460: 0xc0f809  jalr        $a2
label_16a464:
    if (ctx->pc == 0x16A464u) {
        ctx->pc = 0x16A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A460u;
        // 0x16a464: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A468u;
        goto label_16a468;
    }
    ctx->pc = 0x16A460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x16A468u);
        ctx->pc = 0x16A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A460u;
        // 0x16a464: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A460u, 0x16A468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A468u;
label_16a468:
    // 0x16a468: 0x10000034  b           . + 4 + (0x34 << 2)
label_16a46c:
    if (ctx->pc == 0x16A46Cu) {
        ctx->pc = 0x16A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A468u;
        // 0x16a46c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A470u;
        goto label_16a470;
    }
    ctx->pc = 0x16A468u;
    {
        const bool branch_taken_0x16a468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A468u;
        // 0x16a46c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a468) {
            ctx->pc = 0x16A53Cu;
            goto label_16a53c;
        }
    }
    ctx->pc = 0x16A470u;
label_16a470:
    // 0x16a470: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x16a470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_16a474:
    // 0x16a474: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x16a474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
label_16a478:
    // 0x16a478: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_16a47c:
    if (ctx->pc == 0x16A47Cu) {
        ctx->pc = 0x16A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A478u;
        // 0x16a47c: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A480u;
        goto label_16a480;
    }
    ctx->pc = 0x16A478u;
    {
        const bool branch_taken_0x16a478 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A478u;
        // 0x16a47c: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a478) {
            ctx->pc = 0x16A490u;
            goto label_16a490;
        }
    }
    ctx->pc = 0x16A480u;
label_16a480:
    // 0x16a480: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16a480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16a484:
    // 0x16a484: 0x10000003  b           . + 4 + (0x3 << 2)
label_16a488:
    if (ctx->pc == 0x16A488u) {
        ctx->pc = 0x16A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A484u;
        // 0x16a488: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A48Cu;
        goto label_16a48c;
    }
    ctx->pc = 0x16A484u;
    {
        const bool branch_taken_0x16a484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A484u;
        // 0x16a488: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a484) {
            ctx->pc = 0x16A494u;
            goto label_16a494;
        }
    }
    ctx->pc = 0x16A48Cu;
label_16a48c:
    // 0x16a48c: 0x0  nop
    ctx->pc = 0x16a48cu;
    // NOP
label_16a490:
    // 0x16a490: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16a490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a494:
    // 0x16a494: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16a494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16a498:
    // 0x16a498: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
label_16a49c:
    if (ctx->pc == 0x16A49Cu) {
        ctx->pc = 0x16A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A498u;
        // 0x16a49c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A4A0u;
        goto label_16a4a0;
    }
    ctx->pc = 0x16A498u;
    {
        const bool branch_taken_0x16a498 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A498u;
        // 0x16a49c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a498) {
            ctx->pc = 0x16A520u;
            goto label_16a520;
        }
    }
    ctx->pc = 0x16A4A0u;
label_16a4a0:
    // 0x16a4a0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x16a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_16a4a4:
    // 0x16a4a4: 0x8c430c04  lw          $v1, 0xC04($v0)
    ctx->pc = 0x16a4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
label_16a4a8:
    // 0x16a4a8: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_16a4ac:
    if (ctx->pc == 0x16A4ACu) {
        ctx->pc = 0x16A4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A4A8u;
        // 0x16a4ac: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A4B0u;
        goto label_16a4b0;
    }
    ctx->pc = 0x16A4A8u;
    {
        const bool branch_taken_0x16a4a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A4A8u;
        // 0x16a4ac: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a4a8) {
            ctx->pc = 0x16A524u;
            goto label_16a524;
        }
    }
    ctx->pc = 0x16A4B0u;
label_16a4b0:
    // 0x16a4b0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x16a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_16a4b4:
    // 0x16a4b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_16a4b8:
    if (ctx->pc == 0x16A4B8u) {
        ctx->pc = 0x16A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A4B4u;
        // 0x16a4b8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A4BCu;
        goto label_16a4bc;
    }
    ctx->pc = 0x16A4B4u;
    {
        const bool branch_taken_0x16a4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A4B4u;
        // 0x16a4b8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a4b4) {
            ctx->pc = 0x16A4D0u;
            goto label_16a4d0;
        }
    }
    ctx->pc = 0x16A4BCu;
label_16a4bc:
    // 0x16a4bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_16a4c0:
    // 0x16a4c0: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16a4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16a4c4:
    // 0x16a4c4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x16a4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_16a4c8:
    // 0x16a4c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_16a4cc:
    if (ctx->pc == 0x16A4CCu) {
        ctx->pc = 0x16A4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A4C8u;
        // 0x16a4cc: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A4D0u;
        goto label_16a4d0;
    }
    ctx->pc = 0x16A4C8u;
    {
        const bool branch_taken_0x16a4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A4C8u;
        // 0x16a4cc: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a4c8) {
            ctx->pc = 0x16A4D4u;
            goto label_16a4d4;
        }
    }
    ctx->pc = 0x16A4D0u;
label_16a4d0:
    // 0x16a4d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16a4d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a4d4:
    // 0x16a4d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16a4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16a4d8:
    // 0x16a4d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16a4dc:
    // 0x16a4dc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x16a4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16a4e0:
    // 0x16a4e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16a4e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a4e4:
    // 0x16a4e4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x16a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_16a4e8:
    // 0x16a4e8: 0xace20024  sw          $v0, 0x24($a3)
    ctx->pc = 0x16a4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 2));
label_16a4ec:
    // 0x16a4ec: 0xc0618da  jal         func_186368
label_16a4f0:
    if (ctx->pc == 0x16A4F0u) {
        ctx->pc = 0x16A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A4ECu;
        // 0x16a4f0: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A4F4u;
        goto label_16a4f4;
    }
    ctx->pc = 0x16A4ECu;
    SET_GPR_U32(ctx, 31, 0x16A4F4u);
    ctx->pc = 0x16A4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A4ECu;
    // 0x16a4f0: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x16A4ECu, 0x16A4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A4F4u;
label_16a4f4:
    // 0x16a4f4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x16a4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16a4f8:
    // 0x16a4f8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x16a4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_16a4fc:
    // 0x16a4fc: 0x24a500d0  addiu       $a1, $a1, 0xD0
    ctx->pc = 0x16a4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
label_16a500:
    // 0x16a500: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x16a500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_16a504:
    // 0x16a504: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16a504u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16a508:
    // 0x16a508: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16a508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16a50c:
    // 0x16a50c: 0x60f809  jalr        $v1
label_16a510:
    if (ctx->pc == 0x16A510u) {
        ctx->pc = 0x16A510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A50Cu;
        // 0x16a510: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A514u;
        goto label_16a514;
    }
    ctx->pc = 0x16A50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16A514u);
        ctx->pc = 0x16A510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A50Cu;
        // 0x16a510: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A50Cu, 0x16A514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A514u;
label_16a514:
    // 0x16a514: 0x10000009  b           . + 4 + (0x9 << 2)
label_16a518:
    if (ctx->pc == 0x16A518u) {
        ctx->pc = 0x16A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A514u;
        // 0x16a518: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A51Cu;
        goto label_16a51c;
    }
    ctx->pc = 0x16A514u;
    {
        const bool branch_taken_0x16a514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A514u;
        // 0x16a518: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a514) {
            ctx->pc = 0x16A53Cu;
            goto label_16a53c;
        }
    }
    ctx->pc = 0x16A51Cu;
label_16a51c:
    // 0x16a51c: 0x0  nop
    ctx->pc = 0x16a51cu;
    // NOP
label_16a520:
    // 0x16a520: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x16a520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_16a524:
    // 0x16a524: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16a524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16a528:
    // 0x16a528: 0x24a57330  addiu       $a1, $a1, 0x7330
    ctx->pc = 0x16a528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29488));
label_16a52c:
    // 0x16a52c: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x16a52cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_16a530:
    // 0x16a530: 0xc0415ec  jal         func_1057B0
label_16a534:
    if (ctx->pc == 0x16A534u) {
        ctx->pc = 0x16A534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A530u;
        // 0x16a534: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A538u;
        goto label_16a538;
    }
    ctx->pc = 0x16A530u;
    SET_GPR_U32(ctx, 31, 0x16A538u);
    ctx->pc = 0x16A534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A530u;
    // 0x16a534: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x16A530u, 0x16A538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A538u;
label_16a538:
    // 0x16a538: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a538u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16a53c:
    // 0x16a53c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16a53cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16a540:
    // 0x16a540: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16a540u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16a544:
    // 0x16a544: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16a544u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16a548:
    // 0x16a548: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16a548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16a54c:
    // 0x16a54c: 0x3e00008  jr          $ra
label_16a550:
    if (ctx->pc == 0x16A550u) {
        ctx->pc = 0x16A550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A54Cu;
        // 0x16a550: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A554u;
        goto label_fallthrough_0x16a54c;
    }
    ctx->pc = 0x16A54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A54Cu;
        // 0x16a550: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16a54c:
    ctx->pc = 0x16A554u;
}

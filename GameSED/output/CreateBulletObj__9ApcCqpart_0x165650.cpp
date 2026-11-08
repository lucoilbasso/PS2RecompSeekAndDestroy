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

// Function: CreateBulletObj__9ApcCqpart
// Address: 0x165650 - 0x165814
void CreateBulletObj__9ApcCqpart_0x165650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateBulletObj__9ApcCqpart_0x165650");
#endif

    switch (ctx->pc) {
        case 0x165650u: goto label_165650;
        case 0x165654u: goto label_165654;
        case 0x165658u: goto label_165658;
        case 0x16565cu: goto label_16565c;
        case 0x165660u: goto label_165660;
        case 0x165664u: goto label_165664;
        case 0x165668u: goto label_165668;
        case 0x16566cu: goto label_16566c;
        case 0x165670u: goto label_165670;
        case 0x165674u: goto label_165674;
        case 0x165678u: goto label_165678;
        case 0x16567cu: goto label_16567c;
        case 0x165680u: goto label_165680;
        case 0x165684u: goto label_165684;
        case 0x165688u: goto label_165688;
        case 0x16568cu: goto label_16568c;
        case 0x165690u: goto label_165690;
        case 0x165694u: goto label_165694;
        case 0x165698u: goto label_165698;
        case 0x16569cu: goto label_16569c;
        case 0x1656a0u: goto label_1656a0;
        case 0x1656a4u: goto label_1656a4;
        case 0x1656a8u: goto label_1656a8;
        case 0x1656acu: goto label_1656ac;
        case 0x1656b0u: goto label_1656b0;
        case 0x1656b4u: goto label_1656b4;
        case 0x1656b8u: goto label_1656b8;
        case 0x1656bcu: goto label_1656bc;
        case 0x1656c0u: goto label_1656c0;
        case 0x1656c4u: goto label_1656c4;
        case 0x1656c8u: goto label_1656c8;
        case 0x1656ccu: goto label_1656cc;
        case 0x1656d0u: goto label_1656d0;
        case 0x1656d4u: goto label_1656d4;
        case 0x1656d8u: goto label_1656d8;
        case 0x1656dcu: goto label_1656dc;
        case 0x1656e0u: goto label_1656e0;
        case 0x1656e4u: goto label_1656e4;
        case 0x1656e8u: goto label_1656e8;
        case 0x1656ecu: goto label_1656ec;
        case 0x1656f0u: goto label_1656f0;
        case 0x1656f4u: goto label_1656f4;
        case 0x1656f8u: goto label_1656f8;
        case 0x1656fcu: goto label_1656fc;
        case 0x165700u: goto label_165700;
        case 0x165704u: goto label_165704;
        case 0x165708u: goto label_165708;
        case 0x16570cu: goto label_16570c;
        case 0x165710u: goto label_165710;
        case 0x165714u: goto label_165714;
        case 0x165718u: goto label_165718;
        case 0x16571cu: goto label_16571c;
        case 0x165720u: goto label_165720;
        case 0x165724u: goto label_165724;
        case 0x165728u: goto label_165728;
        case 0x16572cu: goto label_16572c;
        case 0x165730u: goto label_165730;
        case 0x165734u: goto label_165734;
        case 0x165738u: goto label_165738;
        case 0x16573cu: goto label_16573c;
        case 0x165740u: goto label_165740;
        case 0x165744u: goto label_165744;
        case 0x165748u: goto label_165748;
        case 0x16574cu: goto label_16574c;
        case 0x165750u: goto label_165750;
        case 0x165754u: goto label_165754;
        case 0x165758u: goto label_165758;
        case 0x16575cu: goto label_16575c;
        case 0x165760u: goto label_165760;
        case 0x165764u: goto label_165764;
        case 0x165768u: goto label_165768;
        case 0x16576cu: goto label_16576c;
        case 0x165770u: goto label_165770;
        case 0x165774u: goto label_165774;
        case 0x165778u: goto label_165778;
        case 0x16577cu: goto label_16577c;
        case 0x165780u: goto label_165780;
        case 0x165784u: goto label_165784;
        case 0x165788u: goto label_165788;
        case 0x16578cu: goto label_16578c;
        case 0x165790u: goto label_165790;
        case 0x165794u: goto label_165794;
        case 0x165798u: goto label_165798;
        case 0x16579cu: goto label_16579c;
        case 0x1657a0u: goto label_1657a0;
        case 0x1657a4u: goto label_1657a4;
        case 0x1657a8u: goto label_1657a8;
        case 0x1657acu: goto label_1657ac;
        case 0x1657b0u: goto label_1657b0;
        case 0x1657b4u: goto label_1657b4;
        case 0x1657b8u: goto label_1657b8;
        case 0x1657bcu: goto label_1657bc;
        case 0x1657c0u: goto label_1657c0;
        case 0x1657c4u: goto label_1657c4;
        case 0x1657c8u: goto label_1657c8;
        case 0x1657ccu: goto label_1657cc;
        case 0x1657d0u: goto label_1657d0;
        case 0x1657d4u: goto label_1657d4;
        case 0x1657d8u: goto label_1657d8;
        case 0x1657dcu: goto label_1657dc;
        case 0x1657e0u: goto label_1657e0;
        case 0x1657e4u: goto label_1657e4;
        case 0x1657e8u: goto label_1657e8;
        case 0x1657ecu: goto label_1657ec;
        case 0x1657f0u: goto label_1657f0;
        case 0x1657f4u: goto label_1657f4;
        case 0x1657f8u: goto label_1657f8;
        case 0x1657fcu: goto label_1657fc;
        case 0x165800u: goto label_165800;
        case 0x165804u: goto label_165804;
        case 0x165808u: goto label_165808;
        case 0x16580cu: goto label_16580c;
        case 0x165810u: goto label_165810;
        default: break;
    }

    ctx->pc = 0x165650u;

label_165650:
    // 0x165650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x165650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_165654:
    // 0x165654: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x165654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_165658:
    // 0x165658: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x165658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16565c:
    // 0x16565c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16565cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_165660:
    // 0x165660: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x165660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_165664:
    // 0x165664: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x165664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_165668:
    // 0x165668: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x165668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_16566c:
    // 0x16566c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x16566cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_165670:
    // 0x165670: 0x8e081230  lw          $t0, 0x1230($s0)
    ctx->pc = 0x165670u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4656)));
label_165674:
    // 0x165674: 0x1100005f  beqz        $t0, . + 4 + (0x5F << 2)
label_165678:
    if (ctx->pc == 0x165678u) {
        ctx->pc = 0x165678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165674u;
        // 0x165678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16567Cu;
        goto label_16567c;
    }
    ctx->pc = 0x165674u;
    {
        const bool branch_taken_0x165674 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x165678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165674u;
        // 0x165678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165674) {
            ctx->pc = 0x1657F4u;
            goto label_1657f4;
        }
    }
    ctx->pc = 0x16567Cu;
label_16567c:
    // 0x16567c: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x16567cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_165680:
    // 0x165680: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_165684:
    if (ctx->pc == 0x165684u) {
        ctx->pc = 0x165684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165680u;
        // 0x165684: 0x8e121230  lw          $s2, 0x1230($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165688u;
        goto label_165688;
    }
    ctx->pc = 0x165680u;
    {
        const bool branch_taken_0x165680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165680) {
            ctx->pc = 0x165684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165680u;
            // 0x165684: 0x8e121230  lw          $s2, 0x1230($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4656)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1656B8u;
            goto label_1656b8;
        }
    }
    ctx->pc = 0x165688u;
label_165688:
    // 0x165688: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x165688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_16568c:
    // 0x16568c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16568cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165690:
    // 0x165690: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x165690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_165694:
    // 0x165694: 0x8c830154  lw          $v1, 0x154($a0)
    ctx->pc = 0x165694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
label_165698:
    // 0x165698: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x165698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_16569c:
    // 0x16569c: 0x8c67009c  lw          $a3, 0x9C($v1)
    ctx->pc = 0x16569cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_1656a0:
    // 0x1656a0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1656a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1656a4:
    // 0x1656a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1656a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1656a8:
    // 0x1656a8: 0x8ce50018  lw          $a1, 0x18($a3)
    ctx->pc = 0x1656a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_1656ac:
    // 0x1656ac: 0x60f809  jalr        $v1
label_1656b0:
    if (ctx->pc == 0x1656B0u) {
        ctx->pc = 0x1656B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656ACu;
        // 0x1656b0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1656B4u;
        goto label_1656b4;
    }
    ctx->pc = 0x1656ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1656B4u);
        ctx->pc = 0x1656B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656ACu;
        // 0x1656b0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1656ACu, 0x1656B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1656B4u;
label_1656b4:
    // 0x1656b4: 0x8e121230  lw          $s2, 0x1230($s0)
    ctx->pc = 0x1656b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4656)));
label_1656b8:
    // 0x1656b8: 0x8e4201c0  lw          $v0, 0x1C0($s2)
    ctx->pc = 0x1656b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 448)));
label_1656bc:
    // 0x1656bc: 0x265001b4  addiu       $s0, $s2, 0x1B4
    ctx->pc = 0x1656bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 436));
label_1656c0:
    // 0x1656c0: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x1656c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1656c4:
    // 0x1656c4: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x1656c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1656c8:
    // 0x1656c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1656c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1656cc:
    // 0x1656cc: 0xae4201c0  sw          $v0, 0x1C0($s2)
    ctx->pc = 0x1656ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 448), GPR_U32(ctx, 2));
label_1656d0:
    // 0x1656d0: 0x16200028  bnez        $s1, . + 4 + (0x28 << 2)
label_1656d4:
    if (ctx->pc == 0x1656D4u) {
        ctx->pc = 0x1656D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656D0u;
        // 0x1656d4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1656D8u;
        goto label_1656d8;
    }
    ctx->pc = 0x1656D0u;
    {
        const bool branch_taken_0x1656d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1656D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656D0u;
        // 0x1656d4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1656d0) {
            ctx->pc = 0x165774u;
            goto label_165774;
        }
    }
    ctx->pc = 0x1656D8u;
label_1656d8:
    // 0x1656d8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1656d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1656dc:
    // 0x1656dc: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
label_1656e0:
    if (ctx->pc == 0x1656E0u) {
        ctx->pc = 0x1656E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656DCu;
        // 0x1656e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1656E4u;
        goto label_1656e4;
    }
    ctx->pc = 0x1656DCu;
    {
        const bool branch_taken_0x1656dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1656E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656DCu;
        // 0x1656e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1656dc) {
            ctx->pc = 0x1656E8u;
            goto label_1656e8;
        }
    }
    ctx->pc = 0x1656E4u;
label_1656e4:
    // 0x1656e4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1656e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1656e8:
    // 0x1656e8: 0xc068086  jal         func_1A0218
label_1656ec:
    if (ctx->pc == 0x1656ECu) {
        ctx->pc = 0x1656ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656E8u;
        // 0x1656ec: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1656F0u;
        goto label_1656f0;
    }
    ctx->pc = 0x1656E8u;
    SET_GPR_U32(ctx, 31, 0x1656F0u);
    ctx->pc = 0x1656ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1656E8u;
    // 0x1656ec: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1656E8u, 0x1656F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1656F0u;
label_1656f0:
    // 0x1656f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1656f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1656f4:
    // 0x1656f4: 0x54a00008  bnel        $a1, $zero, . + 4 + (0x8 << 2)
label_1656f8:
    if (ctx->pc == 0x1656F8u) {
        ctx->pc = 0x1656F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656F4u;
        // 0x1656f8: 0xaca003f0  sw          $zero, 0x3F0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1656FCu;
        goto label_1656fc;
    }
    ctx->pc = 0x1656F4u;
    {
        const bool branch_taken_0x1656f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1656f4) {
            ctx->pc = 0x1656F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1656F4u;
            // 0x1656f8: 0xaca003f0  sw          $zero, 0x3F0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 1008), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165718u;
            goto label_165718;
        }
    }
    ctx->pc = 0x1656FCu;
label_1656fc:
    // 0x1656fc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1656fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_165700:
    // 0x165700: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x165700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_165704:
    // 0x165704: 0x24a57120  addiu       $a1, $a1, 0x7120
    ctx->pc = 0x165704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28960));
label_165708:
    // 0x165708: 0xc068186  jal         func_1A0618
label_16570c:
    if (ctx->pc == 0x16570Cu) {
        ctx->pc = 0x16570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165708u;
        // 0x16570c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165710u;
        goto label_165710;
    }
    ctx->pc = 0x165708u;
    SET_GPR_U32(ctx, 31, 0x165710u);
    ctx->pc = 0x16570Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165708u;
    // 0x16570c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x165708u, 0x165710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165710u;
label_165710:
    // 0x165710: 0x10000017  b           . + 4 + (0x17 << 2)
label_165714:
    if (ctx->pc == 0x165714u) {
        ctx->pc = 0x165714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165710u;
        // 0x165714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165718u;
        goto label_165718;
    }
    ctx->pc = 0x165710u;
    {
        const bool branch_taken_0x165710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165710u;
        // 0x165714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165710) {
            ctx->pc = 0x165770u;
            goto label_165770;
        }
    }
    ctx->pc = 0x165718u;
label_165718:
    // 0x165718: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x165718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_16571c:
    // 0x16571c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x16571cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_165720:
    // 0x165720: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x165720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165724:
    // 0x165724: 0x0  nop
    ctx->pc = 0x165724u;
    // NOP
label_165728:
    // 0x165728: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x165728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_16572c:
    // 0x16572c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_165730:
    if (ctx->pc == 0x165730u) {
        ctx->pc = 0x165730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16572Cu;
        // 0x165730: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165734u;
        goto label_165734;
    }
    ctx->pc = 0x16572Cu;
    {
        const bool branch_taken_0x16572c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x165730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16572Cu;
        // 0x165730: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16572c) {
            ctx->pc = 0x165740u;
            goto label_165740;
        }
    }
    ctx->pc = 0x165734u;
label_165734:
    // 0x165734: 0x10000003  b           . + 4 + (0x3 << 2)
label_165738:
    if (ctx->pc == 0x165738u) {
        ctx->pc = 0x165738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165734u;
        // 0x165738: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16573Cu;
        goto label_16573c;
    }
    ctx->pc = 0x165734u;
    {
        const bool branch_taken_0x165734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165734u;
        // 0x165738: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165734) {
            ctx->pc = 0x165744u;
            goto label_165744;
        }
    }
    ctx->pc = 0x16573Cu;
label_16573c:
    // 0x16573c: 0x0  nop
    ctx->pc = 0x16573cu;
    // NOP
label_165740:
    // 0x165740: 0x2462fff0  addiu       $v0, $v1, -0x10
    ctx->pc = 0x165740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_165744:
    // 0x165744: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x165744u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_165748:
    // 0x165748: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x165748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_16574c:
    // 0x16574c: 0x2882003f  slti        $v0, $a0, 0x3F
    ctx->pc = 0x16574cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)63) ? 1 : 0);
label_165750:
    // 0x165750: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_165754:
    if (ctx->pc == 0x165754u) {
        ctx->pc = 0x165754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165750u;
        // 0x165754: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165758u;
        goto label_165758;
    }
    ctx->pc = 0x165750u;
    {
        const bool branch_taken_0x165750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165750u;
        // 0x165754: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165750) {
            ctx->pc = 0x165728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165728;
        }
    }
    ctx->pc = 0x165758u;
label_165758:
    // 0x165758: 0x2462fff0  addiu       $v0, $v1, -0x10
    ctx->pc = 0x165758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_16575c:
    // 0x16575c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x16575cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_165760:
    // 0x165760: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x165760u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_165764:
    // 0x165764: 0xaca303f0  sw          $v1, 0x3F0($a1)
    ctx->pc = 0x165764u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1008), GPR_U32(ctx, 3));
label_165768:
    // 0x165768: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x165768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_16576c:
    // 0x16576c: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x16576cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
label_165770:
    // 0x165770: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x165770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_165774:
    // 0x165774: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x165774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_165778:
    // 0x165778: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x165778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_16577c:
    // 0x16577c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x16577cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_165780:
    // 0x165780: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x165780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_165784:
    // 0x165784: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x165784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_165788:
    // 0x165788: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x165788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_16578c:
    // 0x16578c: 0x14800014  bnez        $a0, . + 4 + (0x14 << 2)
label_165790:
    if (ctx->pc == 0x165790u) {
        ctx->pc = 0x165790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16578Cu;
        // 0x165790: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165794u;
        goto label_165794;
    }
    ctx->pc = 0x16578Cu;
    {
        const bool branch_taken_0x16578c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x165790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16578Cu;
        // 0x165790: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16578c) {
            ctx->pc = 0x1657E0u;
            goto label_1657e0;
        }
    }
    ctx->pc = 0x165794u;
label_165794:
    // 0x165794: 0xc05bedc  jal         func_16FB70
label_165798:
    if (ctx->pc == 0x165798u) {
        ctx->pc = 0x165798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165794u;
        // 0x165798: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16579Cu;
        goto label_16579c;
    }
    ctx->pc = 0x165794u;
    SET_GPR_U32(ctx, 31, 0x16579Cu);
    ctx->pc = 0x165798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165794u;
    // 0x165798: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x165794u, 0x16579Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16579Cu;
label_16579c:
    // 0x16579c: 0xc0682b2  jal         func_1A0AC8
label_1657a0:
    if (ctx->pc == 0x1657A0u) {
        ctx->pc = 0x1657A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16579Cu;
        // 0x1657a0: 0x24040346  addiu       $a0, $zero, 0x346 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1657A4u;
        goto label_1657a4;
    }
    ctx->pc = 0x16579Cu;
    SET_GPR_U32(ctx, 31, 0x1657A4u);
    ctx->pc = 0x1657A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16579Cu;
    // 0x1657a0: 0x24040346  addiu       $a0, $zero, 0x346 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x16579Cu, 0x1657A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1657A4u;
label_1657a4:
    // 0x1657a4: 0xc0682b6  jal         func_1A0AD8
label_1657a8:
    if (ctx->pc == 0x1657A8u) {
        ctx->pc = 0x1657A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1657A4u;
        // 0x1657a8: 0x240401c0  addiu       $a0, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1657ACu;
        goto label_1657ac;
    }
    ctx->pc = 0x1657A4u;
    SET_GPR_U32(ctx, 31, 0x1657ACu);
    ctx->pc = 0x1657A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1657A4u;
    // 0x1657a8: 0x240401c0  addiu       $a0, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1657A4u, 0x1657ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1657ACu;
label_1657ac:
    // 0x1657ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1657acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1657b0:
    // 0x1657b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1657b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1657b4:
    // 0x1657b4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1657b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1657b8:
    // 0x1657b8: 0x244207f0  addiu       $v0, $v0, 0x7F0
    ctx->pc = 0x1657b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2032));
label_1657bc:
    // 0x1657bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1657bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1657c0:
    // 0x1657c0: 0xc06586e  jal         func_1961B8
label_1657c4:
    if (ctx->pc == 0x1657C4u) {
        ctx->pc = 0x1657C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1657C0u;
        // 0x1657c4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1657C8u;
        goto label_1657c8;
    }
    ctx->pc = 0x1657C0u;
    SET_GPR_U32(ctx, 31, 0x1657C8u);
    ctx->pc = 0x1657C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1657C0u;
    // 0x1657c4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1961B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1961B8u, 0x1657C0u, 0x1657C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1657C8u;
label_1657c8:
    // 0x1657c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1657c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1657cc:
    // 0x1657cc: 0xc06825c  jal         func_1A0970
label_1657d0:
    if (ctx->pc == 0x1657D0u) {
        ctx->pc = 0x1657D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1657CCu;
        // 0x1657d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1657D4u;
        goto label_1657d4;
    }
    ctx->pc = 0x1657CCu;
    SET_GPR_U32(ctx, 31, 0x1657D4u);
    ctx->pc = 0x1657D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1657CCu;
    // 0x1657d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1657CCu, 0x1657D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1657D4u;
label_1657d4:
    // 0x1657d4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1657d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_1657d8:
    // 0x1657d8: 0xc05bedc  jal         func_16FB70
label_1657dc:
    if (ctx->pc == 0x1657DCu) {
        ctx->pc = 0x1657DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1657D8u;
        // 0x1657dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1657E0u;
        goto label_1657e0;
    }
    ctx->pc = 0x1657D8u;
    SET_GPR_U32(ctx, 31, 0x1657E0u);
    ctx->pc = 0x1657DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1657D8u;
    // 0x1657dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x1657D8u, 0x1657E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1657E0u;
label_1657e0:
    // 0x1657e0: 0x8e4201b0  lw          $v0, 0x1B0($s2)
    ctx->pc = 0x1657e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
label_1657e4:
    // 0x1657e4: 0xae340008  sw          $s4, 0x8($s1)
    ctx->pc = 0x1657e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
label_1657e8:
    // 0x1657e8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1657e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1657ec:
    // 0x1657ec: 0xae5101b0  sw          $s1, 0x1B0($s2)
    ctx->pc = 0x1657ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 432), GPR_U32(ctx, 17));
label_1657f0:
    // 0x1657f0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1657f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1657f4:
    // 0x1657f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1657f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1657f8:
    // 0x1657f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1657f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1657fc:
    // 0x1657fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1657fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_165800:
    // 0x165800: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x165800u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_165804:
    // 0x165804: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x165804u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_165808:
    // 0x165808: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x165808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_16580c:
    // 0x16580c: 0x3e00008  jr          $ra
label_165810:
    if (ctx->pc == 0x165810u) {
        ctx->pc = 0x165810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16580Cu;
        // 0x165810: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165814u;
        goto label_fallthrough_0x16580c;
    }
    ctx->pc = 0x16580Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16580Cu;
        // 0x165810: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16580Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16580c:
    ctx->pc = 0x165814u;
}

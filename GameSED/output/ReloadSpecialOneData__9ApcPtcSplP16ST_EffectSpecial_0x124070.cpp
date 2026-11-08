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

// Function: ReloadSpecialOneData__9ApcPtcSplP16ST_EffectSpecial
// Address: 0x124070 - 0x12417c
void ReloadSpecialOneData__9ApcPtcSplP16ST_EffectSpecial_0x124070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReloadSpecialOneData__9ApcPtcSplP16ST_EffectSpecial_0x124070");
#endif

    switch (ctx->pc) {
        case 0x124070u: goto label_124070;
        case 0x124074u: goto label_124074;
        case 0x124078u: goto label_124078;
        case 0x12407cu: goto label_12407c;
        case 0x124080u: goto label_124080;
        case 0x124084u: goto label_124084;
        case 0x124088u: goto label_124088;
        case 0x12408cu: goto label_12408c;
        case 0x124090u: goto label_124090;
        case 0x124094u: goto label_124094;
        case 0x124098u: goto label_124098;
        case 0x12409cu: goto label_12409c;
        case 0x1240a0u: goto label_1240a0;
        case 0x1240a4u: goto label_1240a4;
        case 0x1240a8u: goto label_1240a8;
        case 0x1240acu: goto label_1240ac;
        case 0x1240b0u: goto label_1240b0;
        case 0x1240b4u: goto label_1240b4;
        case 0x1240b8u: goto label_1240b8;
        case 0x1240bcu: goto label_1240bc;
        case 0x1240c0u: goto label_1240c0;
        case 0x1240c4u: goto label_1240c4;
        case 0x1240c8u: goto label_1240c8;
        case 0x1240ccu: goto label_1240cc;
        case 0x1240d0u: goto label_1240d0;
        case 0x1240d4u: goto label_1240d4;
        case 0x1240d8u: goto label_1240d8;
        case 0x1240dcu: goto label_1240dc;
        case 0x1240e0u: goto label_1240e0;
        case 0x1240e4u: goto label_1240e4;
        case 0x1240e8u: goto label_1240e8;
        case 0x1240ecu: goto label_1240ec;
        case 0x1240f0u: goto label_1240f0;
        case 0x1240f4u: goto label_1240f4;
        case 0x1240f8u: goto label_1240f8;
        case 0x1240fcu: goto label_1240fc;
        case 0x124100u: goto label_124100;
        case 0x124104u: goto label_124104;
        case 0x124108u: goto label_124108;
        case 0x12410cu: goto label_12410c;
        case 0x124110u: goto label_124110;
        case 0x124114u: goto label_124114;
        case 0x124118u: goto label_124118;
        case 0x12411cu: goto label_12411c;
        case 0x124120u: goto label_124120;
        case 0x124124u: goto label_124124;
        case 0x124128u: goto label_124128;
        case 0x12412cu: goto label_12412c;
        case 0x124130u: goto label_124130;
        case 0x124134u: goto label_124134;
        case 0x124138u: goto label_124138;
        case 0x12413cu: goto label_12413c;
        case 0x124140u: goto label_124140;
        case 0x124144u: goto label_124144;
        case 0x124148u: goto label_124148;
        case 0x12414cu: goto label_12414c;
        case 0x124150u: goto label_124150;
        case 0x124154u: goto label_124154;
        case 0x124158u: goto label_124158;
        case 0x12415cu: goto label_12415c;
        case 0x124160u: goto label_124160;
        case 0x124164u: goto label_124164;
        case 0x124168u: goto label_124168;
        case 0x12416cu: goto label_12416c;
        case 0x124170u: goto label_124170;
        case 0x124174u: goto label_124174;
        case 0x124178u: goto label_124178;
        default: break;
    }

    ctx->pc = 0x124070u;

label_124070:
    // 0x124070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x124070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_124074:
    // 0x124074: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x124074u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_124078:
    // 0x124078: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x124078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_12407c:
    // 0x12407c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12407cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_124080:
    // 0x124080: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x124080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_124084:
    // 0x124084: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x124084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_124088:
    // 0x124088: 0x12000037  beqz        $s0, . + 4 + (0x37 << 2)
label_12408c:
    if (ctx->pc == 0x12408Cu) {
        ctx->pc = 0x12408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124088u;
        // 0x12408c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124090u;
        goto label_124090;
    }
    ctx->pc = 0x124088u;
    {
        const bool branch_taken_0x124088 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124088u;
        // 0x12408c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124088) {
            ctx->pc = 0x124168u;
            goto label_124168;
        }
    }
    ctx->pc = 0x124090u;
label_124090:
    // 0x124090: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x124090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_124094:
    // 0x124094: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
label_124098:
    if (ctx->pc == 0x124098u) {
        ctx->pc = 0x124098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124094u;
        // 0x124098: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12409Cu;
        goto label_12409c;
    }
    ctx->pc = 0x124094u;
    {
        const bool branch_taken_0x124094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x124094) {
            ctx->pc = 0x124098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124094u;
            // 0x124098: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1240E4u;
            goto label_1240e4;
        }
    }
    ctx->pc = 0x12409Cu;
label_12409c:
    // 0x12409c: 0x8c82013c  lw          $v0, 0x13C($a0)
    ctx->pc = 0x12409cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
label_1240a0:
    // 0x1240a0: 0x5450000b  bnel        $v0, $s0, . + 4 + (0xB << 2)
label_1240a4:
    if (ctx->pc == 0x1240A4u) {
        ctx->pc = 0x1240A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240A0u;
        // 0x1240a4: 0x8e03004c  lw          $v1, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1240A8u;
        goto label_1240a8;
    }
    ctx->pc = 0x1240A0u;
    {
        const bool branch_taken_0x1240a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1240a0) {
            ctx->pc = 0x1240A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1240A0u;
            // 0x1240a4: 0x8e03004c  lw          $v1, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1240D0u;
            goto label_1240d0;
        }
    }
    ctx->pc = 0x1240A8u;
label_1240a8:
    // 0x1240a8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1240a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1240ac:
    // 0x1240ac: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_1240b0:
    if (ctx->pc == 0x1240B0u) {
        ctx->pc = 0x1240B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240ACu;
        // 0x1240b0: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1240B4u;
        goto label_1240b4;
    }
    ctx->pc = 0x1240ACu;
    {
        const bool branch_taken_0x1240ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1240ac) {
            ctx->pc = 0x1240B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1240ACu;
            // 0x1240b0: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1240C8u;
            goto label_1240c8;
        }
    }
    ctx->pc = 0x1240B4u;
label_1240b4:
    // 0x1240b4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1240b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1240b8:
    // 0x1240b8: 0x54820003  bnel        $a0, $v0, . + 4 + (0x3 << 2)
label_1240bc:
    if (ctx->pc == 0x1240BCu) {
        ctx->pc = 0x1240BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240B8u;
        // 0x1240bc: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1240C0u;
        goto label_1240c0;
    }
    ctx->pc = 0x1240B8u;
    {
        const bool branch_taken_0x1240b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1240b8) {
            ctx->pc = 0x1240BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1240B8u;
            // 0x1240bc: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1240C8u;
            goto label_1240c8;
        }
    }
    ctx->pc = 0x1240C0u;
label_1240c0:
    // 0x1240c0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1240c4:
    if (ctx->pc == 0x1240C4u) {
        ctx->pc = 0x1240C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240C0u;
        // 0x1240c4: 0xac83013c  sw          $v1, 0x13C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1240C8u;
        goto label_1240c8;
    }
    ctx->pc = 0x1240C0u;
    {
        const bool branch_taken_0x1240c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1240C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240C0u;
        // 0x1240c4: 0xac83013c  sw          $v1, 0x13C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1240c0) {
            ctx->pc = 0x1240CCu;
            goto label_1240cc;
        }
    }
    ctx->pc = 0x1240C8u;
label_1240c8:
    // 0x1240c8: 0xac40013c  sw          $zero, 0x13C($v0)
    ctx->pc = 0x1240c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 0));
label_1240cc:
    // 0x1240cc: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1240ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_1240d0:
    // 0x1240d0: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x1240d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
label_1240d4:
    // 0x1240d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1240d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1240d8:
    // 0x1240d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1240d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1240dc:
    // 0x1240dc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1240dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1240e0:
    // 0x1240e0: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x1240e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_1240e4:
    // 0x1240e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1240e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1240e8:
    // 0x1240e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1240e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1240ec:
    // 0x1240ec: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1240ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
label_1240f0:
    // 0x1240f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1240f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1240f4:
    // 0x1240f4: 0x8c637e08  lw          $v1, 0x7E08($v1)
    ctx->pc = 0x1240f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32264)));
label_1240f8:
    // 0x1240f8: 0x60f809  jalr        $v1
label_1240fc:
    if (ctx->pc == 0x1240FCu) {
        ctx->pc = 0x1240FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240F8u;
        // 0x1240fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124100u;
        goto label_124100;
    }
    ctx->pc = 0x1240F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x124100u);
        ctx->pc = 0x1240FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240F8u;
        // 0x1240fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1240F8u, 0x124100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124100u;
label_124100:
    // 0x124100: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x124100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_124104:
    // 0x124104: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_124108:
    if (ctx->pc == 0x124108u) {
        ctx->pc = 0x124108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124104u;
        // 0x124108: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12410Cu;
        goto label_12410c;
    }
    ctx->pc = 0x124104u;
    {
        const bool branch_taken_0x124104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x124104) {
            ctx->pc = 0x124108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124104u;
            // 0x124108: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124118u;
            goto label_124118;
        }
    }
    ctx->pc = 0x12410Cu;
label_12410c:
    // 0x12410c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x12410cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_124110:
    // 0x124110: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x124110u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_124114:
    // 0x124114: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x124114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_124118:
    // 0x124118: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_12411c:
    if (ctx->pc == 0x12411Cu) {
        ctx->pc = 0x12411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124118u;
        // 0x12411c: 0x8e220160  lw          $v0, 0x160($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124120u;
        goto label_124120;
    }
    ctx->pc = 0x124118u;
    {
        const bool branch_taken_0x124118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x124118) {
            ctx->pc = 0x12411Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124118u;
            // 0x12411c: 0x8e220160  lw          $v0, 0x160($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12412Cu;
            goto label_12412c;
        }
    }
    ctx->pc = 0x124120u;
label_124120:
    // 0x124120: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x124120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_124124:
    // 0x124124: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x124124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_124128:
    // 0x124128: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x124128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
label_12412c:
    // 0x12412c: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
label_124130:
    if (ctx->pc == 0x124130u) {
        ctx->pc = 0x124130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12412Cu;
        // 0x124130: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124134u;
        goto label_124134;
    }
    ctx->pc = 0x12412Cu;
    {
        const bool branch_taken_0x12412c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x12412c) {
            ctx->pc = 0x124130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12412Cu;
            // 0x124130: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124140u;
            goto label_124140;
        }
    }
    ctx->pc = 0x124134u;
label_124134:
    // 0x124134: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x124134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_124138:
    // 0x124138: 0xae220160  sw          $v0, 0x160($s1)
    ctx->pc = 0x124138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 2));
label_12413c:
    // 0x12413c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x12413cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_124140:
    // 0x124140: 0x8e22015c  lw          $v0, 0x15C($s1)
    ctx->pc = 0x124140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 348)));
label_124144:
    // 0x124144: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_124148:
    if (ctx->pc == 0x124148u) {
        ctx->pc = 0x124148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124144u;
        // 0x124148: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12414Cu;
        goto label_12414c;
    }
    ctx->pc = 0x124144u;
    {
        const bool branch_taken_0x124144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124144u;
        // 0x124148: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124144) {
            ctx->pc = 0x124158u;
            goto label_124158;
        }
    }
    ctx->pc = 0x12414Cu;
label_12414c:
    // 0x12414c: 0x10000004  b           . + 4 + (0x4 << 2)
label_124150:
    if (ctx->pc == 0x124150u) {
        ctx->pc = 0x124150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12414Cu;
        // 0x124150: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124154u;
        goto label_124154;
    }
    ctx->pc = 0x12414Cu;
    {
        const bool branch_taken_0x12414c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12414Cu;
        // 0x124150: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12414c) {
            ctx->pc = 0x124160u;
            goto label_124160;
        }
    }
    ctx->pc = 0x124154u;
label_124154:
    // 0x124154: 0x0  nop
    ctx->pc = 0x124154u;
    // NOP
label_124158:
    // 0x124158: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x124158u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_12415c:
    // 0x12415c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x12415cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_124160:
    // 0x124160: 0xae30015c  sw          $s0, 0x15C($s1)
    ctx->pc = 0x124160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 16));
label_124164:
    // 0x124164: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x124164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124168:
    // 0x124168: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12416c:
    // 0x12416c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12416cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_124170:
    // 0x124170: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x124170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_124174:
    // 0x124174: 0x3e00008  jr          $ra
label_124178:
    if (ctx->pc == 0x124178u) {
        ctx->pc = 0x124178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124174u;
        // 0x124178: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12417Cu;
        goto label_fallthrough_0x124174;
    }
    ctx->pc = 0x124174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124174u;
        // 0x124178: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x124174:
    ctx->pc = 0x12417Cu;
}

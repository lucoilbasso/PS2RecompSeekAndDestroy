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

// Function: DrawFunc__9WcSettingP8WcEntity
// Address: 0x1958b8 - 0x195d8c
void DrawFunc__9WcSettingP8WcEntity_0x1958b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawFunc__9WcSettingP8WcEntity_0x1958b8");
#endif

    switch (ctx->pc) {
        case 0x195928u: goto label_195928;
        case 0x195930u: goto label_195930;
        case 0x195954u: goto label_195954;
        case 0x195a5cu: goto label_195a5c;
        case 0x195c78u: goto label_195c78;
        case 0x195c8cu: goto label_195c8c;
        case 0x195c98u: goto label_195c98;
        case 0x195ca0u: goto label_195ca0;
        case 0x195cd0u: goto label_195cd0;
        case 0x195cf8u: goto label_195cf8;
        case 0x195d00u: goto label_195d00;
        case 0x195d10u: goto label_195d10;
        case 0x195d60u: goto label_195d60;
        default: break;
    }

    ctx->pc = 0x1958b8u;

    // 0x1958b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1958b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1958bc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1958bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1958c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1958c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1958c4: 0x2452d650  addiu       $s2, $v0, -0x29B0
    ctx->pc = 0x1958c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956624));
    // 0x1958c8: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x1958c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x1958cc: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1958ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1958d0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1958d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1958d4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1958d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1958d8: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x1958d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1958dc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1958dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1958e0: 0x26d30150  addiu       $s3, $s6, 0x150
    ctx->pc = 0x1958e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 336));
    // 0x1958e4: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1958e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1958e8: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1958e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1958ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1958ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1958f0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1958f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1958f4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1958f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1958f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1958F8u;
    {
        const bool branch_taken_0x1958f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1958FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1958F8u;
        // 0x1958fc: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1958f8) {
            ctx->pc = 0x195920u;
            goto label_195920;
        }
    }
    ctx->pc = 0x195900u;
    // 0x195900: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x195900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x195904: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x195904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x195908: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x195908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x19590c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x19590cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x195910: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x195910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x195914: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x195914u;
    {
        const bool branch_taken_0x195914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195914u;
        // 0x195918: 0xae430098  sw          $v1, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195914) {
            ctx->pc = 0x195954u;
            goto label_195954;
        }
    }
    ctx->pc = 0x19591Cu;
    // 0x19591c: 0x0  nop
    ctx->pc = 0x19591cu;
    // NOP
label_195920:
    // 0x195920: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x195920u;
    SET_GPR_U32(ctx, 31, 0x195928u);
    ctx->pc = 0x195924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195920u;
    // 0x195924: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x195920u, 0x195928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195928u;
label_195928:
    // 0x195928: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x195928u;
    SET_GPR_U32(ctx, 31, 0x195930u);
    ctx->pc = 0x19592Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195928u;
    // 0x19592c: 0x8e440088  lw          $a0, 0x88($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x195928u, 0x195930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195930u;
label_195930:
    // 0x195930: 0x8e50008c  lw          $s0, 0x8C($s2)
    ctx->pc = 0x195930u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x195934: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x195934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x195938: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x195938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x19593c: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x19593cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x195940: 0x8e440088  lw          $a0, 0x88($s2)
    ctx->pc = 0x195940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x195944: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x195944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x195948: 0xae45008c  sw          $a1, 0x8C($s2)
    ctx->pc = 0x195948u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 5));
    // 0x19594c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x19594Cu;
    SET_GPR_U32(ctx, 31, 0x195954u);
    ctx->pc = 0x195950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19594Cu;
    // 0x195950: 0xae420080  sw          $v0, 0x80($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x19594Cu, 0x195954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195954u;
label_195954:
    // 0x195954: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x195954u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195958: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x195958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x19595c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x19595cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x195960: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x195960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x195964: 0x2484ebb0  addiu       $a0, $a0, -0x1450
    ctx->pc = 0x195964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962096));
    // 0x195968: 0x8ef40164  lw          $s4, 0x164($s7)
    ctx->pc = 0x195968u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 356)));
    // 0x19596c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19596cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195970: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x195970u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
    // 0x195974: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x195974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195978: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x195978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x19597c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x19597cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EBB0u));
    // 0x195980: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x195980u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EBC0u));
    // 0x195984: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x195984u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EBD0u));
    // 0x195988: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x195988u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EBE0u));
    // 0x19598c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x19598cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x195990: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x195990u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x195994: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x195994u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x195998: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x195998u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x19599c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19599cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1959a0: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x1959a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1959a4: 0x2442eb70  addiu       $v0, $v0, -0x1490
    ctx->pc = 0x1959a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962032));
    // 0x1959a8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1959a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EB70u));
    // 0x1959ac: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1959acu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EB80u));
    // 0x1959b0: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1959b0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EB90u));
    // 0x1959b4: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x1959b4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EBA0u));
    // 0x1959b8: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1959b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1959bc: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x1959bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1959c0: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x1959c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1959c4: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x1959c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1959c8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1959c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1959cc: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x1959ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x1959d0: 0x2463ec70  addiu       $v1, $v1, -0x1390
    ctx->pc = 0x1959d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962288));
    // 0x1959d4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1959d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EC70u));
    // 0x1959d8: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x1959d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EC80u));
    // 0x1959dc: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x1959dcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EC90u));
    // 0x1959e0: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x1959e0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21ECA0u));
    // 0x1959e4: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1959e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1959e8: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x1959e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1959ec: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x1959ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1959f0: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x1959f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1959f4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1959f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1959f8: 0x26030110  addiu       $v1, $s0, 0x110
    ctx->pc = 0x1959f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1959fc: 0x2442ecb0  addiu       $v0, $v0, -0x1350
    ctx->pc = 0x1959fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962352));
    // 0x195a00: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x195a00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21ECB0u));
    // 0x195a04: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x195a04u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21ECC0u));
    // 0x195a08: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x195a08u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21ECD0u));
    // 0x195a0c: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x195a0cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21ECE0u));
    // 0x195a10: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x195a10u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x195a14: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x195a14u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x195a18: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x195a18u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x195a1c: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x195a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x195a20: 0x8ee401c4  lw          $a0, 0x1C4($s7)
    ctx->pc = 0x195a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 452)));
    // 0x195a24: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x195A24u;
    {
        const bool branch_taken_0x195a24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x195A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A24u;
        // 0x195a28: 0xae00022c  sw          $zero, 0x22C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a24) {
            ctx->pc = 0x195A60u;
            goto label_195a60;
        }
    }
    ctx->pc = 0x195A2Cu;
    // 0x195a2c: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x195a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x195a30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x195a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195a34: 0x26020340  addiu       $v0, $s0, 0x340
    ctx->pc = 0x195a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
    // 0x195a38: 0x26c300d0  addiu       $v1, $s6, 0xD0
    ctx->pc = 0x195a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 208));
    // 0x195a3c: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x195a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x195a40: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x195a40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x195a44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x195a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195a48: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x195a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x195a4c: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x195a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x195a50: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x195a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x195a54: 0xc0622b6  jal         func_188AD8
    ctx->pc = 0x195A54u;
    SET_GPR_U32(ctx, 31, 0x195A5Cu);
    ctx->pc = 0x195A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195A54u;
    // 0x195a58: 0x26070190  addiu       $a3, $s0, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188AD8u, 0x195A54u, 0x195A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195A5Cu;
label_195a5c:
    // 0x195a5c: 0xae02022c  sw          $v0, 0x22C($s0)
    ctx->pc = 0x195a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 2));
label_195a60:
    // 0x195a60: 0xde630030  ld          $v1, 0x30($s3)
    ctx->pc = 0x195a60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x195a64: 0x3c014348  lui         $at, 0x4348
    ctx->pc = 0x195a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17224 << 16));
    // 0x195a68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x195a68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x195a6c: 0xfe030220  sd          $v1, 0x220($s0)
    ctx->pc = 0x195a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 544), GPR_U64(ctx, 3));
    // 0x195a70: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x195a70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x195a74: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x195a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x195a78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x195A78u;
    {
        const bool branch_taken_0x195a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x195A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A78u;
        // 0x195a7c: 0xc6800154  lwc1        $f0, 0x154($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a78) {
            ctx->pc = 0x195A88u;
            goto label_195a88;
        }
    }
    ctx->pc = 0x195A80u;
    // 0x195a80: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x195a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x195a84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x195a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_195a88:
    // 0x195a88: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x195a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x195a8c: 0xae22021c  sw          $v0, 0x21C($s1)
    ctx->pc = 0x195a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 540), GPR_U32(ctx, 2));
    // 0x195a90: 0x262501e0  addiu       $a1, $s1, 0x1E0
    ctx->pc = 0x195a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
    // 0x195a94: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x195a94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x195a98: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x195a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x195a9c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x195a9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x195aa0: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x195aa0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x195aa4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x195aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x195aa8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x195aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x195aac: 0x34638002  ori         $v1, $v1, 0x8002
    ctx->pc = 0x195aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32770);
    // 0x195ab0: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x195ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x195ab4: 0x24060412  addiu       $a2, $zero, 0x412
    ctx->pc = 0x195ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x195ab8: 0x3c07302e  lui         $a3, 0x302E
    ctx->pc = 0x195ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)12334 << 16));
    // 0x195abc: 0x34e7c000  ori         $a3, $a3, 0xC000
    ctx->pc = 0x195abcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)49152);
    // 0x195ac0: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x195ac0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x195ac4: 0x34e78000  ori         $a3, $a3, 0x8000
    ctx->pc = 0x195ac4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x195ac8: 0x24080060  addiu       $t0, $zero, 0x60
    ctx->pc = 0x195ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x195acc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x195accu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x195ad0: 0x240a0368  addiu       $t2, $zero, 0x368
    ctx->pc = 0x195ad0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 872));
    // 0x195ad4: 0x260c0240  addiu       $t4, $s0, 0x240
    ctx->pc = 0x195ad4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x195ad8: 0xe6210228  swc1        $f1, 0x228($s1)
    ctx->pc = 0x195ad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 552), bits); }
    // 0x195adc: 0xc6800180  lwc1        $f0, 0x180($s4)
    ctx->pc = 0x195adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195ae0: 0xe6200210  swc1        $f0, 0x210($s1)
    ctx->pc = 0x195ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 528), bits); }
    // 0x195ae4: 0xc681017c  lwc1        $f1, 0x17C($s4)
    ctx->pc = 0x195ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195ae8: 0xe6210214  swc1        $f1, 0x214($s1)
    ctx->pc = 0x195ae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 532), bits); }
    // 0x195aec: 0x92620007  lbu         $v0, 0x7($s3)
    ctx->pc = 0x195aecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
    // 0x195af0: 0xfe2301d0  sd          $v1, 0x1D0($s1)
    ctx->pc = 0x195af0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 464), GPR_U64(ctx, 3));
    // 0x195af4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x195af4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195af8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x195af8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x195afc: 0xfe2401d8  sd          $a0, 0x1D8($s1)
    ctx->pc = 0x195afcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 472), GPR_U64(ctx, 4));
    // 0x195b00: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x195b00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x195b04: 0xe6200218  swc1        $f0, 0x218($s1)
    ctx->pc = 0x195b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 536), bits); }
    // 0x195b08: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x195b08u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x195b0c: 0xfca70000  sd          $a3, 0x0($a1)
    ctx->pc = 0x195b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 7));
    // 0x195b10: 0xfe2801f0  sd          $t0, 0x1F0($s1)
    ctx->pc = 0x195b10u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 496), GPR_U64(ctx, 8));
    // 0x195b14: 0xfe2901f8  sd          $t1, 0x1F8($s1)
    ctx->pc = 0x195b14u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 504), GPR_U64(ctx, 9));
    // 0x195b18: 0x8e840158  lw          $a0, 0x158($s4)
    ctx->pc = 0x195b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 344)));
    // 0x195b1c: 0x8ec2019c  lw          $v0, 0x19C($s6)
    ctx->pc = 0x195b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 412)));
    // 0x195b20: 0x8ec30198  lw          $v1, 0x198($s6)
    ctx->pc = 0x195b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 408)));
    // 0x195b24: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x195b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x195b28: 0xfe290208  sd          $t1, 0x208($s1)
    ctx->pc = 0x195b28u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 520), GPR_U64(ctx, 9));
    // 0x195b2c: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x195b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x195b30: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x195b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x195b34: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x195b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x195b38: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x195b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x195b3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x195b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x195b40: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x195b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x195b44: 0xfe230200  sd          $v1, 0x200($s1)
    ctx->pc = 0x195b44u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 512), GPR_U64(ctx, 3));
    // 0x195b48: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x195b48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x195b4c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x195b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x195b50: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x195B50u;
    {
        const bool branch_taken_0x195b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B50u;
        // 0x195b54: 0x260b0250  addiu       $t3, $s0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195b50) {
            ctx->pc = 0x195B98u;
            goto label_195b98;
        }
    }
    ctx->pc = 0x195B58u;
    // 0x195b58: 0x92620007  lbu         $v0, 0x7($s3)
    ctx->pc = 0x195b58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
    // 0x195b5c: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x195b5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x195b60: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x195b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x195b64: 0x26030260  addiu       $v1, $s0, 0x260
    ctx->pc = 0x195b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x195b68: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x195b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x195b6c: 0xfd640008  sd          $a0, 0x8($t3)
    ctx->pc = 0x195b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 4));
    // 0x195b70: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x195b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x195b74: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x195b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x195b78: 0xfd620000  sd          $v0, 0x0($t3)
    ctx->pc = 0x195b78u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 2));
    // 0x195b7c: 0x26090270  addiu       $t1, $s0, 0x270
    ctx->pc = 0x195b7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    // 0x195b80: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x195b80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x195b84: 0x92640003  lbu         $a0, 0x3($s3)
    ctx->pc = 0x195b84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x195b88: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x195b88u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x195b8c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x195b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x195b90: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x195B90u;
    {
        const bool branch_taken_0x195b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B90u;
        // 0x195b94: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195b90) {
            ctx->pc = 0x195BC8u;
            goto label_195bc8;
        }
    }
    ctx->pc = 0x195B98u;
label_195b98:
    // 0x195b98: 0x26050260  addiu       $a1, $s0, 0x260
    ctx->pc = 0x195b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x195b9c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x195b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x195ba0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x195ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x195ba4: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x195ba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x195ba8: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x195ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x195bac: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x195bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x195bb0: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x195bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x195bb4: 0xfd620008  sd          $v0, 0x8($t3)
    ctx->pc = 0x195bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 2));
    // 0x195bb8: 0xfd640000  sd          $a0, 0x0($t3)
    ctx->pc = 0x195bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 4));
    // 0x195bbc: 0x26090270  addiu       $t1, $s0, 0x270
    ctx->pc = 0x195bbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    // 0x195bc0: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x195bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x195bc4: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x195bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_195bc8:
    // 0x195bc8: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x195bc8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195bcc: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x195bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x195bd0: 0x3442130d  ori         $v0, $v0, 0x130D
    ctx->pc = 0x195bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4877);
    // 0x195bd4: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x195bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x195bd8: 0xfd620000  sd          $v0, 0x0($t3)
    ctx->pc = 0x195bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 2));
    // 0x195bdc: 0xfd630008  sd          $v1, 0x8($t3)
    ctx->pc = 0x195bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 3));
    // 0x195be0: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x195be0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x195be4: 0x27858c90  addiu       $a1, $gp, -0x7370
    ctx->pc = 0x195be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
    // 0x195be8: 0x27838c80  addiu       $v1, $gp, -0x7380
    ctx->pc = 0x195be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937728));
    // 0x195bec: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x195becu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x195bf0: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x195bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195bf4: 0x2406004e  addiu       $a2, $zero, 0x4E
    ctx->pc = 0x195bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x195bf8: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x195bf8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x195bfc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x195bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x195c00: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x195c00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195c04: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x195c04u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x195c08: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x195c08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x195c0c: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x195c0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x195c10: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x195c10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x195c14: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x195c14u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x195c18: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x195c18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x195c1c: 0x6337c  dsll32      $a2, $a2, 13
    ctx->pc = 0x195c1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 13));
    // 0x195c20: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x195c20u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x195c24: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x195c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x195c28: 0x16c3823  subu        $a3, $t3, $t4
    ctx->pc = 0x195c28u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x195c2c: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x195c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x195c30: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x195c30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x195c34: 0x73902  srl         $a3, $a3, 4
    ctx->pc = 0x195c34u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x195c38: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x195c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x195c3c: 0xfd280008  sd          $t0, 0x8($t1)
    ctx->pc = 0x195c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 8));
    // 0x195c40: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x195c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x195c44: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x195c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x195c48: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x195c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x195c4c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x195c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x195c50: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x195c50u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x195c54: 0xfd240000  sd          $a0, 0x0($t1)
    ctx->pc = 0x195c54u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 4));
    // 0x195c58: 0xfd850008  sd          $a1, 0x8($t4)
    ctx->pc = 0x195c58u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 5));
    // 0x195c5c: 0xfd830000  sd          $v1, 0x0($t4)
    ctx->pc = 0x195c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 3));
    // 0x195c60: 0x8ee201c4  lw          $v0, 0x1C4($s7)
    ctx->pc = 0x195c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 452)));
    // 0x195c64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x195C64u;
    {
        const bool branch_taken_0x195c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C64u;
        // 0x195c68: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195c64) {
            ctx->pc = 0x195C80u;
            goto label_195c80;
        }
    }
    ctx->pc = 0x195C6Cu;
    // 0x195c6c: 0x3c04001e  lui         $a0, 0x1E
    ctx->pc = 0x195c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
    // 0x195c70: 0xc0663b6  jal         func_198ED8
    ctx->pc = 0x195C70u;
    SET_GPR_U32(ctx, 31, 0x195C78u);
    ctx->pc = 0x195C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195C70u;
    // 0x195c74: 0x248478c0  addiu       $a0, $a0, 0x78C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198ED8u, 0x195C70u, 0x195C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195C78u;
label_195c78:
    // 0x195c78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x195C78u;
    {
        const bool branch_taken_0x195c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C78u;
        // 0x195c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195c78) {
            ctx->pc = 0x195C90u;
            goto label_195c90;
        }
    }
    ctx->pc = 0x195C80u;
label_195c80:
    // 0x195c80: 0x3c04001e  lui         $a0, 0x1E
    ctx->pc = 0x195c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
    // 0x195c84: 0xc0663b6  jal         func_198ED8
    ctx->pc = 0x195C84u;
    SET_GPR_U32(ctx, 31, 0x195C8Cu);
    ctx->pc = 0x195C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195C84u;
    // 0x195c88: 0x24845200  addiu       $a0, $a0, 0x5200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198ED8u, 0x195C84u, 0x195C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195C8Cu;
label_195c8c:
    // 0x195c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_195c90:
    // 0x195c90: 0xc0663f0  jal         func_198FC0
    ctx->pc = 0x195C90u;
    SET_GPR_U32(ctx, 31, 0x195C98u);
    ctx->pc = 0x195C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195C90u;
    // 0x195c94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198FC0u, 0x195C90u, 0x195C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195C98u;
label_195c98:
    // 0x195c98: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x195c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x195c9c: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x195c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_195ca0:
    // 0x195ca0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x195ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x195ca4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x195ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x195ca8: 0x0  nop
    ctx->pc = 0x195ca8u;
    // NOP
    // 0x195cac: 0x0  nop
    ctx->pc = 0x195cacu;
    // NOP
    // 0x195cb0: 0x0  nop
    ctx->pc = 0x195cb0u;
    // NOP
    // 0x195cb4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x195CB4u;
    {
        const bool branch_taken_0x195cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195cb4) {
            ctx->pc = 0x195CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195ca0;
        }
    }
    ctx->pc = 0x195CBCu;
    // 0x195cbc: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x195cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x195cc0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x195CC0u;
    {
        const bool branch_taken_0x195cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195cc0) {
            ctx->pc = 0x195CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195CC0u;
            // 0x195cc4: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195D08u;
            goto label_195d08;
        }
    }
    ctx->pc = 0x195CC8u;
    // 0x195cc8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x195CC8u;
    SET_GPR_U32(ctx, 31, 0x195CD0u);
    ctx->pc = 0x195CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195CC8u;
    // 0x195ccc: 0x8e440088  lw          $a0, 0x88($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x195CC8u, 0x195CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195CD0u;
label_195cd0:
    // 0x195cd0: 0x8e43008c  lw          $v1, 0x8C($s2)
    ctx->pc = 0x195cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x195cd4: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x195cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x195cd8: 0x8e450080  lw          $a1, 0x80($s2)
    ctx->pc = 0x195cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x195cdc: 0xaea30018  sw          $v1, 0x18($s5)
    ctx->pc = 0x195cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 3));
    // 0x195ce0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x195ce0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x195ce4: 0x8e440088  lw          $a0, 0x88($s2)
    ctx->pc = 0x195ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x195ce8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x195ce8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x195cec: 0xae450080  sw          $a1, 0x80($s2)
    ctx->pc = 0x195cecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 5));
    // 0x195cf0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x195CF0u;
    SET_GPR_U32(ctx, 31, 0x195CF8u);
    ctx->pc = 0x195CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195CF0u;
    // 0x195cf4: 0xae55008c  sw          $s5, 0x8C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x195CF0u, 0x195CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195CF8u;
label_195cf8:
    // 0x195cf8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x195CF8u;
    SET_GPR_U32(ctx, 31, 0x195D00u);
    ctx->pc = 0x195CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195CF8u;
    // 0x195cfc: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x195CF8u, 0x195D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195D00u;
label_195d00:
    // 0x195d00: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x195D00u;
    {
        const bool branch_taken_0x195d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D00u;
        // 0x195d04: 0x8f838c50  lw          $v1, -0x73B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195d00) {
            ctx->pc = 0x195D30u;
            goto label_195d30;
        }
    }
    ctx->pc = 0x195D08u;
label_195d08:
    // 0x195d08: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x195d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x195d0c: 0x0  nop
    ctx->pc = 0x195d0cu;
    // NOP
label_195d10:
    // 0x195d10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x195d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x195d14: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x195d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x195d18: 0x0  nop
    ctx->pc = 0x195d18u;
    // NOP
    // 0x195d1c: 0x0  nop
    ctx->pc = 0x195d1cu;
    // NOP
    // 0x195d20: 0x0  nop
    ctx->pc = 0x195d20u;
    // NOP
    // 0x195d24: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x195D24u;
    {
        const bool branch_taken_0x195d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195d24) {
            ctx->pc = 0x195D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195d10;
        }
    }
    ctx->pc = 0x195D2Cu;
    // 0x195d2c: 0x8f838c50  lw          $v1, -0x73B0($gp)
    ctx->pc = 0x195d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
label_195d30:
    // 0x195d30: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x195d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x195d34: 0x8ec50244  lw          $a1, 0x244($s6)
    ctx->pc = 0x195d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 580)));
    // 0x195d38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x195d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x195d3c: 0xaf808c74  sw          $zero, -0x738C($gp)
    ctx->pc = 0x195d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 0));
    // 0x195d40: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x195d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x195d44: 0x8f848c68  lw          $a0, -0x7398($gp)
    ctx->pc = 0x195d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x195d48: 0x34420145  ori         $v0, $v0, 0x145
    ctx->pc = 0x195d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)325);
    // 0x195d4c: 0xac650030  sw          $a1, 0x30($v1)
    ctx->pc = 0x195d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 5));
    // 0x195d50: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x195d50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x195d54: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x195d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x195d58: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x195D58u;
    SET_GPR_U32(ctx, 31, 0x195D60u);
    ctx->pc = 0x195D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195D58u;
    // 0x195d5c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x195D58u, 0x195D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195D60u;
label_195d60:
    // 0x195d60: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x195d60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195d64: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x195d64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x195d68: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x195d68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195d6c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x195d6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x195d70: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x195d70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195d74: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x195d74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x195d78: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x195d78u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x195d7c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x195d7cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x195d80: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x195d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x195d84: 0x3e00008  jr          $ra
    ctx->pc = 0x195D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D84u;
        // 0x195d88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195D8Cu;
}

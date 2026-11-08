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

// Function: ApCqpart_SDWing_Com_Proc__FP9ApcCqpartP17CQ2PartsSequencerP11_parts_ctrl
// Address: 0x167980 - 0x169110
void ApCqpart_SDWing_Com_Proc__FP9ApcCqpartP17CQ2PartsSequencerP11_parts_ctrl_0x167980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCqpart_SDWing_Com_Proc__FP9ApcCqpartP17CQ2PartsSequencerP11_parts_ctrl_0x167980");
#endif

    switch (ctx->pc) {
        case 0x167a48u: goto label_167a48;
        case 0x167a98u: goto label_167a98;
        case 0x167b10u: goto label_167b10;
        case 0x167b84u: goto label_167b84;
        case 0x167becu: goto label_167bec;
        case 0x167c80u: goto label_167c80;
        case 0x167cf8u: goto label_167cf8;
        case 0x167d2cu: goto label_167d2c;
        case 0x167d74u: goto label_167d74;
        case 0x167dc4u: goto label_167dc4;
        case 0x167e0cu: goto label_167e0c;
        case 0x167e40u: goto label_167e40;
        case 0x167e74u: goto label_167e74;
        case 0x167eb8u: goto label_167eb8;
        case 0x167f2cu: goto label_167f2c;
        case 0x167f60u: goto label_167f60;
        case 0x167fa8u: goto label_167fa8;
        case 0x167ff8u: goto label_167ff8;
        case 0x168040u: goto label_168040;
        case 0x168074u: goto label_168074;
        case 0x168108u: goto label_168108;
        case 0x16817cu: goto label_16817c;
        case 0x1681b0u: goto label_1681b0;
        case 0x1681f8u: goto label_1681f8;
        case 0x168248u: goto label_168248;
        case 0x168290u: goto label_168290;
        case 0x1682c4u: goto label_1682c4;
        case 0x1682ecu: goto label_1682ec;
        case 0x1682f8u: goto label_1682f8;
        case 0x168340u: goto label_168340;
        case 0x1683b4u: goto label_1683b4;
        case 0x1683e8u: goto label_1683e8;
        case 0x168430u: goto label_168430;
        case 0x168480u: goto label_168480;
        case 0x1684c8u: goto label_1684c8;
        case 0x1684fcu: goto label_1684fc;
        case 0x168590u: goto label_168590;
        case 0x168604u: goto label_168604;
        case 0x168638u: goto label_168638;
        case 0x168680u: goto label_168680;
        case 0x1686d0u: goto label_1686d0;
        case 0x168718u: goto label_168718;
        case 0x16874cu: goto label_16874c;
        case 0x168774u: goto label_168774;
        case 0x1687d8u: goto label_1687d8;
        case 0x16884cu: goto label_16884c;
        case 0x168880u: goto label_168880;
        case 0x1688c8u: goto label_1688c8;
        case 0x168918u: goto label_168918;
        case 0x168960u: goto label_168960;
        case 0x168994u: goto label_168994;
        case 0x1689bcu: goto label_1689bc;
        case 0x168a20u: goto label_168a20;
        case 0x168a94u: goto label_168a94;
        case 0x168ac8u: goto label_168ac8;
        case 0x168b10u: goto label_168b10;
        case 0x168b60u: goto label_168b60;
        case 0x168ba8u: goto label_168ba8;
        case 0x168bdcu: goto label_168bdc;
        case 0x168c04u: goto label_168c04;
        case 0x168c68u: goto label_168c68;
        case 0x168cdcu: goto label_168cdc;
        case 0x168d10u: goto label_168d10;
        case 0x168d58u: goto label_168d58;
        case 0x168da8u: goto label_168da8;
        case 0x168df0u: goto label_168df0;
        case 0x168e24u: goto label_168e24;
        case 0x168e4cu: goto label_168e4c;
        case 0x168e84u: goto label_168e84;
        case 0x168e90u: goto label_168e90;
        case 0x168ed0u: goto label_168ed0;
        case 0x168f44u: goto label_168f44;
        case 0x168f78u: goto label_168f78;
        case 0x168fc0u: goto label_168fc0;
        case 0x169010u: goto label_169010;
        case 0x169058u: goto label_169058;
        case 0x16908cu: goto label_16908c;
        case 0x1690d0u: goto label_1690d0;
        default: break;
    }

    ctx->pc = 0x167980u;

    // 0x167980: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x167980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
    // 0x167984: 0xc78c83ec  lwc1        $f12, -0x7C14($gp)
    ctx->pc = 0x167984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x167988: 0xffb30248  sd          $s3, 0x248($sp)
    ctx->pc = 0x167988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 584), GPR_U64(ctx, 19));
    // 0x16798c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x16798cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167990: 0xffb50258  sd          $s5, 0x258($sp)
    ctx->pc = 0x167990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 600), GPR_U64(ctx, 21));
    // 0x167994: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x167994u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167998: 0xffb60260  sd          $s6, 0x260($sp)
    ctx->pc = 0x167998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 22));
    // 0x16799c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x16799cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1679a0: 0xffb00230  sd          $s0, 0x230($sp)
    ctx->pc = 0x1679a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 16));
    // 0x1679a4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1679a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1679a8: 0xffb10238  sd          $s1, 0x238($sp)
    ctx->pc = 0x1679a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 568), GPR_U64(ctx, 17));
    // 0x1679ac: 0xffb20240  sd          $s2, 0x240($sp)
    ctx->pc = 0x1679acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 18));
    // 0x1679b0: 0xffb40250  sd          $s4, 0x250($sp)
    ctx->pc = 0x1679b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 20));
    // 0x1679b4: 0xffb70268  sd          $s7, 0x268($sp)
    ctx->pc = 0x1679b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 23));
    // 0x1679b8: 0xffbe0270  sd          $fp, 0x270($sp)
    ctx->pc = 0x1679b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 30));
    // 0x1679bc: 0xffbf0278  sd          $ra, 0x278($sp)
    ctx->pc = 0x1679bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 31));
    // 0x1679c0: 0xe7b50288  swc1        $f21, 0x288($sp)
    ctx->pc = 0x1679c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
    // 0x1679c4: 0xe7b40280  swc1        $f20, 0x280($sp)
    ctx->pc = 0x1679c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
    // 0x1679c8: 0x8ec41244  lw          $a0, 0x1244($s6)
    ctx->pc = 0x1679c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4676)));
    // 0x1679cc: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1679ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1679d0: 0x41083  sra         $v0, $a0, 2
    ctx->pc = 0x1679d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 2));
    // 0x1679d4: 0x3302b  sltu        $a2, $zero, $v1
    ctx->pc = 0x1679d4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1679d8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1679d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1679dc: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x1679dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1679e0: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x1679e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1679e4: 0x70001030  pmfhl.lw    $v0
    ctx->pc = 0x1679e4u;
    SET_GPR_VEC(ctx, 2, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x1679e8: 0x213fb  dsra        $v0, $v0, 15
    ctx->pc = 0x1679e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 15);
    // 0x1679ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1679ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1679f0: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x1679f0u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1679f4: 0x23800  sll         $a3, $v0, 0
    ctx->pc = 0x1679f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x1679f8: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x1679f8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1679fc: 0xafa701e0  sw          $a3, 0x1E0($sp)
    ctx->pc = 0x1679fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 7));
    // 0x167a00: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x167a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x167a04: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x167a04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x167a08: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x167a08u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x167a0c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x167a0cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x167a10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167a14: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x167a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x167a18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x167a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x167a1c: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x167a1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x167a20: 0x104005ad  beqz        $v0, . + 4 + (0x5AD << 2)
    ctx->pc = 0x167A20u;
    {
        const bool branch_taken_0x167a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A20u;
        // 0x167a24: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x167a20) {
            ctx->pc = 0x1690D8u;
            goto label_1690d8;
        }
    }
    ctx->pc = 0x167A28u;
    // 0x167a28: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x167a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x167a2c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x167a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x167a30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x167a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167a34: 0x8c637250  lw          $v1, 0x7250($v1)
    ctx->pc = 0x167a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29264)));
    // 0x167a38: 0x600008  jr          $v1
    ctx->pc = 0x167A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167A40u: goto label_167a40;
            case 0x167C30u: goto label_167c30;
            case 0x1680B8u: goto label_1680b8;
            case 0x168540u: goto label_168540;
            case 0x168780u: goto label_168780;
            case 0x1689C8u: goto label_1689c8;
            case 0x168C10u: goto label_168c10;
            case 0x168E70u: goto label_168e70;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167A38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x167A40u;
label_167a40:
    // 0x167a40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x167a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167a44: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x167a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_167a48:
    // 0x167a48: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x167a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x167a4c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x167a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x167a50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x167a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x167a54: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x167a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x167a58: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x167a58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x167a5c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x167a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x167a60: 0x2883000c  slti        $v1, $a0, 0xC
    ctx->pc = 0x167a60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x167a64: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x167A64u;
    {
        const bool branch_taken_0x167a64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x167A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A64u;
        // 0x167a68: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167a64) {
            ctx->pc = 0x167A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167a48;
        }
    }
    ctx->pc = 0x167A6Cu;
    // 0x167a6c: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x167a6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167a70: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x167a70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167a74: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x167a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x167a78: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x167a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x167a7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x167a7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167a80: 0x18600065  blez        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x167A80u;
    {
        const bool branch_taken_0x167a80 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x167A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A80u;
        // 0x167a84: 0x24500030  addiu       $s0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167a80) {
            ctx->pc = 0x167C18u;
            goto label_167c18;
        }
    }
    ctx->pc = 0x167A88u;
    // 0x167a88: 0xc79483f0  lwc1        $f20, -0x7C10($gp)
    ctx->pc = 0x167a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x167a8c: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x167a8cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x167a90: 0x26720018  addiu       $s2, $s3, 0x18
    ctx->pc = 0x167a90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x167a94: 0x0  nop
    ctx->pc = 0x167a94u;
    // NOP
label_167a98:
    // 0x167a98: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x167a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x167a9c: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x167a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x167aa0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x167aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167aa4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x167aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167aa8: 0x50800051  beql        $a0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x167AA8u;
    {
        const bool branch_taken_0x167aa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x167aa8) {
            ctx->pc = 0x167AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167AA8u;
            // 0x167aac: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167BF0u;
            goto label_167bf0;
        }
    }
    ctx->pc = 0x167AB0u;
    // 0x167ab0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x167ab0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x167ab4: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x167ab4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x167ab8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x167ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x167abc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x167abcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167ac0: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x167ac0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x167ac4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x167ac4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167ac8: 0x4a0002ff  vnop
    ctx->pc = 0x167ac8u;
    // NOP operation, no action needed for VU0
    // 0x167acc: 0x4a0002ff  vnop
    ctx->pc = 0x167accu;
    // NOP operation, no action needed for VU0
    // 0x167ad0: 0x4a0002ff  vnop
    ctx->pc = 0x167ad0u;
    // NOP operation, no action needed for VU0
    // 0x167ad4: 0x4a0002ff  vnop
    ctx->pc = 0x167ad4u;
    // NOP operation, no action needed for VU0
    // 0x167ad8: 0x4a0002ff  vnop
    ctx->pc = 0x167ad8u;
    // NOP operation, no action needed for VU0
    // 0x167adc: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x167adcu;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x167ae0: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x167ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x167ae4: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x167ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x167ae8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x167AE8u;
    {
        const bool branch_taken_0x167ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167AE8u;
        // 0x167aec: 0x26030010  addiu       $v1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ae8) {
            ctx->pc = 0x167B14u;
            goto label_167b14;
        }
    }
    ctx->pc = 0x167AF0u;
    // 0x167af0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x167af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x167af4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x167af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167af8: 0x8ec201b4  lw          $v0, 0x1B4($s6)
    ctx->pc = 0x167af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 436)));
    // 0x167afc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x167afcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167b00: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x167b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x167b04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x167b08: 0xc0618c2  jal         func_186308
    ctx->pc = 0x167B08u;
    SET_GPR_U32(ctx, 31, 0x167B10u);
    ctx->pc = 0x167B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167B08u;
    // 0x167b0c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x167B08u, 0x167B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167B10u;
label_167b10:
    // 0x167b10: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x167b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_167b14:
    // 0x167b14: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x167b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x167b18: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x167b18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167b1c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x167b1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167b20: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x167b20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167b24: 0x4a0002ff  vnop
    ctx->pc = 0x167b24u;
    // NOP operation, no action needed for VU0
    // 0x167b28: 0x4a0002ff  vnop
    ctx->pc = 0x167b28u;
    // NOP operation, no action needed for VU0
    // 0x167b2c: 0x4a0002ff  vnop
    ctx->pc = 0x167b2cu;
    // NOP operation, no action needed for VU0
    // 0x167b30: 0x4a0002ff  vnop
    ctx->pc = 0x167b30u;
    // NOP operation, no action needed for VU0
    // 0x167b34: 0x4a0002ff  vnop
    ctx->pc = 0x167b34u;
    // NOP operation, no action needed for VU0
    // 0x167b38: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x167b38u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x167b3c: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x167b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x167b40: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x167b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x167b44: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x167B44u;
    {
        const bool branch_taken_0x167b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B44u;
        // 0x167b48: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167b44) {
            ctx->pc = 0x167B88u;
            goto label_167b88;
        }
    }
    ctx->pc = 0x167B4Cu;
    // 0x167b4c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x167b4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167b50: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x167b50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x167b54: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x167b54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x167b58: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x167b58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167b5c: 0x4be1097f  vftoi15.xyzw $vf1, $vf1
    ctx->pc = 0x167b5cu;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167b60: 0xfae10000  sqc2        $vf1, 0x0($s7)
    ctx->pc = 0x167b60u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x167b64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x167b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167b68: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x167b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x167b6c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x167b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167b70: 0x8ec201b4  lw          $v0, 0x1B4($s6)
    ctx->pc = 0x167b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 436)));
    // 0x167b74: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x167b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x167b78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x167b7c: 0xc0618da  jal         func_186368
    ctx->pc = 0x167B7Cu;
    SET_GPR_U32(ctx, 31, 0x167B84u);
    ctx->pc = 0x167B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167B7Cu;
    // 0x167b80: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x167B7Cu, 0x167B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167B84u;
label_167b84:
    // 0x167b84: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x167b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_167b88:
    // 0x167b88: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x167b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x167b8c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x167b8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167b90: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x167b90u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x167b94: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x167b94u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x167b98: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x167b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x167b9c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x167b9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x167ba0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x167ba0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167ba4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x167ba4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167ba8: 0x4a0002ff  vnop
    ctx->pc = 0x167ba8u;
    // NOP operation, no action needed for VU0
    // 0x167bac: 0x4a0002ff  vnop
    ctx->pc = 0x167bacu;
    // NOP operation, no action needed for VU0
    // 0x167bb0: 0x4a0002ff  vnop
    ctx->pc = 0x167bb0u;
    // NOP operation, no action needed for VU0
    // 0x167bb4: 0x4a0002ff  vnop
    ctx->pc = 0x167bb4u;
    // NOP operation, no action needed for VU0
    // 0x167bb8: 0x4a0002ff  vnop
    ctx->pc = 0x167bb8u;
    // NOP operation, no action needed for VU0
    // 0x167bbc: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x167bbcu;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x167bc0: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x167bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x167bc4: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x167bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x167bc8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x167BC8u;
    {
        const bool branch_taken_0x167bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167bc8) {
            ctx->pc = 0x167BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167BC8u;
            // 0x167bcc: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167BF0u;
            goto label_167bf0;
        }
    }
    ctx->pc = 0x167BD0u;
    // 0x167bd0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x167bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x167bd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x167bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167bd8: 0x8ec201b4  lw          $v0, 0x1B4($s6)
    ctx->pc = 0x167bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 436)));
    // 0x167bdc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x167bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x167be0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x167be4: 0xc0618f2  jal         func_1863C8
    ctx->pc = 0x167BE4u;
    SET_GPR_U32(ctx, 31, 0x167BECu);
    ctx->pc = 0x167BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167BE4u;
    // 0x167be8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x167BE4u, 0x167BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167BECu;
label_167bec:
    // 0x167bec: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x167becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_167bf0:
    // 0x167bf0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x167bf0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x167bf4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x167bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x167bf8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x167bf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x167bfc: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x167bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x167c00: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x167c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x167c04: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x167c04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x167c08: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x167c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x167c0c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x167c0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x167c10: 0x1460ffa1  bnez        $v1, . + 4 + (-0x5F << 2)
    ctx->pc = 0x167C10u;
    {
        const bool branch_taken_0x167c10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x167C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C10u;
        // 0x167c14: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c10) {
            ctx->pc = 0x167A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167a98;
        }
    }
    ctx->pc = 0x167C18u;
label_167c18:
    // 0x167c18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167c1c: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x167c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x167c20: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x167c20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x167c24: 0x1000052c  b           . + 4 + (0x52C << 2)
    ctx->pc = 0x167C24u;
    {
        const bool branch_taken_0x167c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C24u;
        // 0x167c28: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c24) {
            ctx->pc = 0x1690D8u;
            goto label_1690d8;
        }
    }
    ctx->pc = 0x167C2Cu;
    // 0x167c2c: 0x0  nop
    ctx->pc = 0x167c2cu;
    // NOP
label_167c30:
    // 0x167c30: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x167c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x167c34: 0x54400493  bnel        $v0, $zero, . + 4 + (0x493 << 2)
    ctx->pc = 0x167C34u;
    {
        const bool branch_taken_0x167c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167c34) {
            ctx->pc = 0x167C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167C34u;
            // 0x167c38: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168E84u;
            goto label_168e84;
        }
    }
    ctx->pc = 0x167C3Cu;
    // 0x167c3c: 0x10c00526  beqz        $a2, . + 4 + (0x526 << 2)
    ctx->pc = 0x167C3Cu;
    {
        const bool branch_taken_0x167c3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x167C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C3Cu;
        // 0x167c40: 0x2a0f02d  daddu       $fp, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c3c) {
            ctx->pc = 0x1690D8u;
            goto label_1690d8;
        }
    }
    ctx->pc = 0x167C44u;
    // 0x167c44: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x167c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x167c48: 0xafb601e4  sw          $s6, 0x1E4($sp)
    ctx->pc = 0x167c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 22));
    // 0x167c4c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x167c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x167c50: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x167c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x167c54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x167c58: 0xafb301e8  sw          $s3, 0x1E8($sp)
    ctx->pc = 0x167c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 19));
    // 0x167c5c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x167c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x167c60: 0x82a021  addu        $s4, $a0, $v0
    ctx->pc = 0x167c60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x167c64: 0x24910060  addiu       $s1, $a0, 0x60
    ctx->pc = 0x167c64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x167c68: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x167c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x167c6c: 0x18a00081  blez        $a1, . + 4 + (0x81 << 2)
    ctx->pc = 0x167C6Cu;
    {
        const bool branch_taken_0x167c6c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x167C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C6Cu;
        // 0x167c70: 0xafa001ec  sw          $zero, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c6c) {
            ctx->pc = 0x167E74u;
            goto label_167e74;
        }
    }
    ctx->pc = 0x167C74u;
    // 0x167c74: 0xc79483f4  lwc1        $f20, -0x7C0C($gp)
    ctx->pc = 0x167c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x167c78: 0x27b70050  addiu       $s7, $sp, 0x50
    ctx->pc = 0x167c78u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x167c7c: 0x0  nop
    ctx->pc = 0x167c7cu;
    // NOP
label_167c80:
    // 0x167c80: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x167c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x167c84: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x167c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x167c88: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x167c88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x167c8c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x167c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x167c90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x167c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167c94: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x167C94u;
    {
        const bool branch_taken_0x167c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x167C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C94u;
        // 0x167c98: 0x8fa701e8  lw          $a3, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c94) {
            ctx->pc = 0x167E40u;
            goto label_167e40;
        }
    }
    ctx->pc = 0x167C9Cu;
    // 0x167c9c: 0x8fa201e4  lw          $v0, 0x1E4($sp)
    ctx->pc = 0x167c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x167ca0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x167ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x167ca4: 0x8c4301b4  lw          $v1, 0x1B4($v0)
    ctx->pc = 0x167ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 436)));
    // 0x167ca8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x167ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x167cac: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x167cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x167cb0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x167cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167cb4: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x167cb4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167cb8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x167cb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x167cbc: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x167cbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x167cc0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x167cc0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167cc4: 0x4a0002ff  vnop
    ctx->pc = 0x167cc4u;
    // NOP operation, no action needed for VU0
    // 0x167cc8: 0x4a0002ff  vnop
    ctx->pc = 0x167cc8u;
    // NOP operation, no action needed for VU0
    // 0x167ccc: 0x4a0002ff  vnop
    ctx->pc = 0x167cccu;
    // NOP operation, no action needed for VU0
    // 0x167cd0: 0x4a0002ff  vnop
    ctx->pc = 0x167cd0u;
    // NOP operation, no action needed for VU0
    // 0x167cd4: 0x4a0002ff  vnop
    ctx->pc = 0x167cd4u;
    // NOP operation, no action needed for VU0
    // 0x167cd8: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x167cd8u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x167cdc: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x167cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x167ce0: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x167ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x167ce4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x167CE4u;
    {
        const bool branch_taken_0x167ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CE4u;
        // 0x167ce8: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ce4) {
            ctx->pc = 0x167D30u;
            goto label_167d30;
        }
    }
    ctx->pc = 0x167CECu;
    // 0x167cec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x167cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167cf0: 0xc06164c  jal         func_185930
    ctx->pc = 0x167CF0u;
    SET_GPR_U32(ctx, 31, 0x167CF8u);
    ctx->pc = 0x167CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167CF0u;
    // 0x167cf4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x167CF0u, 0x167CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167CF8u;
label_167cf8:
    // 0x167cf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x167cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167cfc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x167cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x167d00: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x167d00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x167d04: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x167d04u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x167d08: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x167d08u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x167d0c: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x167d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x167d10: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x167d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167d14: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x167d14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167d18: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x167d18u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x167d1c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x167d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x167d20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x167d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167d24: 0xc068bdc  jal         func_1A2F70
    ctx->pc = 0x167D24u;
    SET_GPR_U32(ctx, 31, 0x167D2Cu);
    ctx->pc = 0x167D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167D24u;
    // 0x167d28: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F70u, 0x167D24u, 0x167D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167D2Cu;
label_167d2c:
    // 0x167d2c: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x167d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_167d30:
    // 0x167d30: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x167d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x167d34: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x167d34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x167d38: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x167d38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167d3c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x167d3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167d40: 0x4a0002ff  vnop
    ctx->pc = 0x167d40u;
    // NOP operation, no action needed for VU0
    // 0x167d44: 0x4a0002ff  vnop
    ctx->pc = 0x167d44u;
    // NOP operation, no action needed for VU0
    // 0x167d48: 0x4a0002ff  vnop
    ctx->pc = 0x167d48u;
    // NOP operation, no action needed for VU0
    // 0x167d4c: 0x4a0002ff  vnop
    ctx->pc = 0x167d4cu;
    // NOP operation, no action needed for VU0
    // 0x167d50: 0x4a0002ff  vnop
    ctx->pc = 0x167d50u;
    // NOP operation, no action needed for VU0
    // 0x167d54: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x167d54u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x167d58: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x167d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x167d5c: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x167d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x167d60: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x167D60u;
    {
        const bool branch_taken_0x167d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167d60) {
            ctx->pc = 0x167D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167D60u;
            // 0x167d64: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167DC8u;
            goto label_167dc8;
        }
    }
    ctx->pc = 0x167D68u;
    // 0x167d68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x167d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167d6c: 0xc06164c  jal         func_185930
    ctx->pc = 0x167D6Cu;
    SET_GPR_U32(ctx, 31, 0x167D74u);
    ctx->pc = 0x167D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167D6Cu;
    // 0x167d70: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x167D6Cu, 0x167D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167D74u;
label_167d74:
    // 0x167d74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x167d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167d78: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x167d78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x167d7c: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x167d7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x167d80: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x167d80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x167d84: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x167d84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167d88: 0x4be1097f  vftoi15.xyzw $vf1, $vf1
    ctx->pc = 0x167d88u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167d8c: 0xfae10000  sqc2        $vf1, 0x0($s7)
    ctx->pc = 0x167d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x167d90: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x167d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x167d94: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x167d94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x167d98: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x167d98u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x167d9c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x167d9cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x167da0: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x167da0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x167da4: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x167da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x167da8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x167da8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167dac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x167dacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167db0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x167db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167db4: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x167db4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x167db8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x167db8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x167dbc: 0xc068bdc  jal         func_1A2F70
    ctx->pc = 0x167DBCu;
    SET_GPR_U32(ctx, 31, 0x167DC4u);
    ctx->pc = 0x167DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167DBCu;
    // 0x167dc0: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F70u, 0x167DBCu, 0x167DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167DC4u;
label_167dc4:
    // 0x167dc4: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x167dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_167dc8:
    // 0x167dc8: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x167dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x167dcc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x167dccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x167dd0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x167dd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167dd4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x167dd4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167dd8: 0x4a0002ff  vnop
    ctx->pc = 0x167dd8u;
    // NOP operation, no action needed for VU0
    // 0x167ddc: 0x4a0002ff  vnop
    ctx->pc = 0x167ddcu;
    // NOP operation, no action needed for VU0
    // 0x167de0: 0x4a0002ff  vnop
    ctx->pc = 0x167de0u;
    // NOP operation, no action needed for VU0
    // 0x167de4: 0x4a0002ff  vnop
    ctx->pc = 0x167de4u;
    // NOP operation, no action needed for VU0
    // 0x167de8: 0x4a0002ff  vnop
    ctx->pc = 0x167de8u;
    // NOP operation, no action needed for VU0
    // 0x167dec: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x167decu;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x167df0: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x167df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x167df4: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x167df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x167df8: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x167DF8u;
    {
        const bool branch_taken_0x167df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167df8) {
            ctx->pc = 0x167DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167DF8u;
            // 0x167dfc: 0x8fa201ec  lw          $v0, 0x1EC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167E44u;
            goto label_167e44;
        }
    }
    ctx->pc = 0x167E00u;
    // 0x167e00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x167e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e04: 0xc06164c  jal         func_185930
    ctx->pc = 0x167E04u;
    SET_GPR_U32(ctx, 31, 0x167E0Cu);
    ctx->pc = 0x167E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167E04u;
    // 0x167e08: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x167E04u, 0x167E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167E0Cu;
label_167e0c:
    // 0x167e0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x167e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e10: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x167e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x167e14: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x167e14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x167e18: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x167e18u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x167e1c: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x167e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x167e20: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x167e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x167e24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x167e24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167e28: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x167e28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e2c: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x167e2cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x167e30: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x167e30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x167e34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x167e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e38: 0xc068bdc  jal         func_1A2F70
    ctx->pc = 0x167E38u;
    SET_GPR_U32(ctx, 31, 0x167E40u);
    ctx->pc = 0x167E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167E38u;
    // 0x167e3c: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F70u, 0x167E38u, 0x167E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167E40u;
label_167e40:
    // 0x167e40: 0x8fa201ec  lw          $v0, 0x1EC($sp)
    ctx->pc = 0x167e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_167e44:
    // 0x167e44: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x167e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x167e48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x167e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x167e4c: 0xafa201ec  sw          $v0, 0x1EC($sp)
    ctx->pc = 0x167e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
    // 0x167e50: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x167e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x167e54: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x167e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x167e58: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x167e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x167e5c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x167e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x167e60: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x167e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x167e64: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x167e64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x167e68: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x167e68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x167e6c: 0x1460ff84  bnez        $v1, . + 4 + (-0x7C << 2)
    ctx->pc = 0x167E6Cu;
    {
        const bool branch_taken_0x167e6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x167E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E6Cu;
        // 0x167e70: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e6c) {
            ctx->pc = 0x167C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167c80;
        }
    }
    ctx->pc = 0x167E74u;
label_167e74:
    // 0x167e74: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x167e74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x167e78: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x167e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x167e7c: 0xae670010  sw          $a3, 0x10($s3)
    ctx->pc = 0x167e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 7));
    // 0x167e80: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x167e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x167e84: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x167e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x167e88: 0xc79483f8  lwc1        $f20, -0x7C08($gp)
    ctx->pc = 0x167e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x167e8c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x167e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x167e90: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x167e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x167e94: 0xafb601f0  sw          $s6, 0x1F0($sp)
    ctx->pc = 0x167e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 22));
    // 0x167e98: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x167e98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167e9c: 0xafb301f4  sw          $s3, 0x1F4($sp)
    ctx->pc = 0x167e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 19));
    // 0x167ea0: 0x24710090  addiu       $s1, $v1, 0x90
    ctx->pc = 0x167ea0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x167ea4: 0x1880007d  blez        $a0, . + 4 + (0x7D << 2)
    ctx->pc = 0x167EA4u;
    {
        const bool branch_taken_0x167ea4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x167EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167EA4u;
        // 0x167ea8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ea4) {
            ctx->pc = 0x16809Cu;
            goto label_16809c;
        }
    }
    ctx->pc = 0x167EACu;
    // 0x167eac: 0xc79583fc  lwc1        $f21, -0x7C04($gp)
    ctx->pc = 0x167eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x167eb0: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x167eb0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167eb4: 0x27b60080  addiu       $s6, $sp, 0x80
    ctx->pc = 0x167eb4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_167eb8:
    // 0x167eb8: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x167eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x167ebc: 0x172080  sll         $a0, $s7, 2
    ctx->pc = 0x167ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x167ec0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x167ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x167ec4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x167ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167ec8: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x167EC8u;
    {
        const bool branch_taken_0x167ec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x167ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167EC8u;
        // 0x167ecc: 0x8fa201f4  lw          $v0, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ec8) {
            ctx->pc = 0x168074u;
            goto label_168074;
        }
    }
    ctx->pc = 0x167ED0u;
    // 0x167ed0: 0x8fa701f0  lw          $a3, 0x1F0($sp)
    ctx->pc = 0x167ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x167ed4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x167ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x167ed8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x167ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x167edc: 0x8ce301b4  lw          $v1, 0x1B4($a3)
    ctx->pc = 0x167edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x167ee0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x167ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x167ee4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x167ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167ee8: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x167ee8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167eec: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x167eecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x167ef0: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x167ef0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x167ef4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x167ef4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167ef8: 0x4a0002ff  vnop
    ctx->pc = 0x167ef8u;
    // NOP operation, no action needed for VU0
    // 0x167efc: 0x4a0002ff  vnop
    ctx->pc = 0x167efcu;
    // NOP operation, no action needed for VU0
    // 0x167f00: 0x4a0002ff  vnop
    ctx->pc = 0x167f00u;
    // NOP operation, no action needed for VU0
    // 0x167f04: 0x4a0002ff  vnop
    ctx->pc = 0x167f04u;
    // NOP operation, no action needed for VU0
    // 0x167f08: 0x4a0002ff  vnop
    ctx->pc = 0x167f08u;
    // NOP operation, no action needed for VU0
    // 0x167f0c: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x167f0cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x167f10: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x167f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x167f14: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x167f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x167f18: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x167F18u;
    {
        const bool branch_taken_0x167f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F18u;
        // 0x167f1c: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167f18) {
            ctx->pc = 0x167F64u;
            goto label_167f64;
        }
    }
    ctx->pc = 0x167F20u;
    // 0x167f20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x167f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167f24: 0xc06164c  jal         func_185930
    ctx->pc = 0x167F24u;
    SET_GPR_U32(ctx, 31, 0x167F2Cu);
    ctx->pc = 0x167F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167F24u;
    // 0x167f28: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x167F24u, 0x167F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167F2Cu;
label_167f2c:
    // 0x167f2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x167f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167f30: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x167f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x167f34: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x167f34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x167f38: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x167f38u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x167f3c: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x167f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x167f40: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x167f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x167f44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x167f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167f48: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x167f48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x167f4c: 0x3c3100b  movn        $v0, $fp, $v1
    ctx->pc = 0x167f4cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 30));
    // 0x167f50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x167f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167f54: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x167f54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x167f58: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x167F58u;
    SET_GPR_U32(ctx, 31, 0x167F60u);
    ctx->pc = 0x167F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167F58u;
    // 0x167f5c: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x167F58u, 0x167F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167F60u;
label_167f60:
    // 0x167f60: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x167f60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_167f64:
    // 0x167f64: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x167f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x167f68: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x167f68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x167f6c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x167f6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167f70: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x167f70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167f74: 0x4a0002ff  vnop
    ctx->pc = 0x167f74u;
    // NOP operation, no action needed for VU0
    // 0x167f78: 0x4a0002ff  vnop
    ctx->pc = 0x167f78u;
    // NOP operation, no action needed for VU0
    // 0x167f7c: 0x4a0002ff  vnop
    ctx->pc = 0x167f7cu;
    // NOP operation, no action needed for VU0
    // 0x167f80: 0x4a0002ff  vnop
    ctx->pc = 0x167f80u;
    // NOP operation, no action needed for VU0
    // 0x167f84: 0x4a0002ff  vnop
    ctx->pc = 0x167f84u;
    // NOP operation, no action needed for VU0
    // 0x167f88: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x167f88u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x167f8c: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x167f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x167f90: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x167f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x167f94: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x167F94u;
    {
        const bool branch_taken_0x167f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167f94) {
            ctx->pc = 0x167F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167F94u;
            // 0x167f98: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167FFCu;
            goto label_167ffc;
        }
    }
    ctx->pc = 0x167F9Cu;
    // 0x167f9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x167f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167fa0: 0xc06164c  jal         func_185930
    ctx->pc = 0x167FA0u;
    SET_GPR_U32(ctx, 31, 0x167FA8u);
    ctx->pc = 0x167FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167FA0u;
    // 0x167fa4: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x167FA0u, 0x167FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167FA8u;
label_167fa8:
    // 0x167fa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x167fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167fac: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x167facu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x167fb0: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x167fb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x167fb4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x167fb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x167fb8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x167fb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167fbc: 0x4be1097f  vftoi15.xyzw $vf1, $vf1
    ctx->pc = 0x167fbcu;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167fc0: 0xfac10000  sqc2        $vf1, 0x0($s6)
    ctx->pc = 0x167fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x167fc4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x167fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x167fc8: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x167fc8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x167fcc: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x167fccu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x167fd0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x167fd0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x167fd4: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x167fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x167fd8: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x167fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x167fdc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x167fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167fe0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x167fe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x167fe4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x167fe4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x167fe8: 0x3c4100b  movn        $v0, $fp, $a0
    ctx->pc = 0x167fe8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 30));
    // 0x167fec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x167fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167ff0: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x167FF0u;
    SET_GPR_U32(ctx, 31, 0x167FF8u);
    ctx->pc = 0x167FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167FF0u;
    // 0x167ff4: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x167FF0u, 0x167FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167FF8u;
label_167ff8:
    // 0x167ff8: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x167ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_167ffc:
    // 0x167ffc: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x167ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x168000: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168000u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168004: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x168004u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168008: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x168008u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16800c: 0x4a0002ff  vnop
    ctx->pc = 0x16800cu;
    // NOP operation, no action needed for VU0
    // 0x168010: 0x4a0002ff  vnop
    ctx->pc = 0x168010u;
    // NOP operation, no action needed for VU0
    // 0x168014: 0x4a0002ff  vnop
    ctx->pc = 0x168014u;
    // NOP operation, no action needed for VU0
    // 0x168018: 0x4a0002ff  vnop
    ctx->pc = 0x168018u;
    // NOP operation, no action needed for VU0
    // 0x16801c: 0x4a0002ff  vnop
    ctx->pc = 0x16801cu;
    // NOP operation, no action needed for VU0
    // 0x168020: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x168020u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x168024: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x168024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x168028: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x168028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x16802c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x16802Cu;
    {
        const bool branch_taken_0x16802c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16802c) {
            ctx->pc = 0x168030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16802Cu;
            // 0x168030: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168078u;
            goto label_168078;
        }
    }
    ctx->pc = 0x168034u;
    // 0x168034: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168038: 0xc06164c  jal         func_185930
    ctx->pc = 0x168038u;
    SET_GPR_U32(ctx, 31, 0x168040u);
    ctx->pc = 0x16803Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168038u;
    // 0x16803c: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x168038u, 0x168040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168040u;
label_168040:
    // 0x168040: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168044: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x168044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x168048: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168048u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16804c: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x16804cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x168050: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x168050u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x168054: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x168054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x168058: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x168058u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16805c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x16805cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x168060: 0x3c7100b  movn        $v0, $fp, $a3
    ctx->pc = 0x168060u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 30));
    // 0x168064: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168068: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x168068u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x16806c: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x16806Cu;
    SET_GPR_U32(ctx, 31, 0x168074u);
    ctx->pc = 0x168070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16806Cu;
    // 0x168070: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x16806Cu, 0x168074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168074u;
label_168074:
    // 0x168074: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x168074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_168078:
    // 0x168078: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x168078u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x16807c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x16807cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x168080: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x168080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x168084: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x168084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x168088: 0x2e3182a  slt         $v1, $s7, $v1
    ctx->pc = 0x168088u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16808c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x16808cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x168090: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x168090u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x168094: 0x1460ff88  bnez        $v1, . + 4 + (-0x78 << 2)
    ctx->pc = 0x168094u;
    {
        const bool branch_taken_0x168094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x168098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168094u;
        // 0x168098: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168094) {
            ctx->pc = 0x167EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167eb8;
        }
    }
    ctx->pc = 0x16809Cu;
label_16809c:
    // 0x16809c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x16809cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1680a0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1680a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1680a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1680a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1680a8: 0xae64000c  sw          $a0, 0xC($s3)
    ctx->pc = 0x1680a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 4));
    // 0x1680ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1680acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1680b0: 0x10000408  b           . + 4 + (0x408 << 2)
    ctx->pc = 0x1680B0u;
    {
        const bool branch_taken_0x1680b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1680B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1680B0u;
        // 0x1680b4: 0xae630010  sw          $v1, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1680b0) {
            ctx->pc = 0x1690D4u;
            goto label_1690d4;
        }
    }
    ctx->pc = 0x1680B8u;
label_1680b8:
    // 0x1680b8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1680b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1680bc: 0x14400371  bnez        $v0, . + 4 + (0x371 << 2)
    ctx->pc = 0x1680BCu;
    {
        const bool branch_taken_0x1680bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1680C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1680BCu;
        // 0x1680c0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1680bc) {
            ctx->pc = 0x168E84u;
            goto label_168e84;
        }
    }
    ctx->pc = 0x1680C4u;
    // 0x1680c4: 0x10c0008c  beqz        $a2, . + 4 + (0x8C << 2)
    ctx->pc = 0x1680C4u;
    {
        const bool branch_taken_0x1680c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1680C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1680C4u;
        // 0x1680c8: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1680c4) {
            ctx->pc = 0x1682F8u;
            goto label_1682f8;
        }
    }
    ctx->pc = 0x1680CCu;
    // 0x1680cc: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x1680ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1680d0: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x1680d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1680d4: 0xafb601f8  sw          $s6, 0x1F8($sp)
    ctx->pc = 0x1680d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 22));
    // 0x1680d8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1680d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1680dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1680dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1680e0: 0x8fb701e0  lw          $s7, 0x1E0($sp)
    ctx->pc = 0x1680e0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1680e4: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x1680e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1680e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1680e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1680ec: 0xafb301fc  sw          $s3, 0x1FC($sp)
    ctx->pc = 0x1680ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 19));
    // 0x1680f0: 0x82a021  addu        $s4, $a0, $v0
    ctx->pc = 0x1680f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1680f4: 0x18a0007d  blez        $a1, . + 4 + (0x7D << 2)
    ctx->pc = 0x1680F4u;
    {
        const bool branch_taken_0x1680f4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1680F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1680F4u;
        // 0x1680f8: 0x249100c0  addiu       $s1, $a0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1680f4) {
            ctx->pc = 0x1682ECu;
            goto label_1682ec;
        }
    }
    ctx->pc = 0x1680FCu;
    // 0x1680fc: 0xc7948400  lwc1        $f20, -0x7C00($gp)
    ctx->pc = 0x1680fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x168100: 0x27b600b0  addiu       $s6, $sp, 0xB0
    ctx->pc = 0x168100u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x168104: 0x0  nop
    ctx->pc = 0x168104u;
    // NOP
label_168108:
    // 0x168108: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x168108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x16810c: 0x1e2080  sll         $a0, $fp, 2
    ctx->pc = 0x16810cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x168110: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x168110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x168114: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x168114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168118: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x168118u;
    {
        const bool branch_taken_0x168118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168118u;
        // 0x16811c: 0x8fa201fc  lw          $v0, 0x1FC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168118) {
            ctx->pc = 0x1682C4u;
            goto label_1682c4;
        }
    }
    ctx->pc = 0x168120u;
    // 0x168120: 0x8fa701f8  lw          $a3, 0x1F8($sp)
    ctx->pc = 0x168120u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x168124: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x168124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x168128: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x168128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x16812c: 0x8ce301b4  lw          $v1, 0x1B4($a3)
    ctx->pc = 0x16812cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x168130: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x168130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x168134: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x168134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168138: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x168138u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16813c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x16813cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x168140: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x168140u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x168144: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x168144u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168148: 0x4a0002ff  vnop
    ctx->pc = 0x168148u;
    // NOP operation, no action needed for VU0
    // 0x16814c: 0x4a0002ff  vnop
    ctx->pc = 0x16814cu;
    // NOP operation, no action needed for VU0
    // 0x168150: 0x4a0002ff  vnop
    ctx->pc = 0x168150u;
    // NOP operation, no action needed for VU0
    // 0x168154: 0x4a0002ff  vnop
    ctx->pc = 0x168154u;
    // NOP operation, no action needed for VU0
    // 0x168158: 0x4a0002ff  vnop
    ctx->pc = 0x168158u;
    // NOP operation, no action needed for VU0
    // 0x16815c: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x16815cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x168160: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x168160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x168164: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x168164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x168168: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x168168u;
    {
        const bool branch_taken_0x168168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168168u;
        // 0x16816c: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168168) {
            ctx->pc = 0x1681B4u;
            goto label_1681b4;
        }
    }
    ctx->pc = 0x168170u;
    // 0x168170: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168174: 0xc06164c  jal         func_185930
    ctx->pc = 0x168174u;
    SET_GPR_U32(ctx, 31, 0x16817Cu);
    ctx->pc = 0x168178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168174u;
    // 0x168178: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x168174u, 0x16817Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16817Cu;
label_16817c:
    // 0x16817c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16817cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168180: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x168180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x168184: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x168184u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x168188: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x168188u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x16818c: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x16818cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x168190: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x168190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x168194: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x168194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168198: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x168198u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16819c: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x16819cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x1681a0: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1681a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1681a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1681a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1681a8: 0xc068bdc  jal         func_1A2F70
    ctx->pc = 0x1681A8u;
    SET_GPR_U32(ctx, 31, 0x1681B0u);
    ctx->pc = 0x1681ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1681A8u;
    // 0x1681ac: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F70u, 0x1681A8u, 0x1681B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1681B0u;
label_1681b0:
    // 0x1681b0: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x1681b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1681b4:
    // 0x1681b4: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x1681b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1681b8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1681b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1681bc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1681bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1681c0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1681c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1681c4: 0x4a0002ff  vnop
    ctx->pc = 0x1681c4u;
    // NOP operation, no action needed for VU0
    // 0x1681c8: 0x4a0002ff  vnop
    ctx->pc = 0x1681c8u;
    // NOP operation, no action needed for VU0
    // 0x1681cc: 0x4a0002ff  vnop
    ctx->pc = 0x1681ccu;
    // NOP operation, no action needed for VU0
    // 0x1681d0: 0x4a0002ff  vnop
    ctx->pc = 0x1681d0u;
    // NOP operation, no action needed for VU0
    // 0x1681d4: 0x4a0002ff  vnop
    ctx->pc = 0x1681d4u;
    // NOP operation, no action needed for VU0
    // 0x1681d8: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x1681d8u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x1681dc: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x1681dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x1681e0: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x1681e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x1681e4: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1681E4u;
    {
        const bool branch_taken_0x1681e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1681e4) {
            ctx->pc = 0x1681E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1681E4u;
            // 0x1681e8: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16824Cu;
            goto label_16824c;
        }
    }
    ctx->pc = 0x1681ECu;
    // 0x1681ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1681ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1681f0: 0xc06164c  jal         func_185930
    ctx->pc = 0x1681F0u;
    SET_GPR_U32(ctx, 31, 0x1681F8u);
    ctx->pc = 0x1681F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1681F0u;
    // 0x1681f4: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1681F0u, 0x1681F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1681F8u;
label_1681f8:
    // 0x1681f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1681f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1681fc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1681fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168200: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x168200u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x168204: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x168204u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x168208: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x168208u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16820c: 0x4be1097f  vftoi15.xyzw $vf1, $vf1
    ctx->pc = 0x16820cu;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168210: 0xfac10000  sqc2        $vf1, 0x0($s6)
    ctx->pc = 0x168210u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x168214: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x168214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x168218: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x168218u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x16821c: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x16821cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x168220: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x168220u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x168224: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x168224u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x168228: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x168228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x16822c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16822cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168230: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x168230u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168234: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168238: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x168238u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x16823c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x16823cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168240: 0xc068bdc  jal         func_1A2F70
    ctx->pc = 0x168240u;
    SET_GPR_U32(ctx, 31, 0x168248u);
    ctx->pc = 0x168244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168240u;
    // 0x168244: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F70u, 0x168240u, 0x168248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168248u;
label_168248:
    // 0x168248: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x168248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_16824c:
    // 0x16824c: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x16824cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x168250: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168250u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168254: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x168254u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168258: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x168258u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16825c: 0x4a0002ff  vnop
    ctx->pc = 0x16825cu;
    // NOP operation, no action needed for VU0
    // 0x168260: 0x4a0002ff  vnop
    ctx->pc = 0x168260u;
    // NOP operation, no action needed for VU0
    // 0x168264: 0x4a0002ff  vnop
    ctx->pc = 0x168264u;
    // NOP operation, no action needed for VU0
    // 0x168268: 0x4a0002ff  vnop
    ctx->pc = 0x168268u;
    // NOP operation, no action needed for VU0
    // 0x16826c: 0x4a0002ff  vnop
    ctx->pc = 0x16826cu;
    // NOP operation, no action needed for VU0
    // 0x168270: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x168270u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x168274: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x168274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x168278: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x168278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x16827c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x16827Cu;
    {
        const bool branch_taken_0x16827c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16827c) {
            ctx->pc = 0x168280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16827Cu;
            // 0x168280: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1682C8u;
            goto label_1682c8;
        }
    }
    ctx->pc = 0x168284u;
    // 0x168284: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168288: 0xc06164c  jal         func_185930
    ctx->pc = 0x168288u;
    SET_GPR_U32(ctx, 31, 0x168290u);
    ctx->pc = 0x16828Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168288u;
    // 0x16828c: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x168288u, 0x168290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168290u;
label_168290:
    // 0x168290: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168294: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x168294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x168298: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168298u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16829c: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x16829cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1682a0: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1682a0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1682a4: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x1682a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x1682a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1682a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1682ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1682acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1682b0: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x1682b0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x1682b4: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1682b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1682b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1682b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1682bc: 0xc068bdc  jal         func_1A2F70
    ctx->pc = 0x1682BCu;
    SET_GPR_U32(ctx, 31, 0x1682C4u);
    ctx->pc = 0x1682C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1682BCu;
    // 0x1682c0: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F70u, 0x1682BCu, 0x1682C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1682C4u;
label_1682c4:
    // 0x1682c4: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x1682c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1682c8:
    // 0x1682c8: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1682c8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1682cc: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1682ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1682d0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1682d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1682d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1682d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1682d8: 0x3c3182a  slt         $v1, $fp, $v1
    ctx->pc = 0x1682d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1682dc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1682dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1682e0: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1682e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1682e4: 0x1460ff88  bnez        $v1, . + 4 + (-0x78 << 2)
    ctx->pc = 0x1682E4u;
    {
        const bool branch_taken_0x1682e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1682E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1682E4u;
        // 0x1682e8: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1682e4) {
            ctx->pc = 0x168108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168108;
        }
    }
    ctx->pc = 0x1682ECu;
label_1682ec:
    // 0x1682ec: 0x100002d8  b           . + 4 + (0x2D8 << 2)
    ctx->pc = 0x1682ECu;
    {
        const bool branch_taken_0x1682ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1682F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1682ECu;
        // 0x1682f0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1682ec) {
            ctx->pc = 0x168E50u;
            goto label_168e50;
        }
    }
    ctx->pc = 0x1682F4u;
    // 0x1682f4: 0x0  nop
    ctx->pc = 0x1682f4u;
    // NOP
label_1682f8:
    // 0x1682f8: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x1682f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1682fc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1682fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168300: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x168300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x168304: 0xafb60200  sw          $s6, 0x200($sp)
    ctx->pc = 0x168304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 22));
    // 0x168308: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x168308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x16830c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16830cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x168310: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x168310u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x168314: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x168314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x168318: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x168318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16831c: 0xafb30204  sw          $s3, 0x204($sp)
    ctx->pc = 0x16831cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 19));
    // 0x168320: 0xa2a021  addu        $s4, $a1, $v0
    ctx->pc = 0x168320u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x168324: 0xc7948404  lwc1        $f20, -0x7BFC($gp)
    ctx->pc = 0x168324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x168328: 0x1060007e  beqz        $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x168328u;
    {
        const bool branch_taken_0x168328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168328u;
        // 0x16832c: 0x24b10030  addiu       $s1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168328) {
            ctx->pc = 0x168524u;
            goto label_168524;
        }
    }
    ctx->pc = 0x168330u;
    // 0x168330: 0xc7958408  lwc1        $f21, -0x7BF8($gp)
    ctx->pc = 0x168330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x168334: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x168334u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168338: 0x27b600e0  addiu       $s6, $sp, 0xE0
    ctx->pc = 0x168338u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x16833c: 0x0  nop
    ctx->pc = 0x16833cu;
    // NOP
label_168340:
    // 0x168340: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x168340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x168344: 0x172080  sll         $a0, $s7, 2
    ctx->pc = 0x168344u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x168348: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x168348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16834c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16834cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168350: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x168350u;
    {
        const bool branch_taken_0x168350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x168354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168350u;
        // 0x168354: 0x8fa30204  lw          $v1, 0x204($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168350) {
            ctx->pc = 0x1684FCu;
            goto label_1684fc;
        }
    }
    ctx->pc = 0x168358u;
    // 0x168358: 0x8fa70200  lw          $a3, 0x200($sp)
    ctx->pc = 0x168358u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x16835c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x16835cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x168360: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x168360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x168364: 0x8ce301b4  lw          $v1, 0x1B4($a3)
    ctx->pc = 0x168364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x168368: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x168368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x16836c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16836cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168370: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x168370u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x168374: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x168374u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x168378: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x168378u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x16837c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x16837cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168380: 0x4a0002ff  vnop
    ctx->pc = 0x168380u;
    // NOP operation, no action needed for VU0
    // 0x168384: 0x4a0002ff  vnop
    ctx->pc = 0x168384u;
    // NOP operation, no action needed for VU0
    // 0x168388: 0x4a0002ff  vnop
    ctx->pc = 0x168388u;
    // NOP operation, no action needed for VU0
    // 0x16838c: 0x4a0002ff  vnop
    ctx->pc = 0x16838cu;
    // NOP operation, no action needed for VU0
    // 0x168390: 0x4a0002ff  vnop
    ctx->pc = 0x168390u;
    // NOP operation, no action needed for VU0
    // 0x168394: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x168394u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x168398: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x168398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x16839c: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x16839cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x1683a0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1683A0u;
    {
        const bool branch_taken_0x1683a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1683A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1683A0u;
        // 0x1683a4: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1683a0) {
            ctx->pc = 0x1683ECu;
            goto label_1683ec;
        }
    }
    ctx->pc = 0x1683A8u;
    // 0x1683a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1683a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1683ac: 0xc06164c  jal         func_185930
    ctx->pc = 0x1683ACu;
    SET_GPR_U32(ctx, 31, 0x1683B4u);
    ctx->pc = 0x1683B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1683ACu;
    // 0x1683b0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1683ACu, 0x1683B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1683B4u;
label_1683b4:
    // 0x1683b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1683b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1683b8: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1683b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1683bc: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1683bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1683c0: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1683c0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1683c4: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1683c4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1683c8: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x1683c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x1683cc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1683ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1683d0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1683d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1683d4: 0x3c3100b  movn        $v0, $fp, $v1
    ctx->pc = 0x1683d4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 30));
    // 0x1683d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1683d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1683dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1683dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1683e0: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x1683E0u;
    SET_GPR_U32(ctx, 31, 0x1683E8u);
    ctx->pc = 0x1683E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1683E0u;
    // 0x1683e4: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x1683E0u, 0x1683E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1683E8u;
label_1683e8:
    // 0x1683e8: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x1683e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1683ec:
    // 0x1683ec: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x1683ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1683f0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1683f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1683f4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1683f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1683f8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1683f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1683fc: 0x4a0002ff  vnop
    ctx->pc = 0x1683fcu;
    // NOP operation, no action needed for VU0
    // 0x168400: 0x4a0002ff  vnop
    ctx->pc = 0x168400u;
    // NOP operation, no action needed for VU0
    // 0x168404: 0x4a0002ff  vnop
    ctx->pc = 0x168404u;
    // NOP operation, no action needed for VU0
    // 0x168408: 0x4a0002ff  vnop
    ctx->pc = 0x168408u;
    // NOP operation, no action needed for VU0
    // 0x16840c: 0x4a0002ff  vnop
    ctx->pc = 0x16840cu;
    // NOP operation, no action needed for VU0
    // 0x168410: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x168410u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x168414: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x168414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x168418: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x168418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x16841c: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x16841Cu;
    {
        const bool branch_taken_0x16841c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16841c) {
            ctx->pc = 0x168420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16841Cu;
            // 0x168420: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168484u;
            goto label_168484;
        }
    }
    ctx->pc = 0x168424u;
    // 0x168424: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168428: 0xc06164c  jal         func_185930
    ctx->pc = 0x168428u;
    SET_GPR_U32(ctx, 31, 0x168430u);
    ctx->pc = 0x16842Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168428u;
    // 0x16842c: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x168428u, 0x168430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168430u;
label_168430:
    // 0x168430: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168434: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168434u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168438: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x168438u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16843c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x16843cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x168440: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x168440u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168444: 0x4be1097f  vftoi15.xyzw $vf1, $vf1
    ctx->pc = 0x168444u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168448: 0xfac10000  sqc2        $vf1, 0x0($s6)
    ctx->pc = 0x168448u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16844c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x16844cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x168450: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x168450u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x168454: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x168454u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x168458: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x168458u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x16845c: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x16845cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x168460: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x168460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x168464: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x168464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168468: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x168468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16846c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16846cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x168470: 0x3c4100b  movn        $v0, $fp, $a0
    ctx->pc = 0x168470u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 30));
    // 0x168474: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168478: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x168478u;
    SET_GPR_U32(ctx, 31, 0x168480u);
    ctx->pc = 0x16847Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168478u;
    // 0x16847c: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x168478u, 0x168480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168480u;
label_168480:
    // 0x168480: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x168480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_168484:
    // 0x168484: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x168484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x168488: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168488u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16848c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16848cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168490: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x168490u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168494: 0x4a0002ff  vnop
    ctx->pc = 0x168494u;
    // NOP operation, no action needed for VU0
    // 0x168498: 0x4a0002ff  vnop
    ctx->pc = 0x168498u;
    // NOP operation, no action needed for VU0
    // 0x16849c: 0x4a0002ff  vnop
    ctx->pc = 0x16849cu;
    // NOP operation, no action needed for VU0
    // 0x1684a0: 0x4a0002ff  vnop
    ctx->pc = 0x1684a0u;
    // NOP operation, no action needed for VU0
    // 0x1684a4: 0x4a0002ff  vnop
    ctx->pc = 0x1684a4u;
    // NOP operation, no action needed for VU0
    // 0x1684a8: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x1684a8u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x1684ac: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x1684acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x1684b0: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x1684b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x1684b4: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1684B4u;
    {
        const bool branch_taken_0x1684b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1684b4) {
            ctx->pc = 0x1684B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1684B4u;
            // 0x1684b8: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168500u;
            goto label_168500;
        }
    }
    ctx->pc = 0x1684BCu;
    // 0x1684bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1684bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1684c0: 0xc06164c  jal         func_185930
    ctx->pc = 0x1684C0u;
    SET_GPR_U32(ctx, 31, 0x1684C8u);
    ctx->pc = 0x1684C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1684C0u;
    // 0x1684c4: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1684C0u, 0x1684C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1684C8u;
label_1684c8:
    // 0x1684c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1684c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1684cc: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1684ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1684d0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1684d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1684d4: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1684d4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1684d8: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1684d8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1684dc: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x1684dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x1684e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1684e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1684e4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1684e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1684e8: 0x3c7100b  movn        $v0, $fp, $a3
    ctx->pc = 0x1684e8u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 30));
    // 0x1684ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1684ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1684f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1684f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1684f4: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x1684F4u;
    SET_GPR_U32(ctx, 31, 0x1684FCu);
    ctx->pc = 0x1684F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1684F4u;
    // 0x1684f8: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x1684F4u, 0x1684FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1684FCu;
label_1684fc:
    // 0x1684fc: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x1684fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_168500:
    // 0x168500: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x168500u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x168504: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x168504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x168508: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x168508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x16850c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16850cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x168510: 0x2e3182a  slt         $v1, $s7, $v1
    ctx->pc = 0x168510u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x168514: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x168514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x168518: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x168518u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x16851c: 0x1460ff88  bnez        $v1, . + 4 + (-0x78 << 2)
    ctx->pc = 0x16851Cu;
    {
        const bool branch_taken_0x16851c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x168520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16851Cu;
        // 0x168520: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16851c) {
            ctx->pc = 0x168340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168340;
        }
    }
    ctx->pc = 0x168524u;
label_168524:
    // 0x168524: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x168524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x168528: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x168528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16852c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16852cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168530: 0xae64000c  sw          $a0, 0xC($s3)
    ctx->pc = 0x168530u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 4));
    // 0x168534: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x168534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x168538: 0x100002e6  b           . + 4 + (0x2E6 << 2)
    ctx->pc = 0x168538u;
    {
        const bool branch_taken_0x168538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168538u;
        // 0x16853c: 0xae630010  sw          $v1, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168538) {
            ctx->pc = 0x1690D4u;
            goto label_1690d4;
        }
    }
    ctx->pc = 0x168540u;
label_168540:
    // 0x168540: 0x10c002e3  beqz        $a2, . + 4 + (0x2E3 << 2)
    ctx->pc = 0x168540u;
    {
        const bool branch_taken_0x168540 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x168544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168540u;
        // 0x168544: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168540) {
            ctx->pc = 0x1690D0u;
            goto label_1690d0;
        }
    }
    ctx->pc = 0x168548u;
    // 0x168548: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x168548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x16854c: 0x1440024d  bnez        $v0, . + 4 + (0x24D << 2)
    ctx->pc = 0x16854Cu;
    {
        const bool branch_taken_0x16854c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16854Cu;
        // 0x168550: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16854c) {
            ctx->pc = 0x168E84u;
            goto label_168e84;
        }
    }
    ctx->pc = 0x168554u;
    // 0x168554: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x168554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x168558: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x168558u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16855c: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x16855cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x168560: 0xafb60208  sw          $s6, 0x208($sp)
    ctx->pc = 0x168560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 22));
    // 0x168564: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x168564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x168568: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x168568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16856c: 0x8fb701e0  lw          $s7, 0x1E0($sp)
    ctx->pc = 0x16856cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x168570: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x168570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x168574: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x168574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x168578: 0xafb3020c  sw          $s3, 0x20C($sp)
    ctx->pc = 0x168578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 19));
    // 0x16857c: 0x82a021  addu        $s4, $a0, $v0
    ctx->pc = 0x16857cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x168580: 0x18a0007c  blez        $a1, . + 4 + (0x7C << 2)
    ctx->pc = 0x168580u;
    {
        const bool branch_taken_0x168580 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x168584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168580u;
        // 0x168584: 0x249100f0  addiu       $s1, $a0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168580) {
            ctx->pc = 0x168774u;
            goto label_168774;
        }
    }
    ctx->pc = 0x168588u;
    // 0x168588: 0xc794840c  lwc1        $f20, -0x7BF4($gp)
    ctx->pc = 0x168588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16858c: 0x27b60110  addiu       $s6, $sp, 0x110
    ctx->pc = 0x16858cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_168590:
    // 0x168590: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x168590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x168594: 0x1e2080  sll         $a0, $fp, 2
    ctx->pc = 0x168594u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x168598: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x168598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16859c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16859cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1685a0: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x1685A0u;
    {
        const bool branch_taken_0x1685a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1685A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685A0u;
        // 0x1685a4: 0x8fa2020c  lw          $v0, 0x20C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685a0) {
            ctx->pc = 0x16874Cu;
            goto label_16874c;
        }
    }
    ctx->pc = 0x1685A8u;
    // 0x1685a8: 0x8fa70208  lw          $a3, 0x208($sp)
    ctx->pc = 0x1685a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1685ac: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1685acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1685b0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1685b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1685b4: 0x8ce301b4  lw          $v1, 0x1B4($a3)
    ctx->pc = 0x1685b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x1685b8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1685b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1685bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1685bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1685c0: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x1685c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1685c4: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1685c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1685c8: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x1685c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1685cc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1685ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1685d0: 0x4a0002ff  vnop
    ctx->pc = 0x1685d0u;
    // NOP operation, no action needed for VU0
    // 0x1685d4: 0x4a0002ff  vnop
    ctx->pc = 0x1685d4u;
    // NOP operation, no action needed for VU0
    // 0x1685d8: 0x4a0002ff  vnop
    ctx->pc = 0x1685d8u;
    // NOP operation, no action needed for VU0
    // 0x1685dc: 0x4a0002ff  vnop
    ctx->pc = 0x1685dcu;
    // NOP operation, no action needed for VU0
    // 0x1685e0: 0x4a0002ff  vnop
    ctx->pc = 0x1685e0u;
    // NOP operation, no action needed for VU0
    // 0x1685e4: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x1685e4u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x1685e8: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x1685e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x1685ec: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x1685ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x1685f0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1685F0u;
    {
        const bool branch_taken_0x1685f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1685F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685F0u;
        // 0x1685f4: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685f0) {
            ctx->pc = 0x16863Cu;
            goto label_16863c;
        }
    }
    ctx->pc = 0x1685F8u;
    // 0x1685f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1685f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1685fc: 0xc06164c  jal         func_185930
    ctx->pc = 0x1685FCu;
    SET_GPR_U32(ctx, 31, 0x168604u);
    ctx->pc = 0x168600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1685FCu;
    // 0x168600: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1685FCu, 0x168604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168604u;
label_168604:
    // 0x168604: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168608: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x168608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x16860c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x16860cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x168610: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x168610u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x168614: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x168614u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x168618: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x168618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x16861c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16861cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168620: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x168620u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168624: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x168624u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x168628: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x168628u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16862c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16862cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168630: 0xc068bdc  jal         func_1A2F70
    ctx->pc = 0x168630u;
    SET_GPR_U32(ctx, 31, 0x168638u);
    ctx->pc = 0x168634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168630u;
    // 0x168634: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F70u, 0x168630u, 0x168638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168638u;
label_168638:
    // 0x168638: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x168638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_16863c:
    // 0x16863c: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x16863cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x168640: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168640u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168644: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x168644u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168648: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x168648u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16864c: 0x4a0002ff  vnop
    ctx->pc = 0x16864cu;
    // NOP operation, no action needed for VU0
    // 0x168650: 0x4a0002ff  vnop
    ctx->pc = 0x168650u;
    // NOP operation, no action needed for VU0
    // 0x168654: 0x4a0002ff  vnop
    ctx->pc = 0x168654u;
    // NOP operation, no action needed for VU0
    // 0x168658: 0x4a0002ff  vnop
    ctx->pc = 0x168658u;
    // NOP operation, no action needed for VU0
    // 0x16865c: 0x4a0002ff  vnop
    ctx->pc = 0x16865cu;
    // NOP operation, no action needed for VU0
    // 0x168660: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x168660u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x168664: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x168664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x168668: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x168668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x16866c: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x16866Cu;
    {
        const bool branch_taken_0x16866c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16866c) {
            ctx->pc = 0x168670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16866Cu;
            // 0x168670: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1686D4u;
            goto label_1686d4;
        }
    }
    ctx->pc = 0x168674u;
    // 0x168674: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168678: 0xc06164c  jal         func_185930
    ctx->pc = 0x168678u;
    SET_GPR_U32(ctx, 31, 0x168680u);
    ctx->pc = 0x16867Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168678u;
    // 0x16867c: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x168678u, 0x168680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168680u;
label_168680:
    // 0x168680: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168684: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168684u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168688: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x168688u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16868c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x16868cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x168690: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x168690u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168694: 0x4be1097f  vftoi15.xyzw $vf1, $vf1
    ctx->pc = 0x168694u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168698: 0xfac10000  sqc2        $vf1, 0x0($s6)
    ctx->pc = 0x168698u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16869c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x16869cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1686a0: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x1686a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1686a4: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x1686a4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1686a8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1686a8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1686ac: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1686acu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1686b0: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x1686b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x1686b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1686b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1686b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1686b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1686bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1686bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1686c0: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x1686c0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x1686c4: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1686c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1686c8: 0xc068bdc  jal         func_1A2F70
    ctx->pc = 0x1686C8u;
    SET_GPR_U32(ctx, 31, 0x1686D0u);
    ctx->pc = 0x1686CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1686C8u;
    // 0x1686cc: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F70u, 0x1686C8u, 0x1686D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1686D0u;
label_1686d0:
    // 0x1686d0: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x1686d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1686d4:
    // 0x1686d4: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x1686d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1686d8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1686d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1686dc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1686dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1686e0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1686e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1686e4: 0x4a0002ff  vnop
    ctx->pc = 0x1686e4u;
    // NOP operation, no action needed for VU0
    // 0x1686e8: 0x4a0002ff  vnop
    ctx->pc = 0x1686e8u;
    // NOP operation, no action needed for VU0
    // 0x1686ec: 0x4a0002ff  vnop
    ctx->pc = 0x1686ecu;
    // NOP operation, no action needed for VU0
    // 0x1686f0: 0x4a0002ff  vnop
    ctx->pc = 0x1686f0u;
    // NOP operation, no action needed for VU0
    // 0x1686f4: 0x4a0002ff  vnop
    ctx->pc = 0x1686f4u;
    // NOP operation, no action needed for VU0
    // 0x1686f8: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x1686f8u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x1686fc: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x1686fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x168700: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x168700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x168704: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x168704u;
    {
        const bool branch_taken_0x168704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168704) {
            ctx->pc = 0x168708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168704u;
            // 0x168708: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168750u;
            goto label_168750;
        }
    }
    ctx->pc = 0x16870Cu;
    // 0x16870c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16870cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168710: 0xc06164c  jal         func_185930
    ctx->pc = 0x168710u;
    SET_GPR_U32(ctx, 31, 0x168718u);
    ctx->pc = 0x168714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168710u;
    // 0x168714: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x168710u, 0x168718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168718u;
label_168718:
    // 0x168718: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16871c: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x16871cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x168720: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168720u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168724: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x168724u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x168728: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x168728u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16872c: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x16872cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x168730: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x168730u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168734: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x168734u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168738: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x168738u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x16873c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x16873cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168740: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168744: 0xc068bdc  jal         func_1A2F70
    ctx->pc = 0x168744u;
    SET_GPR_U32(ctx, 31, 0x16874Cu);
    ctx->pc = 0x168748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168744u;
    // 0x168748: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F70u, 0x168744u, 0x16874Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16874Cu;
label_16874c:
    // 0x16874c: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x16874cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_168750:
    // 0x168750: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x168750u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x168754: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x168754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x168758: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x168758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x16875c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16875cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x168760: 0x3c3182a  slt         $v1, $fp, $v1
    ctx->pc = 0x168760u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x168764: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x168764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x168768: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x168768u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x16876c: 0x1460ff88  bnez        $v1, . + 4 + (-0x78 << 2)
    ctx->pc = 0x16876Cu;
    {
        const bool branch_taken_0x16876c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x168770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16876Cu;
        // 0x168770: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16876c) {
            ctx->pc = 0x168590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168590;
        }
    }
    ctx->pc = 0x168774u;
label_168774:
    // 0x168774: 0x100001b6  b           . + 4 + (0x1B6 << 2)
    ctx->pc = 0x168774u;
    {
        const bool branch_taken_0x168774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168774u;
        // 0x168778: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168774) {
            ctx->pc = 0x168E50u;
            goto label_168e50;
        }
    }
    ctx->pc = 0x16877Cu;
    // 0x16877c: 0x0  nop
    ctx->pc = 0x16877cu;
    // NOP
label_168780:
    // 0x168780: 0x10c00253  beqz        $a2, . + 4 + (0x253 << 2)
    ctx->pc = 0x168780u;
    {
        const bool branch_taken_0x168780 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x168784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168780u;
        // 0x168784: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168780) {
            ctx->pc = 0x1690D0u;
            goto label_1690d0;
        }
    }
    ctx->pc = 0x168788u;
    // 0x168788: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x168788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x16878c: 0x144001bd  bnez        $v0, . + 4 + (0x1BD << 2)
    ctx->pc = 0x16878Cu;
    {
        const bool branch_taken_0x16878c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16878Cu;
        // 0x168790: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16878c) {
            ctx->pc = 0x168E84u;
            goto label_168e84;
        }
    }
    ctx->pc = 0x168794u;
    // 0x168794: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x168794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x168798: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x168798u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x16879c: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x16879cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1687a0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1687a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1687a4: 0xafb60210  sw          $s6, 0x210($sp)
    ctx->pc = 0x1687a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 22));
    // 0x1687a8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1687a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1687ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1687acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1687b0: 0x24910120  addiu       $s1, $a0, 0x120
    ctx->pc = 0x1687b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1687b4: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x1687b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1687b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1687b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1687bc: 0xafb30214  sw          $s3, 0x214($sp)
    ctx->pc = 0x1687bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 19));
    // 0x1687c0: 0x18a0007e  blez        $a1, . + 4 + (0x7E << 2)
    ctx->pc = 0x1687C0u;
    {
        const bool branch_taken_0x1687c0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1687C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1687C0u;
        // 0x1687c4: 0x82a021  addu        $s4, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1687c0) {
            ctx->pc = 0x1689BCu;
            goto label_1689bc;
        }
    }
    ctx->pc = 0x1687C8u;
    // 0x1687c8: 0xc7958410  lwc1        $f21, -0x7BF0($gp)
    ctx->pc = 0x1687c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1687cc: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1687ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1687d0: 0x27b60140  addiu       $s6, $sp, 0x140
    ctx->pc = 0x1687d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1687d4: 0x0  nop
    ctx->pc = 0x1687d4u;
    // NOP
label_1687d8:
    // 0x1687d8: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1687d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1687dc: 0x172080  sll         $a0, $s7, 2
    ctx->pc = 0x1687dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x1687e0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1687e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1687e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1687e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1687e8: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x1687E8u;
    {
        const bool branch_taken_0x1687e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1687ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1687E8u;
        // 0x1687ec: 0x8fa30214  lw          $v1, 0x214($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1687e8) {
            ctx->pc = 0x168994u;
            goto label_168994;
        }
    }
    ctx->pc = 0x1687F0u;
    // 0x1687f0: 0x8fa70210  lw          $a3, 0x210($sp)
    ctx->pc = 0x1687f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1687f4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1687f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1687f8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1687f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1687fc: 0x8ce301b4  lw          $v1, 0x1B4($a3)
    ctx->pc = 0x1687fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x168800: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x168800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x168804: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x168804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168808: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x168808u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16880c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x16880cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x168810: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x168810u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x168814: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x168814u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168818: 0x4a0002ff  vnop
    ctx->pc = 0x168818u;
    // NOP operation, no action needed for VU0
    // 0x16881c: 0x4a0002ff  vnop
    ctx->pc = 0x16881cu;
    // NOP operation, no action needed for VU0
    // 0x168820: 0x4a0002ff  vnop
    ctx->pc = 0x168820u;
    // NOP operation, no action needed for VU0
    // 0x168824: 0x4a0002ff  vnop
    ctx->pc = 0x168824u;
    // NOP operation, no action needed for VU0
    // 0x168828: 0x4a0002ff  vnop
    ctx->pc = 0x168828u;
    // NOP operation, no action needed for VU0
    // 0x16882c: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x16882cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x168830: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x168830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x168834: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x168834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x168838: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x168838u;
    {
        const bool branch_taken_0x168838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168838u;
        // 0x16883c: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168838) {
            ctx->pc = 0x168884u;
            goto label_168884;
        }
    }
    ctx->pc = 0x168840u;
    // 0x168840: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168844: 0xc06164c  jal         func_185930
    ctx->pc = 0x168844u;
    SET_GPR_U32(ctx, 31, 0x16884Cu);
    ctx->pc = 0x168848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168844u;
    // 0x168848: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x168844u, 0x16884Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16884Cu;
label_16884c:
    // 0x16884c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16884cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168850: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x168850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x168854: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x168854u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x168858: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x168858u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x16885c: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x16885cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x168860: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x168860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x168864: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x168864u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168868: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x168868u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16886c: 0x3c3100b  movn        $v0, $fp, $v1
    ctx->pc = 0x16886cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 30));
    // 0x168870: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168874: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x168874u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x168878: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x168878u;
    SET_GPR_U32(ctx, 31, 0x168880u);
    ctx->pc = 0x16887Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168878u;
    // 0x16887c: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x168878u, 0x168880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168880u;
label_168880:
    // 0x168880: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x168880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_168884:
    // 0x168884: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x168884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x168888: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168888u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16888c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16888cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168890: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x168890u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168894: 0x4a0002ff  vnop
    ctx->pc = 0x168894u;
    // NOP operation, no action needed for VU0
    // 0x168898: 0x4a0002ff  vnop
    ctx->pc = 0x168898u;
    // NOP operation, no action needed for VU0
    // 0x16889c: 0x4a0002ff  vnop
    ctx->pc = 0x16889cu;
    // NOP operation, no action needed for VU0
    // 0x1688a0: 0x4a0002ff  vnop
    ctx->pc = 0x1688a0u;
    // NOP operation, no action needed for VU0
    // 0x1688a4: 0x4a0002ff  vnop
    ctx->pc = 0x1688a4u;
    // NOP operation, no action needed for VU0
    // 0x1688a8: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x1688a8u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x1688ac: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x1688acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x1688b0: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x1688b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x1688b4: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1688B4u;
    {
        const bool branch_taken_0x1688b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1688b4) {
            ctx->pc = 0x1688B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1688B4u;
            // 0x1688b8: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16891Cu;
            goto label_16891c;
        }
    }
    ctx->pc = 0x1688BCu;
    // 0x1688bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1688bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1688c0: 0xc06164c  jal         func_185930
    ctx->pc = 0x1688C0u;
    SET_GPR_U32(ctx, 31, 0x1688C8u);
    ctx->pc = 0x1688C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1688C0u;
    // 0x1688c4: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1688C0u, 0x1688C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1688C8u;
label_1688c8:
    // 0x1688c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1688c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1688cc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1688ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1688d0: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x1688d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1688d4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1688d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1688d8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1688d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1688dc: 0x4be1097f  vftoi15.xyzw $vf1, $vf1
    ctx->pc = 0x1688dcu;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1688e0: 0xfac10000  sqc2        $vf1, 0x0($s6)
    ctx->pc = 0x1688e0u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1688e4: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1688e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1688e8: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x1688e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1688ec: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x1688ecu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1688f0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1688f0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1688f4: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1688f4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1688f8: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x1688f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x1688fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1688fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168900: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x168900u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x168904: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x168904u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x168908: 0x3c4100b  movn        $v0, $fp, $a0
    ctx->pc = 0x168908u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 30));
    // 0x16890c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16890cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168910: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x168910u;
    SET_GPR_U32(ctx, 31, 0x168918u);
    ctx->pc = 0x168914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168910u;
    // 0x168914: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x168910u, 0x168918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168918u;
label_168918:
    // 0x168918: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x168918u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_16891c:
    // 0x16891c: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x16891cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x168920: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168920u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168924: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x168924u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168928: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x168928u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16892c: 0x4a0002ff  vnop
    ctx->pc = 0x16892cu;
    // NOP operation, no action needed for VU0
    // 0x168930: 0x4a0002ff  vnop
    ctx->pc = 0x168930u;
    // NOP operation, no action needed for VU0
    // 0x168934: 0x4a0002ff  vnop
    ctx->pc = 0x168934u;
    // NOP operation, no action needed for VU0
    // 0x168938: 0x4a0002ff  vnop
    ctx->pc = 0x168938u;
    // NOP operation, no action needed for VU0
    // 0x16893c: 0x4a0002ff  vnop
    ctx->pc = 0x16893cu;
    // NOP operation, no action needed for VU0
    // 0x168940: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x168940u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x168944: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x168944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x168948: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x168948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x16894c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x16894Cu;
    {
        const bool branch_taken_0x16894c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16894c) {
            ctx->pc = 0x168950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16894Cu;
            // 0x168950: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168998u;
            goto label_168998;
        }
    }
    ctx->pc = 0x168954u;
    // 0x168954: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168958: 0xc06164c  jal         func_185930
    ctx->pc = 0x168958u;
    SET_GPR_U32(ctx, 31, 0x168960u);
    ctx->pc = 0x16895Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168958u;
    // 0x16895c: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x168958u, 0x168960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168960u;
label_168960:
    // 0x168960: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168964: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x168964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x168968: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168968u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16896c: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x16896cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x168970: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x168970u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x168974: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x168974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x168978: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x168978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16897c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x16897cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x168980: 0x3c7100b  movn        $v0, $fp, $a3
    ctx->pc = 0x168980u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 30));
    // 0x168984: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168988: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x168988u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x16898c: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x16898Cu;
    SET_GPR_U32(ctx, 31, 0x168994u);
    ctx->pc = 0x168990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16898Cu;
    // 0x168990: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x16898Cu, 0x168994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168994u;
label_168994:
    // 0x168994: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x168994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_168998:
    // 0x168998: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x168998u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x16899c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x16899cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1689a0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1689a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1689a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1689a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1689a8: 0x2e3182a  slt         $v1, $s7, $v1
    ctx->pc = 0x1689a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1689ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1689acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1689b0: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1689b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1689b4: 0x1460ff88  bnez        $v1, . + 4 + (-0x78 << 2)
    ctx->pc = 0x1689B4u;
    {
        const bool branch_taken_0x1689b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1689B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689B4u;
        // 0x1689b8: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1689b4) {
            ctx->pc = 0x1687D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1687d8;
        }
    }
    ctx->pc = 0x1689BCu;
label_1689bc:
    // 0x1689bc: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x1689BCu;
    {
        const bool branch_taken_0x1689bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1689C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689BCu;
        // 0x1689c0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1689bc) {
            ctx->pc = 0x168E50u;
            goto label_168e50;
        }
    }
    ctx->pc = 0x1689C4u;
    // 0x1689c4: 0x0  nop
    ctx->pc = 0x1689c4u;
    // NOP
label_1689c8:
    // 0x1689c8: 0x10c001c1  beqz        $a2, . + 4 + (0x1C1 << 2)
    ctx->pc = 0x1689C8u;
    {
        const bool branch_taken_0x1689c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1689CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689C8u;
        // 0x1689cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1689c8) {
            ctx->pc = 0x1690D0u;
            goto label_1690d0;
        }
    }
    ctx->pc = 0x1689D0u;
    // 0x1689d0: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1689d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1689d4: 0x1440012b  bnez        $v0, . + 4 + (0x12B << 2)
    ctx->pc = 0x1689D4u;
    {
        const bool branch_taken_0x1689d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1689D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689D4u;
        // 0x1689d8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1689d4) {
            ctx->pc = 0x168E84u;
            goto label_168e84;
        }
    }
    ctx->pc = 0x1689DCu;
    // 0x1689dc: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x1689dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1689e0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1689e0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1689e4: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x1689e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1689e8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1689e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1689ec: 0xafb60218  sw          $s6, 0x218($sp)
    ctx->pc = 0x1689ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 22));
    // 0x1689f0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1689f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1689f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1689f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1689f8: 0x24910150  addiu       $s1, $a0, 0x150
    ctx->pc = 0x1689f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x1689fc: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x1689fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x168a00: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x168a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x168a04: 0xafb3021c  sw          $s3, 0x21C($sp)
    ctx->pc = 0x168a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 19));
    // 0x168a08: 0x18a0007e  blez        $a1, . + 4 + (0x7E << 2)
    ctx->pc = 0x168A08u;
    {
        const bool branch_taken_0x168a08 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x168A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A08u;
        // 0x168a0c: 0x82a021  addu        $s4, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168a08) {
            ctx->pc = 0x168C04u;
            goto label_168c04;
        }
    }
    ctx->pc = 0x168A10u;
    // 0x168a10: 0xc7958414  lwc1        $f21, -0x7BEC($gp)
    ctx->pc = 0x168a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x168a14: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x168a14u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168a18: 0x27b60170  addiu       $s6, $sp, 0x170
    ctx->pc = 0x168a18u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x168a1c: 0x0  nop
    ctx->pc = 0x168a1cu;
    // NOP
label_168a20:
    // 0x168a20: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x168a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x168a24: 0x172080  sll         $a0, $s7, 2
    ctx->pc = 0x168a24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x168a28: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x168a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x168a2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x168a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168a30: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x168A30u;
    {
        const bool branch_taken_0x168a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x168A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A30u;
        // 0x168a34: 0x8fa3021c  lw          $v1, 0x21C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168a30) {
            ctx->pc = 0x168BDCu;
            goto label_168bdc;
        }
    }
    ctx->pc = 0x168A38u;
    // 0x168a38: 0x8fa70218  lw          $a3, 0x218($sp)
    ctx->pc = 0x168a38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x168a3c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x168a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x168a40: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x168a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x168a44: 0x8ce301b4  lw          $v1, 0x1B4($a3)
    ctx->pc = 0x168a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x168a48: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x168a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x168a4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x168a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168a50: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x168a50u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x168a54: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x168a54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x168a58: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x168a58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x168a5c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x168a5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168a60: 0x4a0002ff  vnop
    ctx->pc = 0x168a60u;
    // NOP operation, no action needed for VU0
    // 0x168a64: 0x4a0002ff  vnop
    ctx->pc = 0x168a64u;
    // NOP operation, no action needed for VU0
    // 0x168a68: 0x4a0002ff  vnop
    ctx->pc = 0x168a68u;
    // NOP operation, no action needed for VU0
    // 0x168a6c: 0x4a0002ff  vnop
    ctx->pc = 0x168a6cu;
    // NOP operation, no action needed for VU0
    // 0x168a70: 0x4a0002ff  vnop
    ctx->pc = 0x168a70u;
    // NOP operation, no action needed for VU0
    // 0x168a74: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x168a74u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x168a78: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x168a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x168a7c: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x168a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x168a80: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x168A80u;
    {
        const bool branch_taken_0x168a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A80u;
        // 0x168a84: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168a80) {
            ctx->pc = 0x168ACCu;
            goto label_168acc;
        }
    }
    ctx->pc = 0x168A88u;
    // 0x168a88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168a8c: 0xc06164c  jal         func_185930
    ctx->pc = 0x168A8Cu;
    SET_GPR_U32(ctx, 31, 0x168A94u);
    ctx->pc = 0x168A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168A8Cu;
    // 0x168a90: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x168A8Cu, 0x168A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168A94u;
label_168a94:
    // 0x168a94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168a98: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x168a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x168a9c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x168a9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x168aa0: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x168aa0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x168aa4: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x168aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x168aa8: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x168aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x168aac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x168aacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ab0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x168ab0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x168ab4: 0x3c3100b  movn        $v0, $fp, $v1
    ctx->pc = 0x168ab4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 30));
    // 0x168ab8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168abc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x168abcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x168ac0: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x168AC0u;
    SET_GPR_U32(ctx, 31, 0x168AC8u);
    ctx->pc = 0x168AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168AC0u;
    // 0x168ac4: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x168AC0u, 0x168AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168AC8u;
label_168ac8:
    // 0x168ac8: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x168ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_168acc:
    // 0x168acc: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x168accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x168ad0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168ad0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168ad4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x168ad4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168ad8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x168ad8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168adc: 0x4a0002ff  vnop
    ctx->pc = 0x168adcu;
    // NOP operation, no action needed for VU0
    // 0x168ae0: 0x4a0002ff  vnop
    ctx->pc = 0x168ae0u;
    // NOP operation, no action needed for VU0
    // 0x168ae4: 0x4a0002ff  vnop
    ctx->pc = 0x168ae4u;
    // NOP operation, no action needed for VU0
    // 0x168ae8: 0x4a0002ff  vnop
    ctx->pc = 0x168ae8u;
    // NOP operation, no action needed for VU0
    // 0x168aec: 0x4a0002ff  vnop
    ctx->pc = 0x168aecu;
    // NOP operation, no action needed for VU0
    // 0x168af0: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x168af0u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x168af4: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x168af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x168af8: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x168af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x168afc: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x168AFCu;
    {
        const bool branch_taken_0x168afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168afc) {
            ctx->pc = 0x168B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168AFCu;
            // 0x168b00: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168B64u;
            goto label_168b64;
        }
    }
    ctx->pc = 0x168B04u;
    // 0x168b04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b08: 0xc06164c  jal         func_185930
    ctx->pc = 0x168B08u;
    SET_GPR_U32(ctx, 31, 0x168B10u);
    ctx->pc = 0x168B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168B08u;
    // 0x168b0c: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x168B08u, 0x168B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168B10u;
label_168b10:
    // 0x168b10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b14: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168b14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168b18: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x168b18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x168b1c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x168b1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x168b20: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x168b20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168b24: 0x4be1097f  vftoi15.xyzw $vf1, $vf1
    ctx->pc = 0x168b24u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168b28: 0xfac10000  sqc2        $vf1, 0x0($s6)
    ctx->pc = 0x168b28u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x168b2c: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x168b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x168b30: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x168b30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x168b34: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x168b34u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x168b38: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x168b38u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x168b3c: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x168b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x168b40: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x168b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x168b44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x168b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b48: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x168b48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x168b4c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x168b4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x168b50: 0x3c4100b  movn        $v0, $fp, $a0
    ctx->pc = 0x168b50u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 30));
    // 0x168b54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b58: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x168B58u;
    SET_GPR_U32(ctx, 31, 0x168B60u);
    ctx->pc = 0x168B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168B58u;
    // 0x168b5c: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x168B58u, 0x168B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168B60u;
label_168b60:
    // 0x168b60: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x168b60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_168b64:
    // 0x168b64: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x168b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x168b68: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168b68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168b6c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x168b6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168b70: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x168b70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168b74: 0x4a0002ff  vnop
    ctx->pc = 0x168b74u;
    // NOP operation, no action needed for VU0
    // 0x168b78: 0x4a0002ff  vnop
    ctx->pc = 0x168b78u;
    // NOP operation, no action needed for VU0
    // 0x168b7c: 0x4a0002ff  vnop
    ctx->pc = 0x168b7cu;
    // NOP operation, no action needed for VU0
    // 0x168b80: 0x4a0002ff  vnop
    ctx->pc = 0x168b80u;
    // NOP operation, no action needed for VU0
    // 0x168b84: 0x4a0002ff  vnop
    ctx->pc = 0x168b84u;
    // NOP operation, no action needed for VU0
    // 0x168b88: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x168b88u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x168b8c: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x168b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x168b90: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x168b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x168b94: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x168B94u;
    {
        const bool branch_taken_0x168b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168b94) {
            ctx->pc = 0x168B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168B94u;
            // 0x168b98: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168BE0u;
            goto label_168be0;
        }
    }
    ctx->pc = 0x168B9Cu;
    // 0x168b9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ba0: 0xc06164c  jal         func_185930
    ctx->pc = 0x168BA0u;
    SET_GPR_U32(ctx, 31, 0x168BA8u);
    ctx->pc = 0x168BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168BA0u;
    // 0x168ba4: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x168BA0u, 0x168BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168BA8u;
label_168ba8:
    // 0x168ba8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168bac: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x168bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x168bb0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168bb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168bb4: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x168bb4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x168bb8: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x168bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x168bbc: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x168bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x168bc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x168bc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168bc4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x168bc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x168bc8: 0x3c7100b  movn        $v0, $fp, $a3
    ctx->pc = 0x168bc8u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 30));
    // 0x168bcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168bd0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x168bd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x168bd4: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x168BD4u;
    SET_GPR_U32(ctx, 31, 0x168BDCu);
    ctx->pc = 0x168BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168BD4u;
    // 0x168bd8: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x168BD4u, 0x168BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168BDCu;
label_168bdc:
    // 0x168bdc: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x168bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_168be0:
    // 0x168be0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x168be0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x168be4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x168be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x168be8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x168be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x168bec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x168becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x168bf0: 0x2e3182a  slt         $v1, $s7, $v1
    ctx->pc = 0x168bf0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x168bf4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x168bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x168bf8: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x168bf8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x168bfc: 0x1460ff88  bnez        $v1, . + 4 + (-0x78 << 2)
    ctx->pc = 0x168BFCu;
    {
        const bool branch_taken_0x168bfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x168C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168BFCu;
        // 0x168c00: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168bfc) {
            ctx->pc = 0x168A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168a20;
        }
    }
    ctx->pc = 0x168C04u;
label_168c04:
    // 0x168c04: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x168C04u;
    {
        const bool branch_taken_0x168c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C04u;
        // 0x168c08: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168c04) {
            ctx->pc = 0x168E50u;
            goto label_168e50;
        }
    }
    ctx->pc = 0x168C0Cu;
    // 0x168c0c: 0x0  nop
    ctx->pc = 0x168c0cu;
    // NOP
label_168c10:
    // 0x168c10: 0x10c0012f  beqz        $a2, . + 4 + (0x12F << 2)
    ctx->pc = 0x168C10u;
    {
        const bool branch_taken_0x168c10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x168C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C10u;
        // 0x168c14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168c10) {
            ctx->pc = 0x1690D0u;
            goto label_1690d0;
        }
    }
    ctx->pc = 0x168C18u;
    // 0x168c18: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x168c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x168c1c: 0x14400099  bnez        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x168C1Cu;
    {
        const bool branch_taken_0x168c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C1Cu;
        // 0x168c20: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168c1c) {
            ctx->pc = 0x168E84u;
            goto label_168e84;
        }
    }
    ctx->pc = 0x168C24u;
    // 0x168c24: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x168c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x168c28: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x168c28u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x168c2c: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x168c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x168c30: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x168c30u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168c34: 0xafb60220  sw          $s6, 0x220($sp)
    ctx->pc = 0x168c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 22));
    // 0x168c38: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x168c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x168c3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x168c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x168c40: 0x24910180  addiu       $s1, $a0, 0x180
    ctx->pc = 0x168c40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x168c44: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x168c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x168c48: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x168c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x168c4c: 0xafb30224  sw          $s3, 0x224($sp)
    ctx->pc = 0x168c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 19));
    // 0x168c50: 0x18a0007e  blez        $a1, . + 4 + (0x7E << 2)
    ctx->pc = 0x168C50u;
    {
        const bool branch_taken_0x168c50 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x168C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C50u;
        // 0x168c54: 0x82a021  addu        $s4, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168c50) {
            ctx->pc = 0x168E4Cu;
            goto label_168e4c;
        }
    }
    ctx->pc = 0x168C58u;
    // 0x168c58: 0xc7958418  lwc1        $f21, -0x7BE8($gp)
    ctx->pc = 0x168c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x168c5c: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x168c5cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168c60: 0x27b601a0  addiu       $s6, $sp, 0x1A0
    ctx->pc = 0x168c60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x168c64: 0x0  nop
    ctx->pc = 0x168c64u;
    // NOP
label_168c68:
    // 0x168c68: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x168c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x168c6c: 0x172080  sll         $a0, $s7, 2
    ctx->pc = 0x168c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x168c70: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x168c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x168c74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x168c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168c78: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x168C78u;
    {
        const bool branch_taken_0x168c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x168C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C78u;
        // 0x168c7c: 0x8fa30224  lw          $v1, 0x224($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168c78) {
            ctx->pc = 0x168E24u;
            goto label_168e24;
        }
    }
    ctx->pc = 0x168C80u;
    // 0x168c80: 0x8fa70220  lw          $a3, 0x220($sp)
    ctx->pc = 0x168c80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x168c84: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x168c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x168c88: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x168c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x168c8c: 0x8ce301b4  lw          $v1, 0x1B4($a3)
    ctx->pc = 0x168c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x168c90: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x168c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x168c94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x168c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168c98: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x168c98u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x168c9c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x168c9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x168ca0: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x168ca0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x168ca4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x168ca4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168ca8: 0x4a0002ff  vnop
    ctx->pc = 0x168ca8u;
    // NOP operation, no action needed for VU0
    // 0x168cac: 0x4a0002ff  vnop
    ctx->pc = 0x168cacu;
    // NOP operation, no action needed for VU0
    // 0x168cb0: 0x4a0002ff  vnop
    ctx->pc = 0x168cb0u;
    // NOP operation, no action needed for VU0
    // 0x168cb4: 0x4a0002ff  vnop
    ctx->pc = 0x168cb4u;
    // NOP operation, no action needed for VU0
    // 0x168cb8: 0x4a0002ff  vnop
    ctx->pc = 0x168cb8u;
    // NOP operation, no action needed for VU0
    // 0x168cbc: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x168cbcu;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x168cc0: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x168cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x168cc4: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x168cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x168cc8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x168CC8u;
    {
        const bool branch_taken_0x168cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168CC8u;
        // 0x168ccc: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168cc8) {
            ctx->pc = 0x168D14u;
            goto label_168d14;
        }
    }
    ctx->pc = 0x168CD0u;
    // 0x168cd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168cd4: 0xc06164c  jal         func_185930
    ctx->pc = 0x168CD4u;
    SET_GPR_U32(ctx, 31, 0x168CDCu);
    ctx->pc = 0x168CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168CD4u;
    // 0x168cd8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x168CD4u, 0x168CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168CDCu;
label_168cdc:
    // 0x168cdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ce0: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x168ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x168ce4: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x168ce4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x168ce8: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x168ce8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x168cec: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x168cecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x168cf0: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x168cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x168cf4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x168cf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168cf8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x168cf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x168cfc: 0x3c3100b  movn        $v0, $fp, $v1
    ctx->pc = 0x168cfcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 30));
    // 0x168d00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d04: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x168d04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x168d08: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x168D08u;
    SET_GPR_U32(ctx, 31, 0x168D10u);
    ctx->pc = 0x168D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168D08u;
    // 0x168d0c: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x168D08u, 0x168D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168D10u;
label_168d10:
    // 0x168d10: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x168d10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_168d14:
    // 0x168d14: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x168d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x168d18: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168d18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168d1c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x168d1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168d20: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x168d20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168d24: 0x4a0002ff  vnop
    ctx->pc = 0x168d24u;
    // NOP operation, no action needed for VU0
    // 0x168d28: 0x4a0002ff  vnop
    ctx->pc = 0x168d28u;
    // NOP operation, no action needed for VU0
    // 0x168d2c: 0x4a0002ff  vnop
    ctx->pc = 0x168d2cu;
    // NOP operation, no action needed for VU0
    // 0x168d30: 0x4a0002ff  vnop
    ctx->pc = 0x168d30u;
    // NOP operation, no action needed for VU0
    // 0x168d34: 0x4a0002ff  vnop
    ctx->pc = 0x168d34u;
    // NOP operation, no action needed for VU0
    // 0x168d38: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x168d38u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x168d3c: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x168d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x168d40: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x168d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x168d44: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x168D44u;
    {
        const bool branch_taken_0x168d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168d44) {
            ctx->pc = 0x168D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168D44u;
            // 0x168d48: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168DACu;
            goto label_168dac;
        }
    }
    ctx->pc = 0x168D4Cu;
    // 0x168d4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d50: 0xc06164c  jal         func_185930
    ctx->pc = 0x168D50u;
    SET_GPR_U32(ctx, 31, 0x168D58u);
    ctx->pc = 0x168D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168D50u;
    // 0x168d54: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x168D50u, 0x168D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168D58u;
label_168d58:
    // 0x168d58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d5c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168d5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168d60: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x168d60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x168d64: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x168d64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x168d68: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x168d68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168d6c: 0x4be1097f  vftoi15.xyzw $vf1, $vf1
    ctx->pc = 0x168d6cu;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168d70: 0xfac10000  sqc2        $vf1, 0x0($s6)
    ctx->pc = 0x168d70u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x168d74: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x168d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x168d78: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x168d78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x168d7c: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x168d7cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x168d80: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x168d80u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x168d84: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x168d84u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x168d88: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x168d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x168d8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x168d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d90: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x168d90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x168d94: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x168d94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x168d98: 0x3c4100b  movn        $v0, $fp, $a0
    ctx->pc = 0x168d98u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 30));
    // 0x168d9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168da0: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x168DA0u;
    SET_GPR_U32(ctx, 31, 0x168DA8u);
    ctx->pc = 0x168DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168DA0u;
    // 0x168da4: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x168DA0u, 0x168DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168DA8u;
label_168da8:
    // 0x168da8: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x168da8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_168dac:
    // 0x168dac: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x168dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x168db0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168db0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168db4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x168db4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168db8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x168db8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168dbc: 0x4a0002ff  vnop
    ctx->pc = 0x168dbcu;
    // NOP operation, no action needed for VU0
    // 0x168dc0: 0x4a0002ff  vnop
    ctx->pc = 0x168dc0u;
    // NOP operation, no action needed for VU0
    // 0x168dc4: 0x4a0002ff  vnop
    ctx->pc = 0x168dc4u;
    // NOP operation, no action needed for VU0
    // 0x168dc8: 0x4a0002ff  vnop
    ctx->pc = 0x168dc8u;
    // NOP operation, no action needed for VU0
    // 0x168dcc: 0x4a0002ff  vnop
    ctx->pc = 0x168dccu;
    // NOP operation, no action needed for VU0
    // 0x168dd0: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x168dd0u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x168dd4: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x168dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x168dd8: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x168dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x168ddc: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x168DDCu;
    {
        const bool branch_taken_0x168ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168ddc) {
            ctx->pc = 0x168DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168DDCu;
            // 0x168de0: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168E28u;
            goto label_168e28;
        }
    }
    ctx->pc = 0x168DE4u;
    // 0x168de4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168de8: 0xc06164c  jal         func_185930
    ctx->pc = 0x168DE8u;
    SET_GPR_U32(ctx, 31, 0x168DF0u);
    ctx->pc = 0x168DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168DE8u;
    // 0x168dec: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x168DE8u, 0x168DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168DF0u;
label_168df0:
    // 0x168df0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168df4: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x168df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x168df8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168df8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168dfc: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x168dfcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x168e00: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x168e00u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x168e04: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x168e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x168e08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x168e08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e0c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x168e0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x168e10: 0x3c7100b  movn        $v0, $fp, $a3
    ctx->pc = 0x168e10u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 30));
    // 0x168e14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e18: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x168e18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x168e1c: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x168E1Cu;
    SET_GPR_U32(ctx, 31, 0x168E24u);
    ctx->pc = 0x168E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168E1Cu;
    // 0x168e20: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x168E1Cu, 0x168E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168E24u;
label_168e24:
    // 0x168e24: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x168e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_168e28:
    // 0x168e28: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x168e28u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x168e2c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x168e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x168e30: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x168e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x168e34: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x168e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x168e38: 0x2e3182a  slt         $v1, $s7, $v1
    ctx->pc = 0x168e38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x168e3c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x168e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x168e40: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x168e40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x168e44: 0x1460ff88  bnez        $v1, . + 4 + (-0x78 << 2)
    ctx->pc = 0x168E44u;
    {
        const bool branch_taken_0x168e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x168E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E44u;
        // 0x168e48: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e44) {
            ctx->pc = 0x168C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168c68;
        }
    }
    ctx->pc = 0x168E4Cu;
label_168e4c:
    // 0x168e4c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x168e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_168e50:
    // 0x168e50: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x168e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x168e54: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x168e54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x168e58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x168e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x168e5c: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x168e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x168e60: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x168e60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    // 0x168e64: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x168E64u;
    {
        const bool branch_taken_0x168e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E64u;
        // 0x168e68: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e64) {
            ctx->pc = 0x1690D8u;
            goto label_1690d8;
        }
    }
    ctx->pc = 0x168E6Cu;
    // 0x168e6c: 0x0  nop
    ctx->pc = 0x168e6cu;
    // NOP
label_168e70:
    // 0x168e70: 0x10c00097  beqz        $a2, . + 4 + (0x97 << 2)
    ctx->pc = 0x168E70u;
    {
        const bool branch_taken_0x168e70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E70u;
        // 0x168e74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e70) {
            ctx->pc = 0x1690D0u;
            goto label_1690d0;
        }
    }
    ctx->pc = 0x168E78u;
    // 0x168e78: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x168e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x168e7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168E7Cu;
    {
        const bool branch_taken_0x168e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E7Cu;
        // 0x168e80: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e7c) {
            ctx->pc = 0x168E90u;
            goto label_168e90;
        }
    }
    ctx->pc = 0x168E84u;
label_168e84:
    // 0x168e84: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x168E84u;
    {
        const bool branch_taken_0x168e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E84u;
        // 0x168e88: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e84) {
            ctx->pc = 0x1690D8u;
            goto label_1690d8;
        }
    }
    ctx->pc = 0x168E8Cu;
    // 0x168e8c: 0x0  nop
    ctx->pc = 0x168e8cu;
    // NOP
label_168e90:
    // 0x168e90: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x168e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x168e94: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x168e94u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e98: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x168e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x168e9c: 0xafb60228  sw          $s6, 0x228($sp)
    ctx->pc = 0x168e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 22));
    // 0x168ea0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x168ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x168ea4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x168ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x168ea8: 0x8fb701e0  lw          $s7, 0x1E0($sp)
    ctx->pc = 0x168ea8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x168eac: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x168eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x168eb0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x168eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x168eb4: 0xafb3022c  sw          $s3, 0x22C($sp)
    ctx->pc = 0x168eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 19));
    // 0x168eb8: 0x82a021  addu        $s4, $a0, $v0
    ctx->pc = 0x168eb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x168ebc: 0x18a0007d  blez        $a1, . + 4 + (0x7D << 2)
    ctx->pc = 0x168EBCu;
    {
        const bool branch_taken_0x168ebc = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x168EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168EBCu;
        // 0x168ec0: 0x249100c0  addiu       $s1, $a0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ebc) {
            ctx->pc = 0x1690B4u;
            goto label_1690b4;
        }
    }
    ctx->pc = 0x168EC4u;
    // 0x168ec4: 0xc794841c  lwc1        $f20, -0x7BE4($gp)
    ctx->pc = 0x168ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x168ec8: 0x27b601d0  addiu       $s6, $sp, 0x1D0
    ctx->pc = 0x168ec8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x168ecc: 0x0  nop
    ctx->pc = 0x168eccu;
    // NOP
label_168ed0:
    // 0x168ed0: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x168ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x168ed4: 0x1e2080  sll         $a0, $fp, 2
    ctx->pc = 0x168ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x168ed8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x168ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x168edc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x168edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168ee0: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x168EE0u;
    {
        const bool branch_taken_0x168ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x168EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168EE0u;
        // 0x168ee4: 0x8fa3022c  lw          $v1, 0x22C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ee0) {
            ctx->pc = 0x16908Cu;
            goto label_16908c;
        }
    }
    ctx->pc = 0x168EE8u;
    // 0x168ee8: 0x8fa70228  lw          $a3, 0x228($sp)
    ctx->pc = 0x168ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x168eec: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x168eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x168ef0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x168ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x168ef4: 0x8ce301b4  lw          $v1, 0x1B4($a3)
    ctx->pc = 0x168ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x168ef8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x168ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x168efc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x168efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168f00: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x168f00u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x168f04: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x168f04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x168f08: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x168f08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x168f0c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x168f0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168f10: 0x4a0002ff  vnop
    ctx->pc = 0x168f10u;
    // NOP operation, no action needed for VU0
    // 0x168f14: 0x4a0002ff  vnop
    ctx->pc = 0x168f14u;
    // NOP operation, no action needed for VU0
    // 0x168f18: 0x4a0002ff  vnop
    ctx->pc = 0x168f18u;
    // NOP operation, no action needed for VU0
    // 0x168f1c: 0x4a0002ff  vnop
    ctx->pc = 0x168f1cu;
    // NOP operation, no action needed for VU0
    // 0x168f20: 0x4a0002ff  vnop
    ctx->pc = 0x168f20u;
    // NOP operation, no action needed for VU0
    // 0x168f24: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x168f24u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x168f28: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x168f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x168f2c: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x168f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x168f30: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x168F30u;
    {
        const bool branch_taken_0x168f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F30u;
        // 0x168f34: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f30) {
            ctx->pc = 0x168F7Cu;
            goto label_168f7c;
        }
    }
    ctx->pc = 0x168F38u;
    // 0x168f38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168f3c: 0xc06164c  jal         func_185930
    ctx->pc = 0x168F3Cu;
    SET_GPR_U32(ctx, 31, 0x168F44u);
    ctx->pc = 0x168F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168F3Cu;
    // 0x168f40: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x168F3Cu, 0x168F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168F44u;
label_168f44:
    // 0x168f44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168f48: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x168f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x168f4c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x168f4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x168f50: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x168f50u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x168f54: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x168f54u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x168f58: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x168f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x168f5c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x168f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168f60: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x168f60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168f64: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x168f64u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x168f68: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x168f68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168f6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168f70: 0xc068bdc  jal         func_1A2F70
    ctx->pc = 0x168F70u;
    SET_GPR_U32(ctx, 31, 0x168F78u);
    ctx->pc = 0x168F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168F70u;
    // 0x168f74: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F70u, 0x168F70u, 0x168F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168F78u;
label_168f78:
    // 0x168f78: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x168f78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_168f7c:
    // 0x168f7c: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x168f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x168f80: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168f80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168f84: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x168f84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168f88: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x168f88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168f8c: 0x4a0002ff  vnop
    ctx->pc = 0x168f8cu;
    // NOP operation, no action needed for VU0
    // 0x168f90: 0x4a0002ff  vnop
    ctx->pc = 0x168f90u;
    // NOP operation, no action needed for VU0
    // 0x168f94: 0x4a0002ff  vnop
    ctx->pc = 0x168f94u;
    // NOP operation, no action needed for VU0
    // 0x168f98: 0x4a0002ff  vnop
    ctx->pc = 0x168f98u;
    // NOP operation, no action needed for VU0
    // 0x168f9c: 0x4a0002ff  vnop
    ctx->pc = 0x168f9cu;
    // NOP operation, no action needed for VU0
    // 0x168fa0: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x168fa0u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x168fa4: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x168fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x168fa8: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x168fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x168fac: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x168FACu;
    {
        const bool branch_taken_0x168fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168fac) {
            ctx->pc = 0x168FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168FACu;
            // 0x168fb0: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169014u;
            goto label_169014;
        }
    }
    ctx->pc = 0x168FB4u;
    // 0x168fb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168fb8: 0xc06164c  jal         func_185930
    ctx->pc = 0x168FB8u;
    SET_GPR_U32(ctx, 31, 0x168FC0u);
    ctx->pc = 0x168FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168FB8u;
    // 0x168fbc: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x168FB8u, 0x168FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168FC0u;
label_168fc0:
    // 0x168fc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168fc4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168fc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168fc8: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x168fc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x168fcc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x168fccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x168fd0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x168fd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168fd4: 0x4be1097f  vftoi15.xyzw $vf1, $vf1
    ctx->pc = 0x168fd4u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168fd8: 0xfac10000  sqc2        $vf1, 0x0($s6)
    ctx->pc = 0x168fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x168fdc: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x168fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x168fe0: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x168fe0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x168fe4: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x168fe4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x168fe8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x168fe8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x168fec: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x168fecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x168ff0: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x168ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x168ff4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x168ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168ff8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x168ff8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ffc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169000: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x169000u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x169004: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x169004u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169008: 0xc068bdc  jal         func_1A2F70
    ctx->pc = 0x169008u;
    SET_GPR_U32(ctx, 31, 0x169010u);
    ctx->pc = 0x16900Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169008u;
    // 0x16900c: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F70u, 0x169008u, 0x169010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169010u;
label_169010:
    // 0x169010: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x169010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_169014:
    // 0x169014: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x169014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x169018: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x169018u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16901c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16901cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169020: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x169020u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x169024: 0x4a0002ff  vnop
    ctx->pc = 0x169024u;
    // NOP operation, no action needed for VU0
    // 0x169028: 0x4a0002ff  vnop
    ctx->pc = 0x169028u;
    // NOP operation, no action needed for VU0
    // 0x16902c: 0x4a0002ff  vnop
    ctx->pc = 0x16902cu;
    // NOP operation, no action needed for VU0
    // 0x169030: 0x4a0002ff  vnop
    ctx->pc = 0x169030u;
    // NOP operation, no action needed for VU0
    // 0x169034: 0x4a0002ff  vnop
    ctx->pc = 0x169034u;
    // NOP operation, no action needed for VU0
    // 0x169038: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x169038u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x16903c: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x16903cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x169040: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x169040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x169044: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x169044u;
    {
        const bool branch_taken_0x169044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169044) {
            ctx->pc = 0x169048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169044u;
            // 0x169048: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169090u;
            goto label_169090;
        }
    }
    ctx->pc = 0x16904Cu;
    // 0x16904c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16904cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169050: 0xc06164c  jal         func_185930
    ctx->pc = 0x169050u;
    SET_GPR_U32(ctx, 31, 0x169058u);
    ctx->pc = 0x169054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169050u;
    // 0x169054: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x169050u, 0x169058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169058u;
label_169058:
    // 0x169058: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x169058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16905c: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x16905cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x169060: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x169060u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x169064: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x169064u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x169068: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x169068u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16906c: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x16906cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x169070: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x169070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169074: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x169074u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169078: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x169078u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x16907c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x16907cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169080: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x169080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169084: 0xc068bdc  jal         func_1A2F70
    ctx->pc = 0x169084u;
    SET_GPR_U32(ctx, 31, 0x16908Cu);
    ctx->pc = 0x169088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169084u;
    // 0x169088: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F70u, 0x169084u, 0x16908Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16908Cu;
label_16908c:
    // 0x16908c: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x16908cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_169090:
    // 0x169090: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x169090u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x169094: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x169094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x169098: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x169098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x16909c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16909cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1690a0: 0x3c3182a  slt         $v1, $fp, $v1
    ctx->pc = 0x1690a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1690a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1690a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1690a8: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1690a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1690ac: 0x1460ff88  bnez        $v1, . + 4 + (-0x78 << 2)
    ctx->pc = 0x1690ACu;
    {
        const bool branch_taken_0x1690ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1690B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1690ACu;
        // 0x1690b0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1690ac) {
            ctx->pc = 0x168ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168ed0;
        }
    }
    ctx->pc = 0x1690B4u;
label_1690b4:
    // 0x1690b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1690b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1690b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1690b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1690bc: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x1690bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x1690c0: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x1690c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    // 0x1690c4: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1690c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1690c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1690C8u;
    {
        const bool branch_taken_0x1690c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1690CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1690C8u;
        // 0x1690cc: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1690c8) {
            ctx->pc = 0x1690D8u;
            goto label_1690d8;
        }
    }
    ctx->pc = 0x1690D0u;
label_1690d0:
    // 0x1690d0: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x1690d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_1690d4:
    // 0x1690d4: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x1690d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_1690d8:
    // 0x1690d8: 0xdfb00230  ld          $s0, 0x230($sp)
    ctx->pc = 0x1690d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1690dc: 0xdfb10238  ld          $s1, 0x238($sp)
    ctx->pc = 0x1690dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x1690e0: 0xdfb20240  ld          $s2, 0x240($sp)
    ctx->pc = 0x1690e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1690e4: 0xdfb30248  ld          $s3, 0x248($sp)
    ctx->pc = 0x1690e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1690e8: 0xdfb40250  ld          $s4, 0x250($sp)
    ctx->pc = 0x1690e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1690ec: 0xdfb50258  ld          $s5, 0x258($sp)
    ctx->pc = 0x1690ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x1690f0: 0xdfb60260  ld          $s6, 0x260($sp)
    ctx->pc = 0x1690f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1690f4: 0xdfb70268  ld          $s7, 0x268($sp)
    ctx->pc = 0x1690f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1690f8: 0xdfbe0270  ld          $fp, 0x270($sp)
    ctx->pc = 0x1690f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x1690fc: 0xdfbf0278  ld          $ra, 0x278($sp)
    ctx->pc = 0x1690fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x169100: 0xc7b50288  lwc1        $f21, 0x288($sp)
    ctx->pc = 0x169100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x169104: 0xc7b40280  lwc1        $f20, 0x280($sp)
    ctx->pc = 0x169104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x169108: 0x3e00008  jr          $ra
    ctx->pc = 0x169108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16910Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169108u;
        // 0x16910c: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169110u;
}

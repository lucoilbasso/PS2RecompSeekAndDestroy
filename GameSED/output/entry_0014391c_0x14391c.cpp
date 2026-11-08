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

// Function: entry_0014391c
// Address: 0x14391c - 0x143aa0
void entry_0014391c_0x14391c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014391c_0x14391c");
#endif

    switch (ctx->pc) {
        case 0x143a20u: goto label_143a20;
        case 0x143a30u: goto label_143a30;
        case 0x143a50u: goto label_143a50;
        case 0x143a8cu: goto label_143a8c;
        default: break;
    }

    ctx->pc = 0x14391cu;

label_14391c:
    // 0x14391c: 0x265001b0  addiu       $s0, $s2, 0x1B0
    ctx->pc = 0x14391cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
label_143920:
    // 0x143920: 0x82c40000  lb          $a0, 0x0($s6)
    ctx->pc = 0x143920u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_143924:
    // 0x143924: 0x82c30002  lb          $v1, 0x2($s6)
    ctx->pc = 0x143924u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 2)));
label_143928:
    // 0x143928: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x143928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_14392c:
    // 0x14392c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x14392cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_143930:
    // 0x143930: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x143930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_143934:
    // 0x143934: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x143934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_143938:
    // 0x143938: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x143938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_14393c:
    // 0x14393c: 0x704410e8  pminw       $v0, $v0, $a0
    ctx->pc = 0x14393cu;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_143940:
    // 0x143940: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x143940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_143944:
    // 0x143944: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x143944u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_143948:
    // 0x143948: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x143948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_14394c:
    // 0x14394c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x14394cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_143950:
    // 0x143950: 0x706218e8  pminw       $v1, $v1, $v0
    ctx->pc = 0x143950u;
    SET_GPR_VEC(ctx, 3, PS2_PMINW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_143954:
    // 0x143954: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x143954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
label_143958:
    // 0x143958: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x143958u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
label_14395c:
    // 0x14395c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x14395cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_143960:
    // 0x143960: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x143960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_143964:
    // 0x143964: 0x704310e8  pminw       $v0, $v0, $v1
    ctx->pc = 0x143964u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_143968:
    // 0x143968: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x143968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_14396c:
    // 0x14396c: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x14396cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_143970:
    // 0x143970: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x143970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_143974:
    // 0x143974: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x143974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_143978:
    // 0x143978: 0x706218c8  pmaxw       $v1, $v1, $v0
    ctx->pc = 0x143978u;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_14397c:
    // 0x14397c: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x14397cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
label_143980:
    // 0x143980: 0xae630010  sw          $v1, 0x10($s3)
    ctx->pc = 0x143980u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 3));
label_143984:
    // 0x143984: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x143984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_143988:
    // 0x143988: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x143988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14398c:
    // 0x14398c: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x14398cu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_143990:
    // 0x143990: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x143990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_143994:
    // 0x143994: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x143994u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_143998:
    // 0x143998: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x143998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_14399c:
    // 0x14399c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x14399cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1439a0:
    // 0x1439a0: 0x706218c8  pmaxw       $v1, $v1, $v0
    ctx->pc = 0x1439a0u;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_1439a4:
    // 0x1439a4: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x1439a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
label_1439a8:
    // 0x1439a8: 0xae630018  sw          $v1, 0x18($s3)
    ctx->pc = 0x1439a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
label_1439ac:
    // 0x1439ac: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1439acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1439b0:
    // 0x1439b0: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x1439b0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1439b4:
    // 0x1439b4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1439b4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1439b8:
    // 0x1439b8: 0xfaa20000  sqc2        $vf2, 0x0($s5)
    ctx->pc = 0x1439b8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1439bc:
    // 0x1439bc: 0x26820030  addiu       $v0, $s4, 0x30
    ctx->pc = 0x1439bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_1439c0:
    // 0x1439c0: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x1439c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_1439c4:
    // 0x1439c4: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x1439c4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1439c8:
    // 0x1439c8: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1439c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1439cc:
    // 0x1439cc: 0xfaa20000  sqc2        $vf2, 0x0($s5)
    ctx->pc = 0x1439ccu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1439d0:
    // 0x1439d0: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x1439d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
label_1439d4:
    // 0x1439d4: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x1439d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
label_1439d8:
    // 0x1439d8: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x1439d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_1439dc:
    // 0x1439dc: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x1439dcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1439e0:
    // 0x1439e0: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1439e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1439e4:
    // 0x1439e4: 0xfaa20000  sqc2        $vf2, 0x0($s5)
    ctx->pc = 0x1439e4u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1439e8:
    // 0x1439e8: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x1439e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1439ec:
    // 0x1439ec: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1439ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_1439f0:
    // 0x1439f0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1439f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1439f4:
    // 0x1439f4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1439f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1439f8:
    // 0x1439f8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1439f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1439fc:
    // 0x1439fc: 0xfaa10000  sqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1439fcu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_143a00:
    // 0x143a00: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x143a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_143a04:
    // 0x143a04: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x143a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_143a08:
    // 0x143a08: 0x26510150  addiu       $s1, $s2, 0x150
    ctx->pc = 0x143a08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_143a0c:
    // 0x143a0c: 0x24630068  addiu       $v1, $v1, 0x68
    ctx->pc = 0x143a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
label_143a10:
    // 0x143a10: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x143a10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_143a14:
    // 0x143a14: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x143a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_143a18:
    // 0x143a18: 0x40f809  jalr        $v0
label_143a1c:
    if (ctx->pc == 0x143A1Cu) {
        ctx->pc = 0x143A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A18u;
        // 0x143a1c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143A20u;
        goto label_143a20;
    }
    ctx->pc = 0x143A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143A20u);
        ctx->pc = 0x143A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A18u;
        // 0x143a1c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143A18u, 0x143A20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143A20u;
label_143a20:
    // 0x143a20: 0x264401c0  addiu       $a0, $s2, 0x1C0
    ctx->pc = 0x143a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
label_143a24:
    // 0x143a24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x143a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_143a28:
    // 0x143a28: 0xc050d58  jal         func_143560
label_143a2c:
    if (ctx->pc == 0x143A2Cu) {
        ctx->pc = 0x143A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A28u;
        // 0x143a2c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143A30u;
        goto label_143a30;
    }
    ctx->pc = 0x143A28u;
    SET_GPR_U32(ctx, 31, 0x143A30u);
    ctx->pc = 0x143A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143A28u;
    // 0x143a2c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143560u, 0x143A28u, 0x143A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143A30u;
label_143a30:
    // 0x143a30: 0x1e1180  sll         $v0, $fp, 6
    ctx->pc = 0x143a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 6));
label_143a34:
    // 0x143a34: 0x8e90000c  lw          $s0, 0xC($s4)
    ctx->pc = 0x143a34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_143a38:
    // 0x143a38: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x143a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_143a3c:
    // 0x143a3c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x143a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_143a40:
    // 0x143a40: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x143a40u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_143a44:
    // 0x143a44: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x143a44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_143a48:
    // 0x143a48: 0xc067260  jal         func_19C980
label_143a4c:
    if (ctx->pc == 0x143A4Cu) {
        ctx->pc = 0x143A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A48u;
        // 0x143a4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143A50u;
        goto label_143a50;
    }
    ctx->pc = 0x143A48u;
    SET_GPR_U32(ctx, 31, 0x143A50u);
    ctx->pc = 0x143A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143A48u;
    // 0x143a4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C980u, 0x143A48u, 0x143A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143A50u;
label_143a50:
    // 0x143a50: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x143a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_143a54:
    // 0x143a54: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x143a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_143a58:
    // 0x143a58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x143a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_143a5c:
    // 0x143a5c: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x143a5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_143a60:
    // 0x143a60: 0x2e22821  addu        $a1, $s7, $v0
    ctx->pc = 0x143a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_143a64:
    // 0x143a64: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x143a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_143a68:
    // 0x143a68: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x143a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_143a6c:
    // 0x143a6c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x143a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_143a70:
    // 0x143a70: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x143a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_143a74:
    // 0x143a74: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x143a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_143a78:
    // 0x143a78: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x143a78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
label_143a7c:
    // 0x143a7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x143a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_143a80:
    // 0x143a80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x143a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_143a84:
    // 0x143a84: 0xc065576  jal         func_1955D8
label_143a88:
    if (ctx->pc == 0x143A88u) {
        ctx->pc = 0x143A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A84u;
        // 0x143a88: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143A8Cu;
        goto label_143a8c;
    }
    ctx->pc = 0x143A84u;
    SET_GPR_U32(ctx, 31, 0x143A8Cu);
    ctx->pc = 0x143A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143A84u;
    // 0x143a88: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1955D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1955D8u, 0x143A84u, 0x143A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143A8Cu;
label_143a8c:
    // 0x143a8c: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x143a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_143a90:
    // 0x143a90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x143a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_143a94:
    // 0x143a94: 0x3c2102b  sltu        $v0, $fp, $v0
    ctx->pc = 0x143a94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_143a98:
    // 0x143a98: 0x1440ff5b  bnez        $v0, . + 4 + (-0xA5 << 2)
label_143a9c:
    if (ctx->pc == 0x143A9Cu) {
        ctx->pc = 0x143AA0u;
        goto label_fallthrough_0x143a98;
    }
    ctx->pc = 0x143A98u;
    {
        const bool branch_taken_0x143a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x143a98) {
            ctx->pc = 0x143808u;
            return;
        }
    }
label_fallthrough_0x143a98:
    ctx->pc = 0x143AA0u;
}

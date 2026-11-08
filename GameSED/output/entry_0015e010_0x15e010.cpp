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

// Function: entry_0015e010
// Address: 0x15e010 - 0x15e160
void entry_0015e010_0x15e010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e010_0x15e010");
#endif

    switch (ctx->pc) {
        case 0x15e018u: goto label_15e018;
        default: break;
    }

    ctx->pc = 0x15e010u;

label_15e010:
    // 0x15e010: 0xc06a202  jal         func_1A8808
label_15e014:
    if (ctx->pc == 0x15E014u) {
        ctx->pc = 0x15E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E010u;
        // 0x15e014: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E018u;
        goto label_15e018;
    }
    ctx->pc = 0x15E010u;
    SET_GPR_U32(ctx, 31, 0x15E018u);
    ctx->pc = 0x15E014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E010u;
    // 0x15e014: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x15E010u, 0x15E018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E018u;
label_15e018:
    // 0x15e018: 0x544000b4  bnel        $v0, $zero, . + 4 + (0xB4 << 2)
label_15e01c:
    if (ctx->pc == 0x15E01Cu) {
        ctx->pc = 0x15E01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E018u;
        // 0x15e01c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E020u;
        goto label_15e020;
    }
    ctx->pc = 0x15E018u;
    {
        const bool branch_taken_0x15e018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e018) {
            ctx->pc = 0x15E01Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E018u;
            // 0x15e01c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E2ECu;
            return;
        }
    }
    ctx->pc = 0x15E020u;
label_15e020:
    // 0x15e020: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x15e020u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_15e024:
    // 0x15e024: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15e024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15e028:
    // 0x15e028: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x15e028u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_15e02c:
    // 0x15e02c: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x15e02cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_15e030:
    // 0x15e030: 0x70003030  pmfhl.lw    $a2
    ctx->pc = 0x15e030u;
    SET_GPR_VEC(ctx, 6, PS2_PMFHL_LW(ctx->hi, ctx->lo));
label_15e034:
    // 0x15e034: 0x633fb  dsra        $a2, $a2, 15
    ctx->pc = 0x15e034u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> 15);
label_15e038:
    // 0x15e038: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x15e038u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15e03c:
    // 0x15e03c: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x15e03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_15e040:
    // 0x15e040: 0x8fa90004  lw          $t1, 0x4($sp)
    ctx->pc = 0x15e040u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_15e044:
    // 0x15e044: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x15e044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_15e048:
    // 0x15e048: 0x95a80204  lhu         $t0, 0x204($t5)
    ctx->pc = 0x15e048u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 516)));
label_15e04c:
    // 0x15e04c: 0x25a70150  addiu       $a3, $t5, 0x150
    ctx->pc = 0x15e04cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), 336));
label_15e050:
    // 0x15e050: 0x95a40206  lhu         $a0, 0x206($t5)
    ctx->pc = 0x15e050u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 518)));
label_15e054:
    // 0x15e054: 0x82c00  sll         $a1, $t0, 16
    ctx->pc = 0x15e054u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
label_15e058:
    // 0x15e058: 0x85aa01a4  lh          $t2, 0x1A4($t5)
    ctx->pc = 0x15e058u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 420)));
label_15e05c:
    // 0x15e05c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x15e05cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
label_15e060:
    // 0x15e060: 0x85ac01a6  lh          $t4, 0x1A6($t5)
    ctx->pc = 0x15e060u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 422)));
label_15e064:
    // 0x15e064: 0x94eb0008  lhu         $t3, 0x8($a3)
    ctx->pc = 0x15e064u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
label_15e068:
    // 0x15e068: 0x51bc0  sll         $v1, $a1, 15
    ctx->pc = 0x15e068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
label_15e06c:
    // 0x15e06c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x15e06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_15e070:
    // 0x15e070: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x15e070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
label_15e074:
    // 0x15e074: 0xae060020  sw          $a2, 0x20($s0)
    ctx->pc = 0x15e074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 6));
label_15e078:
    // 0x15e078: 0x1631807  srav        $v1, $v1, $t3
    ctx->pc = 0x15e078u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 11) & 0x1F));
label_15e07c:
    // 0x15e07c: 0xae090030  sw          $t1, 0x30($s0)
    ctx->pc = 0x15e07cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 9));
label_15e080:
    // 0x15e080: 0xae120038  sw          $s2, 0x38($s0)
    ctx->pc = 0x15e080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 18));
label_15e084:
    // 0x15e084: 0xae150034  sw          $s5, 0x34($s0)
    ctx->pc = 0x15e084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 21));
label_15e088:
    // 0x15e088: 0xa4e80050  sh          $t0, 0x50($a3)
    ctx->pc = 0x15e088u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 80), (uint16_t)GPR_U32(ctx, 8));
label_15e08c:
    // 0x15e08c: 0xa4e40052  sh          $a0, 0x52($a3)
    ctx->pc = 0x15e08cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 82), (uint16_t)GPR_U32(ctx, 4));
label_15e090:
    // 0x15e090: 0xa4ea0054  sh          $t2, 0x54($a3)
    ctx->pc = 0x15e090u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 84), (uint16_t)GPR_U32(ctx, 10));
label_15e094:
    // 0x15e094: 0xa4ec0056  sh          $t4, 0x56($a3)
    ctx->pc = 0x15e094u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 86), (uint16_t)GPR_U32(ctx, 12));
label_15e098:
    // 0x15e098: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x15e098u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_15e09c:
    // 0x15e09c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x15e09cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_15e0a0:
    // 0x15e0a0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x15e0a0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_15e0a4:
    // 0x15e0a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e0a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15e0a8:
    // 0x15e0a8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x15e0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_15e0ac:
    // 0x15e0ac: 0x94e6000a  lhu         $a2, 0xA($a3)
    ctx->pc = 0x15e0acu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_15e0b0:
    // 0x15e0b0: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x15e0b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
label_15e0b4:
    // 0x15e0b4: 0xe4e00060  swc1        $f0, 0x60($a3)
    ctx->pc = 0x15e0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 96), bits); }
label_15e0b8:
    // 0x15e0b8: 0x41bc0  sll         $v1, $a0, 15
    ctx->pc = 0x15e0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 15));
label_15e0bc:
    // 0x15e0bc: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x15e0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
label_15e0c0:
    // 0x15e0c0: 0xc31807  srav        $v1, $v1, $a2
    ctx->pc = 0x15e0c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
label_15e0c4:
    // 0x15e0c4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x15e0c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_15e0c8:
    // 0x15e0c8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x15e0c8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_15e0cc:
    // 0x15e0cc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x15e0ccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_15e0d0:
    // 0x15e0d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e0d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15e0d4:
    // 0x15e0d4: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x15e0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_15e0d8:
    // 0x15e0d8: 0xe4e00064  swc1        $f0, 0x64($a3)
    ctx->pc = 0x15e0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 100), bits); }
label_15e0dc:
    // 0x15e0dc: 0x52bc0  sll         $a1, $a1, 15
    ctx->pc = 0x15e0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
label_15e0e0:
    // 0x15e0e0: 0x24a5c000  addiu       $a1, $a1, -0x4000
    ctx->pc = 0x15e0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950912));
label_15e0e4:
    // 0x15e0e4: 0x1652807  srav        $a1, $a1, $t3
    ctx->pc = 0x15e0e4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 11) & 0x1F));
label_15e0e8:
    // 0x15e0e8: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x15e0e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_15e0ec:
    // 0x15e0ec: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x15e0ecu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_15e0f0:
    // 0x15e0f0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x15e0f0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_15e0f4:
    // 0x15e0f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e0f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15e0f8:
    // 0x15e0f8: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x15e0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_15e0fc:
    // 0x15e0fc: 0xe4e00068  swc1        $f0, 0x68($a3)
    ctx->pc = 0x15e0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 104), bits); }
label_15e100:
    // 0x15e100: 0x423c0  sll         $a0, $a0, 15
    ctx->pc = 0x15e100u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 15));
label_15e104:
    // 0x15e104: 0x2484c000  addiu       $a0, $a0, -0x4000
    ctx->pc = 0x15e104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950912));
label_15e108:
    // 0x15e108: 0xc42007  srav        $a0, $a0, $a2
    ctx->pc = 0x15e108u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
label_15e10c:
    // 0x15e10c: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x15e10cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_15e110:
    // 0x15e110: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x15e110u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_15e114:
    // 0x15e114: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x15e114u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_15e118:
    // 0x15e118: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15e11c:
    // 0x15e11c: 0x96830016  lhu         $v1, 0x16($s4)
    ctx->pc = 0x15e11cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 22)));
label_15e120:
    // 0x15e120: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x15e120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_15e124:
    // 0x15e124: 0x14600070  bnez        $v1, . + 4 + (0x70 << 2)
label_15e128:
    if (ctx->pc == 0x15E128u) {
        ctx->pc = 0x15E128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E124u;
        // 0x15e128: 0xe4e0006c  swc1        $f0, 0x6C($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 108), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E12Cu;
        goto label_15e12c;
    }
    ctx->pc = 0x15E124u;
    {
        const bool branch_taken_0x15e124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E124u;
        // 0x15e128: 0xe4e0006c  swc1        $f0, 0x6C($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e124) {
            ctx->pc = 0x15E2E8u;
            return;
        }
    }
    ctx->pc = 0x15E12Cu;
label_15e12c:
    // 0x15e12c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15e130:
    // 0x15e130: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x15e130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
label_15e134:
    // 0x15e134: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x15e134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15e138:
    // 0x15e138: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x15e138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_15e13c:
    // 0x15e13c: 0x11a00008  beqz        $t5, . + 4 + (0x8 << 2)
label_15e140:
    if (ctx->pc == 0x15E140u) {
        ctx->pc = 0x15E140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E13Cu;
        // 0x15e140: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E144u;
        goto label_15e144;
    }
    ctx->pc = 0x15E13Cu;
    {
        const bool branch_taken_0x15e13c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E13Cu;
        // 0x15e140: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e13c) {
            ctx->pc = 0x15E160u;
            return;
        }
    }
    ctx->pc = 0x15E144u;
label_15e144:
    // 0x15e144: 0x8da2000c  lw          $v0, 0xC($t5)
    ctx->pc = 0x15e144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
label_15e148:
    // 0x15e148: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15e14c:
    // 0x15e14c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e150:
    // 0x15e150: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e150u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e154:
    // 0x15e154: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e158:
    // 0x15e158: 0x60f809  jalr        $v1
label_15e15c:
    if (ctx->pc == 0x15E15Cu) {
        ctx->pc = 0x15E15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E158u;
        // 0x15e15c: 0x1a42021  addu        $a0, $t5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E160u;
        goto label_fallthrough_0x15e158;
    }
    ctx->pc = 0x15E158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E160u);
        ctx->pc = 0x15E15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E158u;
        // 0x15e15c: 0x1a42021  addu        $a0, $t5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E158u, 0x15E160u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15e158:
    ctx->pc = 0x15E160u;
}

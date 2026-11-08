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

// Function: entry_00176680
// Address: 0x176680 - 0x176790
void entry_00176680_0x176680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176680_0x176680");
#endif

    switch (ctx->pc) {
        case 0x1766c0u: goto label_1766c0;
        default: break;
    }

    ctx->pc = 0x176680u;

    // 0x176680: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x176680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x176684: 0x2610e790  addiu       $s0, $s0, -0x1870
    ctx->pc = 0x176684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961040));
    // 0x176688: 0x123043  sra         $a2, $s2, 1
    ctx->pc = 0x176688u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 18), 1));
    // 0x17668c: 0x113843  sra         $a3, $s1, 1
    ctx->pc = 0x17668cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 17), 1));
    // 0x176690: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x176690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x176694: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x176694u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176698: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x176698u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x17669c: 0x473823  subu        $a3, $v0, $a3
    ctx->pc = 0x17669cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1766a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1766a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1766a4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1766a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1766a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1766a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1766ac: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1766acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1766b0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1766b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1766b4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1766b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1766b8: 0xc06aa72  jal         func_1AA9C8
    ctx->pc = 0x1766B8u;
    SET_GPR_U32(ctx, 31, 0x1766C0u);
    ctx->pc = 0x1766BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1766B8u;
    // 0x1766bc: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA9C8u, 0x1766B8u, 0x1766C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1766C0u;
label_1766c0:
    // 0x1766c0: 0x70002ca9  por         $a1, $zero, $zero
    ctx->pc = 0x1766c0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1766c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1766c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1766c8: 0x7e050000  sq          $a1, 0x0($s0)
    ctx->pc = 0x1766c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 5));
    // 0x1766cc: 0x2513818  mult        $a3, $s2, $s1
    ctx->pc = 0x1766ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1766d0: 0x24048000  addiu       $a0, $zero, -0x8000
    ctx->pc = 0x1766d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1766d4: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1766d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1766d8: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x1766d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1766dc: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x1766dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1766e0: 0xde060008  ld          $a2, 0x8($s0)
    ctx->pc = 0x1766e0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1766e4: 0x3105003a  andi        $a1, $t0, 0x3A
    ctx->pc = 0x1766e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)58);
    // 0x1766e8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1766e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1766ec: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x1766ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1766f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1766f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1766f4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1766f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1766f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1766f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1766fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1766fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x176700: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x176700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x176704: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x176704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x176708: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x176708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17670c: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x17670cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x176710: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x176710u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x176714: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x176714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x176718: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x176718u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x17671c: 0x73aba  dsrl        $a3, $a3, 10
    ctx->pc = 0x17671cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 10);
    // 0x176720: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x176720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x176724: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x176724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x176728: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x176728u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x17672c: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x17672cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x176730: 0xfe060008  sd          $a2, 0x8($s0)
    ctx->pc = 0x176730u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 6));
    // 0x176734: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x176734u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x176738: 0xfe070010  sd          $a3, 0x10($s0)
    ctx->pc = 0x176738u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 7));
    // 0x17673c: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x17673cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x176740: 0xf  sync
    ctx->pc = 0x176740u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x176744: 0x16600015  bnez        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x176744u;
    {
        const bool branch_taken_0x176744 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x176748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176744u;
        // 0x176748: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176744) {
            ctx->pc = 0x17679Cu;
            return;
        }
    }
    ctx->pc = 0x17674Cu;
    // 0x17674c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17674cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x176750: 0x2442e750  addiu       $v0, $v0, -0x18B0
    ctx->pc = 0x176750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960976));
    // 0x176754: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x176754u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x176758: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x176758u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17675c: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x17675cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x176760: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x176760u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x176764: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x176764u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[4])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x21E780u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x21E780u, _value); } while (0);
    // 0x176768: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x176768u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[5])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x21E770u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x21E770u, _value); } while (0);
    // 0x17676c: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x17676cu;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[6])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x21E760u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x21E760u, _value); } while (0);
    // 0x176770: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x176770u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[7])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x21E750u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x21E750u, _value); } while (0);
    // 0x176774: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x176774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x176778: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x176778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17677c: 0xc7808548  lwc1        $f0, -0x7AB8($gp)
    ctx->pc = 0x17677cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176780: 0xc781854c  lwc1        $f1, -0x7AB4($gp)
    ctx->pc = 0x176780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176784: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x176784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x21E750u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21E750u, _value); } while (0); }
    // 0x176788: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x176788u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x21E764u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21E764u, _value); } while (0); }
    // 0x17678c: 0xe4420034  swc1        $f2, 0x34($v0)
    ctx->pc = 0x17678cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x21E784u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21E784u, _value); } while (0); }
    ctx->pc = 0x176790u;
}

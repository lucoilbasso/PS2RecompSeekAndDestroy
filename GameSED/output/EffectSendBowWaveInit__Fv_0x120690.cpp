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

// Function: EffectSendBowWaveInit__Fv
// Address: 0x120690 - 0x120838
void EffectSendBowWaveInit__Fv_0x120690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectSendBowWaveInit__Fv_0x120690");
#endif

    switch (ctx->pc) {
        case 0x1206f0u: goto label_1206f0;
        case 0x120740u: goto label_120740;
        case 0x120750u: goto label_120750;
        case 0x12075cu: goto label_12075c;
        case 0x1207a0u: goto label_1207a0;
        default: break;
    }

    ctx->pc = 0x120690u;

    // 0x120690: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x120690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x120694: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x120694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x120698: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x120698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x12069c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12069cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1206a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1206a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1206a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1206a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1206a8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1206a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1206ac: 0xffb50118  sd          $s5, 0x118($sp)
    ctx->pc = 0x1206acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 21));
    // 0x1206b0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1206b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1206b4: 0xffb000f0  sd          $s0, 0xF0($sp)
    ctx->pc = 0x1206b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 16));
    // 0x1206b8: 0xffb100f8  sd          $s1, 0xF8($sp)
    ctx->pc = 0x1206b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 17));
    // 0x1206bc: 0xffb20100  sd          $s2, 0x100($sp)
    ctx->pc = 0x1206bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 18));
    // 0x1206c0: 0xffb30108  sd          $s3, 0x108($sp)
    ctx->pc = 0x1206c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 19));
    // 0x1206c4: 0xffb40110  sd          $s4, 0x110($sp)
    ctx->pc = 0x1206c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 20));
    // 0x1206c8: 0xffb60120  sd          $s6, 0x120($sp)
    ctx->pc = 0x1206c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 22));
    // 0x1206cc: 0xffb70128  sd          $s7, 0x128($sp)
    ctx->pc = 0x1206ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 23));
    // 0x1206d0: 0xffbe0130  sd          $fp, 0x130($sp)
    ctx->pc = 0x1206d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 30));
    // 0x1206d4: 0xffbf0138  sd          $ra, 0x138($sp)
    ctx->pc = 0x1206d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 31));
    // 0x1206d8: 0x2446d240  addiu       $a2, $v0, -0x2DC0
    ctx->pc = 0x1206d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955584));
    // 0x1206dc: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x1206dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1206e0: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x1206e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1206e4: 0xb3a300a7  sdl         $v1, 0xA7($sp)
    ctx->pc = 0x1206e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1206e8: 0xb7a300a0  sdr         $v1, 0xA0($sp)
    ctx->pc = 0x1206e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1206ec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1206ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1206f0:
    // 0x1206f0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1206f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1206f4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1206f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1206f8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1206f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1206fc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1206fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x120700: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x120700u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x120704: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x120704u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x120708: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x120708u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12070c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x12070cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x120710: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x120710u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x120714: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x120714u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x120718: 0x2ea2000a  sltiu       $v0, $s5, 0xA
    ctx->pc = 0x120718u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12071c: 0x0  nop
    ctx->pc = 0x12071cu;
    // NOP
    // 0x120720: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x120720u;
    {
        const bool branch_taken_0x120720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120720u;
        // 0x120724: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120720) {
            ctx->pc = 0x1206F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1206f0;
        }
    }
    ctx->pc = 0x120728u;
    // 0x120728: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x120728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x12072c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x12072cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120730: 0x24560750  addiu       $s6, $v0, 0x750
    ctx->pc = 0x120730u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 1872));
    // 0x120734: 0x27b300b0  addiu       $s3, $sp, 0xB0
    ctx->pc = 0x120734u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x120738: 0x2c0f02d  daddu       $fp, $s6, $zero
    ctx->pc = 0x120738u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12073c: 0x27b700a0  addiu       $s7, $sp, 0xA0
    ctx->pc = 0x12073cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_120740:
    // 0x120740: 0x8ef40000  lw          $s4, 0x0($s7)
    ctx->pc = 0x120740u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x120744: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x120744u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x120748: 0x27d10010  addiu       $s1, $fp, 0x10
    ctx->pc = 0x120748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x12074c: 0x26d00010  addiu       $s0, $s6, 0x10
    ctx->pc = 0x12074cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_120750:
    // 0x120750: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x120750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120754: 0xc067b12  jal         func_19EC48
    ctx->pc = 0x120754u;
    SET_GPR_U32(ctx, 31, 0x12075Cu);
    ctx->pc = 0x120758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120754u;
    // 0x120758: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC48u, 0x120754u, 0x12075Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12075Cu;
label_12075c:
    // 0x12075c: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x12075cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x120760: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x120760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x120764: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x120764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x120768: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x120768u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12076c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x12076cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x120770: 0xda650010  lqc2        $vf5, 0x10($s3)
    ctx->pc = 0x120770u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x120774: 0xda660020  lqc2        $vf6, 0x20($s3)
    ctx->pc = 0x120774u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x120778: 0xda670030  lqc2        $vf7, 0x30($s3)
    ctx->pc = 0x120778u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x12077c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x12077cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x120780: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x120780u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x120784: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x120784u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x120788: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x120788u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x12078c: 0xfa0c0000  sqc2        $vf12, 0x0($s0)
    ctx->pc = 0x12078cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x120790: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x120790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120794: 0x142823  negu        $a1, $s4
    ctx->pc = 0x120794u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x120798: 0xc067b12  jal         func_19EC48
    ctx->pc = 0x120798u;
    SET_GPR_U32(ctx, 31, 0x1207A0u);
    ctx->pc = 0x12079Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120798u;
    // 0x12079c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC48u, 0x120798u, 0x1207A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1207A0u;
label_1207a0:
    // 0x1207a0: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x1207a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x1207a4: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1207a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1207a8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1207a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1207ac: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1207acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1207b0: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x1207b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1207b4: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x1207b4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1207b8: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1207b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1207bc: 0xda650010  lqc2        $vf5, 0x10($s3)
    ctx->pc = 0x1207bcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1207c0: 0xda660020  lqc2        $vf6, 0x20($s3)
    ctx->pc = 0x1207c0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1207c4: 0xda670030  lqc2        $vf7, 0x30($s3)
    ctx->pc = 0x1207c4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1207c8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1207c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1207cc: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1207ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1207d0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1207d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1207d4: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1207d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1207d8: 0xfa2c0000  sqc2        $vf12, 0x0($s1)
    ctx->pc = 0x1207d8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1207dc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1207dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1207e0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1207e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1207e4: 0x2e420015  sltiu       $v0, $s2, 0x15
    ctx->pc = 0x1207e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x1207e8: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1207E8u;
    {
        const bool branch_taken_0x1207e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1207ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1207E8u;
        // 0x1207ec: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1207e8) {
            ctx->pc = 0x120750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120750;
        }
    }
    ctx->pc = 0x1207F0u;
    // 0x1207f0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1207f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1207f4: 0x26d60150  addiu       $s6, $s6, 0x150
    ctx->pc = 0x1207f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 336));
    // 0x1207f8: 0x2ea20002  sltiu       $v0, $s5, 0x2
    ctx->pc = 0x1207f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1207fc: 0x27de0150  addiu       $fp, $fp, 0x150
    ctx->pc = 0x1207fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 336));
    // 0x120800: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x120800u;
    {
        const bool branch_taken_0x120800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120800u;
        // 0x120804: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120800) {
            ctx->pc = 0x120740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120740;
        }
    }
    ctx->pc = 0x120808u;
    // 0x120808: 0xdfb000f0  ld          $s0, 0xF0($sp)
    ctx->pc = 0x120808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x12080c: 0xdfb100f8  ld          $s1, 0xF8($sp)
    ctx->pc = 0x12080cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x120810: 0xdfb20100  ld          $s2, 0x100($sp)
    ctx->pc = 0x120810u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x120814: 0xdfb30108  ld          $s3, 0x108($sp)
    ctx->pc = 0x120814u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x120818: 0xdfb40110  ld          $s4, 0x110($sp)
    ctx->pc = 0x120818u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x12081c: 0xdfb50118  ld          $s5, 0x118($sp)
    ctx->pc = 0x12081cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x120820: 0xdfb60120  ld          $s6, 0x120($sp)
    ctx->pc = 0x120820u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x120824: 0xdfb70128  ld          $s7, 0x128($sp)
    ctx->pc = 0x120824u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x120828: 0xdfbe0130  ld          $fp, 0x130($sp)
    ctx->pc = 0x120828u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x12082c: 0xdfbf0138  ld          $ra, 0x138($sp)
    ctx->pc = 0x12082cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x120830: 0x3e00008  jr          $ra
    ctx->pc = 0x120830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120830u;
        // 0x120834: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120838u;
}

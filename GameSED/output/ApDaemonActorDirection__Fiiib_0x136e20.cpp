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

// Function: ApDaemonActorDirection__Fiiib
// Address: 0x136e20 - 0x136f44
void ApDaemonActorDirection__Fiiib_0x136e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDaemonActorDirection__Fiiib_0x136e20");
#endif

    switch (ctx->pc) {
        case 0x136e50u: goto label_136e50;
        case 0x136e5cu: goto label_136e5c;
        case 0x136ed0u: goto label_136ed0;
        case 0x136ee8u: goto label_136ee8;
        case 0x136f20u: goto label_136f20;
        default: break;
    }

    ctx->pc = 0x136e20u;

    // 0x136e20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x136e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x136e24: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x136e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x136e28: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x136e28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136e2c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x136e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x136e30: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x136e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x136e34: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x136e34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136e38: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x136e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x136e3c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x136e3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136e40: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x136e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x136e44: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x136e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x136e48: 0xc04db4e  jal         func_136D38
    ctx->pc = 0x136E48u;
    SET_GPR_U32(ctx, 31, 0x136E50u);
    ctx->pc = 0x136E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136E48u;
    // 0x136e4c: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D38u, 0x136E48u, 0x136E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136E50u;
label_136e50:
    // 0x136e50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136e54: 0xc04db4e  jal         func_136D38
    ctx->pc = 0x136E54u;
    SET_GPR_U32(ctx, 31, 0x136E5Cu);
    ctx->pc = 0x136E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136E54u;
    // 0x136e58: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D38u, 0x136E54u, 0x136E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136E5Cu;
label_136e5c:
    // 0x136e5c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x136e5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136e60: 0xda230000  lqc2        $vf3, 0x0($s1)
    ctx->pc = 0x136e60u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x136e64: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x136e64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x136e68: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x136e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x136e6c: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x136E6Cu;
    {
        const bool branch_taken_0x136e6c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x136E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136E6Cu;
        // 0x136e70: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136e6c) {
            ctx->pc = 0x136ED0u;
            goto label_136ed0;
        }
    }
    ctx->pc = 0x136E74u;
    // 0x136e74: 0x56620006  bnel        $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x136E74u;
    {
        const bool branch_taken_0x136e74 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x136e74) {
            ctx->pc = 0x136E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136E74u;
            // 0x136e78: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136E90u;
            goto label_136e90;
        }
    }
    ctx->pc = 0x136E7Cu;
    // 0x136e7c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x136e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x136e80: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x136e80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x136e84: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x136E84u;
    {
        const bool branch_taken_0x136e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136E84u;
        // 0x136e88: 0x8c620040  lw          $v0, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136e84) {
            ctx->pc = 0x136EB4u;
            goto label_136eb4;
        }
    }
    ctx->pc = 0x136E8Cu;
    // 0x136e8c: 0x0  nop
    ctx->pc = 0x136e8cu;
    // NOP
label_136e90:
    // 0x136e90: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x136E90u;
    {
        const bool branch_taken_0x136e90 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x136E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136E90u;
        // 0x136e94: 0x8f828a30  lw          $v0, -0x75D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136e90) {
            ctx->pc = 0x136EB4u;
            goto label_136eb4;
        }
    }
    ctx->pc = 0x136E98u;
    // 0x136e98: 0x6600005  bltz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x136E98u;
    {
        const bool branch_taken_0x136e98 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x136E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136E98u;
        // 0x136e9c: 0x8f838d10  lw          $v1, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136e98) {
            ctx->pc = 0x136EB0u;
            goto label_136eb0;
        }
    }
    ctx->pc = 0x136EA0u;
    // 0x136ea0: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x136ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x136ea4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x136ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x136ea8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x136EA8u;
    {
        const bool branch_taken_0x136ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136EA8u;
        // 0x136eac: 0x8c423630  lw          $v0, 0x3630($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136ea8) {
            ctx->pc = 0x136EB4u;
            goto label_136eb4;
        }
    }
    ctx->pc = 0x136EB0u;
label_136eb0:
    // 0x136eb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x136eb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136eb4:
    // 0x136eb4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x136EB4u;
    {
        const bool branch_taken_0x136eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136EB4u;
        // 0x136eb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136eb4) {
            ctx->pc = 0x136ED0u;
            goto label_136ed0;
        }
    }
    ctx->pc = 0x136EBCu;
    // 0x136ebc: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x136ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x136ec0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x136ec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136ec4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x136ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136ec8: 0xc061468  jal         func_1851A0
    ctx->pc = 0x136EC8u;
    SET_GPR_U32(ctx, 31, 0x136ED0u);
    ctx->pc = 0x136ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136EC8u;
    // 0x136ecc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1851A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1851A0u, 0x136EC8u, 0x136ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136ED0u;
label_136ed0:
    // 0x136ed0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x136ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136ed4: 0x16820006  bne         $s4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x136ED4u;
    {
        const bool branch_taken_0x136ed4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x136ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136ED4u;
        // 0x136ed8: 0xc7ac0004  lwc1        $f12, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136ed4) {
            ctx->pc = 0x136EF0u;
            goto label_136ef0;
        }
    }
    ctx->pc = 0x136EDCu;
    // 0x136edc: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x136edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x136ee0: 0xc067a02  jal         func_19E808
    ctx->pc = 0x136EE0u;
    SET_GPR_U32(ctx, 31, 0x136EE8u);
    ctx->pc = 0x136EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136EE0u;
    // 0x136ee4: 0xc7ad0008  lwc1        $f13, 0x8($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x136EE0u, 0x136EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136EE8u;
label_136ee8:
    // 0x136ee8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x136EE8u;
    {
        const bool branch_taken_0x136ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136EE8u;
        // 0x136eec: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136ee8) {
            ctx->pc = 0x136F28u;
            goto label_136f28;
        }
    }
    ctx->pc = 0x136EF0u;
label_136ef0:
    // 0x136ef0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x136ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x136ef4: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x136ef4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136ef8: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x136ef8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x136efc: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x136efcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x136f00: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x136f00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x136f04: 0x4a2703bd  .word       0x4A2703BD                   # vsqrt       $Q, $vf7x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x136f04u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x136f08: 0x4a0003bf  vwaitq
    ctx->pc = 0x136f08u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x136f0c: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q
    ctx->pc = 0x136f0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x136f10: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x136f10u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x136f14: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x136f14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x136f18: 0xc067a02  jal         func_19E808
    ctx->pc = 0x136F18u;
    SET_GPR_U32(ctx, 31, 0x136F20u);
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x136F18u, 0x136F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136F20u;
label_136f20:
    // 0x136f20: 0x21023  negu        $v0, $v0
    ctx->pc = 0x136f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x136f24: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x136f24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_136f28:
    // 0x136f28: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x136f28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x136f2c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x136f2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136f30: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x136f30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x136f34: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x136f34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x136f38: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x136f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x136f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x136F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136F3Cu;
        // 0x136f40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136F44u;
}

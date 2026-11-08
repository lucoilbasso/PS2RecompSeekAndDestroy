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

// Function: ApDaemonActorDistance__Fiii
// Address: 0x138e78 - 0x138f14
void ApDaemonActorDistance__Fiii_0x138e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDaemonActorDistance__Fiii_0x138e78");
#endif

    switch (ctx->pc) {
        case 0x138e98u: goto label_138e98;
        case 0x138ea4u: goto label_138ea4;
        default: break;
    }

    ctx->pc = 0x138e78u;

    // 0x138e78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x138e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x138e7c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x138e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x138e80: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x138e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138e84: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x138e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x138e88: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x138e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x138e8c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x138e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x138e90: 0xc04db4e  jal         func_136D38
    ctx->pc = 0x138E90u;
    SET_GPR_U32(ctx, 31, 0x138E98u);
    ctx->pc = 0x138E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138E90u;
    // 0x138e94: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D38u, 0x138E90u, 0x138E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138E98u;
label_138e98:
    // 0x138e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x138e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138e9c: 0xc04db4e  jal         func_136D38
    ctx->pc = 0x138E9Cu;
    SET_GPR_U32(ctx, 31, 0x138EA4u);
    ctx->pc = 0x138EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138E9Cu;
    // 0x138ea0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D38u, 0x138E9Cu, 0x138EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138EA4u;
label_138ea4:
    // 0x138ea4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x138ea4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138ea8: 0xda230000  lqc2        $vf3, 0x0($s1)
    ctx->pc = 0x138ea8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x138eac: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x138eacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x138eb0: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x138eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x138eb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x138eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138eb8: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x138EB8u;
    {
        const bool branch_taken_0x138eb8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x138EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138EB8u;
        // 0x138ebc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138eb8) {
            ctx->pc = 0x138ED0u;
            goto label_138ed0;
        }
    }
    ctx->pc = 0x138EC0u;
    // 0x138ec0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x138ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x138ec4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x138EC4u;
    {
        const bool branch_taken_0x138ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138EC4u;
        // 0x138ec8: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ec4) {
            ctx->pc = 0x138ED8u;
            goto label_138ed8;
        }
    }
    ctx->pc = 0x138ECCu;
    // 0x138ecc: 0x0  nop
    ctx->pc = 0x138eccu;
    // NOP
label_138ed0:
    // 0x138ed0: 0x52430001  beql        $s2, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x138ED0u;
    {
        const bool branch_taken_0x138ed0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x138ed0) {
            ctx->pc = 0x138ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138ED0u;
            // 0x138ed4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138ED8u;
            goto label_138ed8;
        }
    }
    ctx->pc = 0x138ED8u;
label_138ed8:
    // 0x138ed8: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x138ed8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138edc: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x138edcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x138ee0: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x138ee0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x138ee4: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x138ee4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x138ee8: 0x4a2703bd  .word       0x4A2703BD                   # vsqrt       $Q, $vf7x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x138ee8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x138eec: 0x4a0003bf  vwaitq
    ctx->pc = 0x138eecu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x138ef0: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q
    ctx->pc = 0x138ef0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x138ef4: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x138ef4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x138ef8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x138ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138efc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x138efcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138f00: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x138f00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x138f04: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x138f04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138f08: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x138f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x138f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x138F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F0Cu;
        // 0x138f10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138F14u;
}

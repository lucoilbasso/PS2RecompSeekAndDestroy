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

// Function: entry_00120ed0
// Address: 0x120ed0 - 0x120f78
void entry_00120ed0_0x120ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120ed0_0x120ed0");
#endif

    switch (ctx->pc) {
        case 0x120ed8u: goto label_120ed8;
        case 0x120ee4u: goto label_120ee4;
        case 0x120f08u: goto label_120f08;
        default: break;
    }

    ctx->pc = 0x120ed0u;

    // 0x120ed0: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x120ED0u;
    SET_GPR_U32(ctx, 31, 0x120ED8u);
    ctx->pc = 0x120ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120ED0u;
    // 0x120ed4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x120ED0u, 0x120ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120ED8u;
label_120ed8:
    // 0x120ed8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x120ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120edc: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x120EDCu;
    SET_GPR_U32(ctx, 31, 0x120EE4u);
    ctx->pc = 0x120EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120EDCu;
    // 0x120ee0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x120EDCu, 0x120EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120EE4u;
label_120ee4:
    // 0x120ee4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x120ee4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120ee8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x120ee8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x120eec: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x120eecu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x120ef0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x120ef0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x120ef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x120ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120ef8: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x120ef8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x120efc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x120efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120f00: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x120F00u;
    SET_GPR_U32(ctx, 31, 0x120F08u);
    ctx->pc = 0x120F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120F00u;
    // 0x120f04: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x120F00u, 0x120F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120F08u;
label_120f08:
    // 0x120f08: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x120f08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120f0c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x120f0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x120f10: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x120f10u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x120f14: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x120f14u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x120f18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x120f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120f1c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x120f1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x120f20: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x120f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x120f24: 0xe7b60014  swc1        $f22, 0x14($sp)
    ctx->pc = 0x120f24u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x120f28: 0x26030080  addiu       $v1, $s0, 0x80
    ctx->pc = 0x120f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x120f2c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x120f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x120f30: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x120f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x120f34: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x120f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x120f38: 0x7ae20000  lq          $v0, 0x0($s7)
    ctx->pc = 0x120f38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x120f3c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x120f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x120f40: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x120f40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x120f44: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x120f44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x120f48: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x120f48u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120f4c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x120f4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x120f50: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x120f50u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x120f54: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x120f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x120f58: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x120f58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x120f5c: 0x2b6202b  sltu        $a0, $s5, $s6
    ctx->pc = 0x120f5cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x120f60: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x120f60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x120f64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x120f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x120f68: 0x2c430004  sltiu       $v1, $v0, 0x4
    ctx->pc = 0x120f68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x120f6c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x120F6Cu;
    {
        const bool branch_taken_0x120f6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x120F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120F6Cu;
        // 0x120f70: 0xae22011c  sw          $v0, 0x11C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120f6c) {
            ctx->pc = 0x120F78u;
            return;
        }
    }
    ctx->pc = 0x120F74u;
    // 0x120f74: 0xae20011c  sw          $zero, 0x11C($s1)
    ctx->pc = 0x120f74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 0));
    ctx->pc = 0x120f78u;
}

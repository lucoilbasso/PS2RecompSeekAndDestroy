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

// Function: entry_0011fb70
// Address: 0x11fb70 - 0x11fbe4
void entry_0011fb70_0x11fb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fb70_0x11fb70");
#endif

    switch (ctx->pc) {
        case 0x11fbb4u: goto label_11fbb4;
        default: break;
    }

    ctx->pc = 0x11fb70u;

    // 0x11fb70: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x11fb70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11fb74: 0x52000021  beql        $s0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x11FB74u;
    {
        const bool branch_taken_0x11fb74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fb74) {
            ctx->pc = 0x11FB78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FB74u;
            // 0x11fb78: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FBFCu;
            return;
        }
    }
    ctx->pc = 0x11FB7Cu;
    // 0x11fb7c: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x11fb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x11fb80: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x11FB80u;
    {
        const bool branch_taken_0x11fb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fb80) {
            ctx->pc = 0x11FB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FB80u;
            // 0x11fb84: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FBFCu;
            return;
        }
    }
    ctx->pc = 0x11FB88u;
    // 0x11fb88: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x11fb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fb8c: 0xc6010080  lwc1        $f1, 0x80($s0)
    ctx->pc = 0x11fb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11fb90: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x11fb90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x11fb94: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x11fb94u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x11fb98: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x11fb98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x11fb9c: 0xe6010080  swc1        $f1, 0x80($s0)
    ctx->pc = 0x11fb9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x11fba0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x11fba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fba4: 0x1660000f  bnez        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x11FBA4u;
    {
        const bool branch_taken_0x11fba4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBA4u;
        // 0x11fba8: 0xe6000088  swc1        $f0, 0x88($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fba4) {
            ctx->pc = 0x11FBE4u;
            return;
        }
    }
    ctx->pc = 0x11FBACu;
    // 0x11fbac: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x11FBACu;
    SET_GPR_U32(ctx, 31, 0x11FBB4u);
    ctx->pc = 0x11FBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FBACu;
    // 0x11fbb0: 0x34048000  ori         $a0, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x11FBACu, 0x11FBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FBB4u;
label_11fbb4:
    // 0x11fbb4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11fbb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fbb8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11fbb8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11fbbc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11fbbcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11fbc0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11fbc0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11fbc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11fbc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11fbc8: 0x4600a080  add.s       $f2, $f20, $f0
    ctx->pc = 0x11fbc8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x11fbcc: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x11fbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fbd0: 0xc6010078  lwc1        $f1, 0x78($s0)
    ctx->pc = 0x11fbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11fbd4: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x11fbd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x11fbd8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x11fbd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x11fbdc: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x11fbdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x11fbe0: 0xe6010078  swc1        $f1, 0x78($s0)
    ctx->pc = 0x11fbe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    ctx->pc = 0x11fbe4u;
}

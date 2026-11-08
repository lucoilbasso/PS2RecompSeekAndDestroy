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

// Function: entry_0011fad0
// Address: 0x11fad0 - 0x11fb1c
void entry_0011fad0_0x11fad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fad0_0x11fad0");
#endif

    switch (ctx->pc) {
        case 0x11faecu: goto label_11faec;
        default: break;
    }

    ctx->pc = 0x11fad0u;

    // 0x11fad0: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x11fad0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x11fad4: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x11fad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x11fad8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x11fad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11fadc: 0x16a0000f  bnez        $s5, . + 4 + (0xF << 2)
    ctx->pc = 0x11FADCu;
    {
        const bool branch_taken_0x11fadc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FADCu;
        // 0x11fae0: 0xe6010088  swc1        $f1, 0x88($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fadc) {
            ctx->pc = 0x11FB1Cu;
            return;
        }
    }
    ctx->pc = 0x11FAE4u;
    // 0x11fae4: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x11FAE4u;
    SET_GPR_U32(ctx, 31, 0x11FAECu);
    ctx->pc = 0x11FAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FAE4u;
    // 0x11fae8: 0x34048000  ori         $a0, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x11FAE4u, 0x11FAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FAECu;
label_11faec:
    // 0x11faec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11faecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11faf0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11faf0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11faf4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11faf4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11faf8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11faf8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11fafc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11fafcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11fb00: 0x4600a080  add.s       $f2, $f20, $f0
    ctx->pc = 0x11fb00u;
    ctx->f[2] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x11fb04: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x11fb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fb08: 0xc6010078  lwc1        $f1, 0x78($s0)
    ctx->pc = 0x11fb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11fb0c: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x11fb0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x11fb10: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x11fb10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x11fb14: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x11fb14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x11fb18: 0xe6010078  swc1        $f1, 0x78($s0)
    ctx->pc = 0x11fb18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    ctx->pc = 0x11fb1cu;
}

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

// Function: entry_0016ce84
// Address: 0x16ce84 - 0x16cee8
void entry_0016ce84_0x16ce84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ce84_0x16ce84");
#endif

    switch (ctx->pc) {
        case 0x16ceacu: goto label_16ceac;
        default: break;
    }

    ctx->pc = 0x16ce84u;

    // 0x16ce84: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x16ce84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16ce88: 0x26220290  addiu       $v0, $s1, 0x290
    ctx->pc = 0x16ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
    // 0x16ce8c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16ce8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ce90: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x16ce90u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ce94: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x16ce94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16ce98: 0xf8c40000  sqc2        $vf4, 0x0($a2)
    ctx->pc = 0x16ce98u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16ce9c: 0x8e250154  lw          $a1, 0x154($s1)
    ctx->pc = 0x16ce9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x16cea0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x16cea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16cea4: 0xc061468  jal         func_1851A0
    ctx->pc = 0x16CEA4u;
    SET_GPR_U32(ctx, 31, 0x16CEACu);
    ctx->pc = 0x16CEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CEA4u;
    // 0x16cea8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1851A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1851A0u, 0x16CEA4u, 0x16CEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CEACu;
label_16ceac:
    // 0x16ceac: 0x3c01c2a0  lui         $at, 0xC2A0
    ctx->pc = 0x16ceacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49824 << 16));
    // 0x16ceb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16ceb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ceb4: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x16ceb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16ceb8: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x16ceb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16cebc: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x16cebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x16cec0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x16cec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x16cec4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x16cec4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16cec8: 0xc6210220  lwc1        $f1, 0x220($s1)
    ctx->pc = 0x16cec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16cecc: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x16ceccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x16ced0: 0xc6200228  lwc1        $f0, 0x228($s1)
    ctx->pc = 0x16ced0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ced4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x16ced4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x16ced8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x16ced8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x16cedc: 0xe6210220  swc1        $f1, 0x220($s1)
    ctx->pc = 0x16cedcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 544), bits); }
    // 0x16cee0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16CEE0u;
    {
        const bool branch_taken_0x16cee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CEE0u;
        // 0x16cee4: 0xe6200228  swc1        $f0, 0x228($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 552), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cee0) {
            ctx->pc = 0x16CEECu;
            return;
        }
    }
    ctx->pc = 0x16CEE8u;
}

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

// Function: entry_00163c04
// Address: 0x163c04 - 0x163c68
void entry_00163c04_0x163c04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163c04_0x163c04");
#endif

    switch (ctx->pc) {
        case 0x163c4cu: goto label_163c4c;
        case 0x163c64u: goto label_163c64;
        default: break;
    }

    ctx->pc = 0x163c04u;

    // 0x163c04: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x163c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x163c08: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x163c08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x163c0c: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x163c0cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163c10: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x163c10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x163c14: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x163c14u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x163c18: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x163c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163c1c: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x163c1cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x163c20: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x163c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163c24: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x163c24u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x163c28: 0x46000b40  add.s       $f13, $f1, $f0
    ctx->pc = 0x163c28u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163c2c: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x163c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x163c30: 0x46006005  abs.s       $f0, $f12
    ctx->pc = 0x163c30u;
    ctx->f[0] = FPU_ABS_S(ctx->f[12]);
    // 0x163c34: 0x46006800  add.s       $f0, $f13, $f0
    ctx->pc = 0x163c34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x163c38: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x163c38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163c3c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x163C3Cu;
    {
        const bool branch_taken_0x163c3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x163c3c) {
            ctx->pc = 0x163C68u;
            return;
        }
    }
    ctx->pc = 0x163C44u;
    // 0x163c44: 0xc067a02  jal         func_19E808
    ctx->pc = 0x163C44u;
    SET_GPR_U32(ctx, 31, 0x163C4Cu);
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x163C44u, 0x163C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163C4Cu;
label_163c4c:
    // 0x163c4c: 0x8e4301f4  lw          $v1, 0x1F4($s2)
    ctx->pc = 0x163c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 500)));
    // 0x163c50: 0x8e460270  lw          $a2, 0x270($s2)
    ctx->pc = 0x163c50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 624)));
    // 0x163c54: 0x22823  negu        $a1, $v0
    ctx->pc = 0x163c54u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x163c58: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x163c58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x163c5c: 0xc0677e0  jal         func_19DF80
    ctx->pc = 0x163C5Cu;
    SET_GPR_U32(ctx, 31, 0x163C64u);
    ctx->pc = 0x163C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163C5Cu;
    // 0x163c60: 0x8c640030  lw          $a0, 0x30($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF80u, 0x163C5Cu, 0x163C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163C64u;
label_163c64:
    // 0x163c64: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x163c64u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163c68u;
}

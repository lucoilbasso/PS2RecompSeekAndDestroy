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

// Function: entry_00150e04
// Address: 0x150e04 - 0x150e74
void entry_00150e04_0x150e04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150e04_0x150e04");
#endif

    switch (ctx->pc) {
        case 0x150e44u: goto label_150e44;
        case 0x150e6cu: goto label_150e6c;
        default: break;
    }

    ctx->pc = 0x150e04u;

    // 0x150e04: 0x8e020690  lw          $v0, 0x690($s0)
    ctx->pc = 0x150e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x150e08: 0x8c431ab0  lw          $v1, 0x1AB0($v0)
    ctx->pc = 0x150e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6832)));
    // 0x150e0c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x150E0Cu;
    {
        const bool branch_taken_0x150e0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x150E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E0Cu;
        // 0x150e10: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e0c) {
            ctx->pc = 0x150E74u;
            return;
        }
    }
    ctx->pc = 0x150E14u;
    // 0x150e14: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x150e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x150e18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x150e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x150e1c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x150E1Cu;
    {
        const bool branch_taken_0x150e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150e1c) {
            ctx->pc = 0x150E74u;
            return;
        }
    }
    ctx->pc = 0x150E24u;
    // 0x150e24: 0xc6000380  lwc1        $f0, 0x380($s0)
    ctx->pc = 0x150e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150e28: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x150e28u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x150e2c: 0xc781823c  lwc1        $f1, -0x7DC4($gp)
    ctx->pc = 0x150e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150e30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x150e30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150e34: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x150E34u;
    {
        const bool branch_taken_0x150e34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x150E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E34u;
        // 0x150e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e34) {
            ctx->pc = 0x150E74u;
            return;
        }
    }
    ctx->pc = 0x150E3Cu;
    // 0x150e3c: 0xc053dee  jal         func_14F7B8
    ctx->pc = 0x150E3Cu;
    SET_GPR_U32(ctx, 31, 0x150E44u);
    ctx->pc = 0x150E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150E3Cu;
    // 0x150e40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F7B8u, 0x150E3Cu, 0x150E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150E44u;
label_150e44:
    // 0x150e44: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x150e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x150e48: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x150e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x150e4c: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x150e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x150e50: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x150e50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150e54: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x150e54u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150e58: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x150e58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x150e5c: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x150e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x150e60: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x150e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x150e64: 0xc067a02  jal         func_19E808
    ctx->pc = 0x150E64u;
    SET_GPR_U32(ctx, 31, 0x150E6Cu);
    ctx->pc = 0x150E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150E64u;
    // 0x150e68: 0xc7ad0008  lwc1        $f13, 0x8($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x150E64u, 0x150E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150E6Cu;
label_150e6c:
    // 0x150e6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x150e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150e70: 0xae02038c  sw          $v0, 0x38C($s0)
    ctx->pc = 0x150e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 908), GPR_U32(ctx, 2));
    ctx->pc = 0x150e74u;
}

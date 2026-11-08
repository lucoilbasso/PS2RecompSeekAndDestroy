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

// Function: WViewInitLocal__FP6WcView
// Address: 0x186980 - 0x186a74
void WViewInitLocal__FP6WcView_0x186980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WViewInitLocal__FP6WcView_0x186980");
#endif

    switch (ctx->pc) {
        case 0x1869b8u: goto label_1869b8;
        case 0x1869d0u: goto label_1869d0;
        default: break;
    }

    ctx->pc = 0x186980u;

    // 0x186980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x186984: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x186984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x186988: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x186988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18698c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18698cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x186990: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x186990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186994: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x186994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x186998: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x186998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18699c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x18699cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1869a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1869a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1869a4: 0xe60c0154  swc1        $f12, 0x154($s0)
    ctx->pc = 0x1869a4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
    // 0x1869a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1869a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1869ac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1869acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1869b0: 0xc067a5e  jal         func_19E978
    ctx->pc = 0x1869B0u;
    SET_GPR_U32(ctx, 31, 0x1869B8u);
    ctx->pc = 0x1869B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1869B0u;
    // 0x1869b4: 0xe600015c  swc1        $f0, 0x15C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 348), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E978u, 0x1869B0u, 0x1869B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1869B8u;
label_1869b8:
    // 0x1869b8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1869b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1869bc: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x1869bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
    // 0x1869c0: 0x24a5eb50  addiu       $a1, $a1, -0x14B0
    ctx->pc = 0x1869c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962000));
    // 0x1869c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1869c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1869c8: 0xc0618c2  jal         func_186308
    ctx->pc = 0x1869C8u;
    SET_GPR_U32(ctx, 31, 0x1869D0u);
    ctx->pc = 0x1869CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1869C8u;
    // 0x1869cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x1869C8u, 0x1869D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1869D0u;
label_1869d0:
    // 0x1869d0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1869d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1869d4: 0x2442eb60  addiu       $v0, $v0, -0x14A0
    ctx->pc = 0x1869d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x1869d8: 0x26030160  addiu       $v1, $s0, 0x160
    ctx->pc = 0x1869d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x1869dc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1869dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x21EB60u));
    // 0x1869e0: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1869e0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1869e4: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1869e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1869e8: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1869e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1869ec: 0x8e040150  lw          $a0, 0x150($s0)
    ctx->pc = 0x1869ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1869f0: 0x2402fdff  addiu       $v0, $zero, -0x201
    ctx->pc = 0x1869f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x1869f4: 0xae0001b0  sw          $zero, 0x1B0($s0)
    ctx->pc = 0x1869f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
    // 0x1869f8: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x1869f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1869fc: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1869fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x186a00: 0xae0501a8  sw          $a1, 0x1A8($s0)
    ctx->pc = 0x186a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 5));
    // 0x186a04: 0xae0301ac  sw          $v1, 0x1AC($s0)
    ctx->pc = 0x186a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 3));
    // 0x186a08: 0xae040150  sw          $a0, 0x150($s0)
    ctx->pc = 0x186a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 4));
    // 0x186a0c: 0xae0001a0  sw          $zero, 0x1A0($s0)
    ctx->pc = 0x186a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
    // 0x186a10: 0xae0001a4  sw          $zero, 0x1A4($s0)
    ctx->pc = 0x186a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 0));
    // 0x186a14: 0xae0001b4  sw          $zero, 0x1B4($s0)
    ctx->pc = 0x186a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 0));
    // 0x186a18: 0xc60001b0  lwc1        $f0, 0x1B0($s0)
    ctx->pc = 0x186a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186a1c: 0x4614a528  max.s       $f20, $f20, $f20
    ctx->pc = 0x186a1cu;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[20]);
    // 0x186a20: 0x3c01437e  lui         $at, 0x437E
    ctx->pc = 0x186a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17278 << 16));
    // 0x186a24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x186a24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x186a28: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x186a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x186a2c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x186a2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x186a30: 0x2402ffc8  addiu       $v0, $zero, -0x38
    ctx->pc = 0x186a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967240));
    // 0x186a34: 0xe6140174  swc1        $f20, 0x174($s0)
    ctx->pc = 0x186a34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 372), bits); }
    // 0x186a38: 0x26030178  addiu       $v1, $s0, 0x178
    ctx->pc = 0x186a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 376));
    // 0x186a3c: 0xe600017c  swc1        $f0, 0x17C($s0)
    ctx->pc = 0x186a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 380), bits); }
    // 0x186a40: 0x2405ff80  addiu       $a1, $zero, -0x80
    ctx->pc = 0x186a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x186a44: 0xe6010180  swc1        $f1, 0x180($s0)
    ctx->pc = 0x186a44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 384), bits); }
    // 0x186a48: 0xae040150  sw          $a0, 0x150($s0)
    ctx->pc = 0x186a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 4));
    // 0x186a4c: 0xe6000170  swc1        $f0, 0x170($s0)
    ctx->pc = 0x186a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 368), bits); }
    // 0x186a50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x186a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x186a54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x186a54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186a58: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x186a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x186a5c: 0xa0650003  sb          $a1, 0x3($v1)
    ctx->pc = 0x186a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x186a60: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x186a60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x186a64: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x186a64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x186a68: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x186a68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x186a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x186A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A6Cu;
        // 0x186a70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186A74u;
}

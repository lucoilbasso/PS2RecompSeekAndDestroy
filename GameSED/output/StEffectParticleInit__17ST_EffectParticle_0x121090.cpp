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

// Function: StEffectParticleInit__17ST_EffectParticle
// Address: 0x121090 - 0x121114
void StEffectParticleInit__17ST_EffectParticle_0x121090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StEffectParticleInit__17ST_EffectParticle_0x121090");
#endif

    ctx->pc = 0x121090u;

    // 0x121090: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x121090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x121094: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x121094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121098: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x121098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x12109c: 0xac8000b0  sw          $zero, 0xB0($a0)
    ctx->pc = 0x12109cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 0));
    // 0x1210a0: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x1210a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x1210a4: 0xac8000b4  sw          $zero, 0xB4($a0)
    ctx->pc = 0x1210a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 0));
    // 0x1210a8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1210a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1210ac: 0xa480001e  sh          $zero, 0x1E($a0)
    ctx->pc = 0x1210acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x1210b0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1210b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1210b4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1210b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1210b8: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1210b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1210bc: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1210bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1210c0: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x1210c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x1210c4: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x1210c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x1210c8: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x1210c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x1210cc: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x1210ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x1210d0: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x1210d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x1210d4: 0xa480001c  sh          $zero, 0x1C($a0)
    ctx->pc = 0x1210d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x1210d8: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1210d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1210dc: 0x24820080  addiu       $v0, $a0, 0x80
    ctx->pc = 0x1210dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x1210e0: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1210e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1210e4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1210e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1210e8: 0x24820090  addiu       $v0, $a0, 0x90
    ctx->pc = 0x1210e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x1210ec: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1210ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1210f0: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x1210f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x1210f4: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1210f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1210f8: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1210f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1210fc: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x1210fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x121100: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x121100u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x121104: 0x248400a0  addiu       $a0, $a0, 0xA0
    ctx->pc = 0x121104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x121108: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x121108u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12110c: 0x3e00008  jr          $ra
    ctx->pc = 0x12110Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12110Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121114u;
}

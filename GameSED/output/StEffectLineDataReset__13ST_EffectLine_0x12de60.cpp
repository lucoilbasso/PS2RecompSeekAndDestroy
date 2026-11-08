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

// Function: StEffectLineDataReset__13ST_EffectLine
// Address: 0x12de60 - 0x12df00
void StEffectLineDataReset__13ST_EffectLine_0x12de60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StEffectLineDataReset__13ST_EffectLine_0x12de60");
#endif

    switch (ctx->pc) {
        case 0x12ded0u: goto label_12ded0;
        default: break;
    }

    ctx->pc = 0x12de60u;

    // 0x12de60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12de60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12de64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12de64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12de68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12de68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12de6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12de6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12de70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12de70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de74: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x12de74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x12de78: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x12de78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x12de7c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x12de7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12de80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12de80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12de84: 0xe4540028  swc1        $f20, 0x28($v0)
    ctx->pc = 0x12de84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x12de88: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x12de88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x12de8c: 0xe454002c  swc1        $f20, 0x2C($v0)
    ctx->pc = 0x12de8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x12de90: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x12de90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x12de94: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x12de94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x12de98: 0xa0400023  sb          $zero, 0x23($v0)
    ctx->pc = 0x12de98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 35), (uint8_t)GPR_U32(ctx, 0));
    // 0x12de9c: 0xa0400022  sb          $zero, 0x22($v0)
    ctx->pc = 0x12de9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x12dea0: 0xa0400021  sb          $zero, 0x21($v0)
    ctx->pc = 0x12dea0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x12dea4: 0xa0400020  sb          $zero, 0x20($v0)
    ctx->pc = 0x12dea4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x12dea8: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x12dea8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12deac: 0x260300f0  addiu       $v1, $s0, 0xF0
    ctx->pc = 0x12deacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x12deb0: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x12deb0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12deb4: 0xe4540038  swc1        $f20, 0x38($v0)
    ctx->pc = 0x12deb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x12deb8: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x12deb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x12debc: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x12debcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    // 0x12dec0: 0xe61400d4  swc1        $f20, 0xD4($s0)
    ctx->pc = 0x12dec0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x12dec4: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x12dec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x12dec8: 0xc048424  jal         func_121090
    ctx->pc = 0x12DEC8u;
    SET_GPR_U32(ctx, 31, 0x12DED0u);
    ctx->pc = 0x12DECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DEC8u;
    // 0x12decc: 0xae0000cc  sw          $zero, 0xCC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121090u, 0x12DEC8u, 0x12DED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DED0u;
label_12ded0:
    // 0x12ded0: 0xae1000b4  sw          $s0, 0xB4($s0)
    ctx->pc = 0x12ded0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 16));
    // 0x12ded4: 0xe6140138  swc1        $f20, 0x138($s0)
    ctx->pc = 0x12ded4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
    // 0x12ded8: 0xe6140124  swc1        $f20, 0x124($s0)
    ctx->pc = 0x12ded8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x12dedc: 0xe6140128  swc1        $f20, 0x128($s0)
    ctx->pc = 0x12dedcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x12dee0: 0xe614012c  swc1        $f20, 0x12C($s0)
    ctx->pc = 0x12dee0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x12dee4: 0xe6140130  swc1        $f20, 0x130($s0)
    ctx->pc = 0x12dee4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x12dee8: 0xe6140134  swc1        $f20, 0x134($s0)
    ctx->pc = 0x12dee8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
    // 0x12deec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12deecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12def0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12def0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12def4: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x12def4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12def8: 0x3e00008  jr          $ra
    ctx->pc = 0x12DEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DEF8u;
        // 0x12defc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DF00u;
}

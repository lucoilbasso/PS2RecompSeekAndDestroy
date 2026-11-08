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

// Function: ApCMTraceSetViewParameter__FP18ApCMTraceParameterffi
// Address: 0x1421e8 - 0x14223c
void ApCMTraceSetViewParameter__FP18ApCMTraceParameterffi_0x1421e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCMTraceSetViewParameter__FP18ApCMTraceParameterffi_0x1421e8");
#endif

    ctx->pc = 0x1421e8u;

    // 0x1421e8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1421E8u;
    {
        const bool branch_taken_0x1421e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1421e8) {
            ctx->pc = 0x1421F8u;
            goto label_1421f8;
        }
    }
    ctx->pc = 0x1421F0u;
    // 0x1421f0: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1421f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1421f4: 0x24442650  addiu       $a0, $v0, 0x2650
    ctx->pc = 0x1421f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9808));
label_1421f8:
    // 0x1421f8: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x1421f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1421fc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1421fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x142200: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x142200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x142204: 0xc783815c  lwc1        $f3, -0x7EA4($gp)
    ctx->pc = 0x142204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x142208: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x142208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14220c: 0xc7808160  lwc1        $f0, -0x7EA0($gp)
    ctx->pc = 0x14220cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142210: 0xc7818164  lwc1        $f1, -0x7E9C($gp)
    ctx->pc = 0x142210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x142214: 0xe48c0008  swc1        $f12, 0x8($a0)
    ctx->pc = 0x142214u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x142218: 0xe48d0004  swc1        $f13, 0x4($a0)
    ctx->pc = 0x142218u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x14221c: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x14221cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x142220: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x142220u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x142224: 0xe4830018  swc1        $f3, 0x18($a0)
    ctx->pc = 0x142224u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x142228: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x142228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x14222c: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x14222cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x142230: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x142230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x142234: 0x3e00008  jr          $ra
    ctx->pc = 0x142234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142234u;
        // 0x142238: 0xac800024  sw          $zero, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14223Cu;
}

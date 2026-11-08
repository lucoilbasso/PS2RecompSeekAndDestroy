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

// Function: WViewAfterZoom__FP5BcObj
// Address: 0x1873e0 - 0x187424
void WViewAfterZoom__FP5BcObj_0x1873e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WViewAfterZoom__FP5BcObj_0x1873e0");
#endif

    switch (ctx->pc) {
        case 0x187410u: goto label_187410;
        default: break;
    }

    ctx->pc = 0x1873e0u;

    // 0x1873e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1873e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1873e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1873e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1873e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1873e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1873ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1873ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1873f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1873f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1873f4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1873f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1873f8: 0xc60c0154  lwc1        $f12, 0x154($s0)
    ctx->pc = 0x1873f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1873fc: 0x0  nop
    ctx->pc = 0x1873fcu;
    // NOP
    // 0x187400: 0x0  nop
    ctx->pc = 0x187400u;
    // NOP
    // 0x187404: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x187404u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x187408: 0xc067a5e  jal         func_19E978
    ctx->pc = 0x187408u;
    SET_GPR_U32(ctx, 31, 0x187410u);
    ctx->pc = 0x18740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187408u;
    // 0x18740c: 0xe600015c  swc1        $f0, 0x15C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 348), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E978u, 0x187408u, 0x187410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187410u;
label_187410:
    // 0x187410: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x187410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
    // 0x187414: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x187414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x187418: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x187418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18741c: 0x3e00008  jr          $ra
    ctx->pc = 0x18741Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18741Cu;
        // 0x187420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18741Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187424u;
}

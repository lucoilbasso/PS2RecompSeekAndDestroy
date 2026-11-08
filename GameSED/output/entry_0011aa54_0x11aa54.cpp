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

// Function: entry_0011aa54
// Address: 0x11aa54 - 0x11aa88
void entry_0011aa54_0x11aa54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011aa54_0x11aa54");
#endif

    switch (ctx->pc) {
        case 0x11aa70u: goto label_11aa70;
        default: break;
    }

    ctx->pc = 0x11aa54u;

    // 0x11aa54: 0x3c01c370  lui         $at, 0xC370
    ctx->pc = 0x11aa54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50032 << 16));
    // 0x11aa58: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x11aa58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x11aa5c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x11aa5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11aa60: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x11AA60u;
    {
        const bool branch_taken_0x11aa60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11aa60) {
            ctx->pc = 0x11AA64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AA60u;
            // 0x11aa64: 0xc6200004  lwc1        $f0, 0x4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AA88u;
            return;
        }
    }
    ctx->pc = 0x11AA68u;
    // 0x11aa68: 0xc066f2c  jal         func_19BCB0
    ctx->pc = 0x11AA68u;
    SET_GPR_U32(ctx, 31, 0x11AA70u);
    ctx->pc = 0x19BCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BCB0u, 0x11AA68u, 0x11AA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AA70u;
label_11aa70:
    // 0x11aa70: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x11aa70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x11aa74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11aa74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11aa78: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11aa78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x11aa7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11aa7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11aa80: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x11aa80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x11aa84: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x11aa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x11aa88u;
}

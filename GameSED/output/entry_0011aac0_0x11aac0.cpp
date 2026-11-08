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

// Function: entry_0011aac0
// Address: 0x11aac0 - 0x11aaec
void entry_0011aac0_0x11aac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011aac0_0x11aac0");
#endif

    switch (ctx->pc) {
        case 0x11aad4u: goto label_11aad4;
        default: break;
    }

    ctx->pc = 0x11aac0u;

    // 0x11aac0: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x11aac0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11aac4: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x11AAC4u;
    {
        const bool branch_taken_0x11aac4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11aac4) {
            ctx->pc = 0x11AAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AAC4u;
            // 0x11aac8: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AAECu;
            return;
        }
    }
    ctx->pc = 0x11AACCu;
    // 0x11aacc: 0xc066f2c  jal         func_19BCB0
    ctx->pc = 0x11AACCu;
    SET_GPR_U32(ctx, 31, 0x11AAD4u);
    ctx->pc = 0x19BCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BCB0u, 0x11AACCu, 0x11AAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AAD4u;
label_11aad4:
    // 0x11aad4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x11aad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x11aad8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11aad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11aadc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11aadcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x11aae0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11aae0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11aae4: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x11aae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x11aae8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x11aae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x11aaecu;
}

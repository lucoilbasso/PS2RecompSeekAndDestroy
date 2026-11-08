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

// Function: entry_0011ab1c
// Address: 0x11ab1c - 0x11ab48
void entry_0011ab1c_0x11ab1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ab1c_0x11ab1c");
#endif

    switch (ctx->pc) {
        case 0x11ab30u: goto label_11ab30;
        default: break;
    }

    ctx->pc = 0x11ab1cu;

    // 0x11ab1c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x11ab1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ab20: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x11AB20u;
    {
        const bool branch_taken_0x11ab20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11ab20) {
            ctx->pc = 0x11AB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AB20u;
            // 0x11ab24: 0xc6000004  lwc1        $f0, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AB48u;
            return;
        }
    }
    ctx->pc = 0x11AB28u;
    // 0x11ab28: 0xc066f2c  jal         func_19BCB0
    ctx->pc = 0x11AB28u;
    SET_GPR_U32(ctx, 31, 0x11AB30u);
    ctx->pc = 0x19BCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BCB0u, 0x11AB28u, 0x11AB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB30u;
label_11ab30:
    // 0x11ab30: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x11ab30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x11ab34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11ab34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11ab38: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11ab38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x11ab3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11ab3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11ab40: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x11ab40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x11ab44: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x11ab44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x11ab48u;
}

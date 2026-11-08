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

// Function: entry_0011ab48
// Address: 0x11ab48 - 0x11ab78
void entry_0011ab48_0x11ab48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ab48_0x11ab48");
#endif

    switch (ctx->pc) {
        case 0x11ab5cu: goto label_11ab5c;
        default: break;
    }

    ctx->pc = 0x11ab48u;

    // 0x11ab48: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x11ab48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ab4c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x11AB4Cu;
    {
        const bool branch_taken_0x11ab4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11AB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB4Cu;
        // 0x11ab50: 0x8f848978  lw          $a0, -0x7688($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab4c) {
            ctx->pc = 0x11AB78u;
            return;
        }
    }
    ctx->pc = 0x11AB54u;
    // 0x11ab54: 0xc066f2c  jal         func_19BCB0
    ctx->pc = 0x11AB54u;
    SET_GPR_U32(ctx, 31, 0x11AB5Cu);
    ctx->pc = 0x19BCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BCB0u, 0x11AB54u, 0x11AB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB5Cu;
label_11ab5c:
    // 0x11ab5c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x11ab5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x11ab60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11ab60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11ab64: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11ab64u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x11ab68: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11ab68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x11ab6c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11ab6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11ab70: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x11ab70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x11ab74: 0x8f848978  lw          $a0, -0x7688($gp)
    ctx->pc = 0x11ab74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
    ctx->pc = 0x11ab78u;
}

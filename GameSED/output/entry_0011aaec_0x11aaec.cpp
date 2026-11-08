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

// Function: entry_0011aaec
// Address: 0x11aaec - 0x11ab1c
void entry_0011aaec_0x11aaec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011aaec_0x11aaec");
#endif

    switch (ctx->pc) {
        case 0x11ab00u: goto label_11ab00;
        default: break;
    }

    ctx->pc = 0x11aaecu;

    // 0x11aaec: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x11aaecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11aaf0: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x11AAF0u;
    {
        const bool branch_taken_0x11aaf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11aaf0) {
            ctx->pc = 0x11AAF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AAF0u;
            // 0x11aaf4: 0xc6000004  lwc1        $f0, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AB1Cu;
            return;
        }
    }
    ctx->pc = 0x11AAF8u;
    // 0x11aaf8: 0xc066f2c  jal         func_19BCB0
    ctx->pc = 0x11AAF8u;
    SET_GPR_U32(ctx, 31, 0x11AB00u);
    ctx->pc = 0x19BCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BCB0u, 0x11AAF8u, 0x11AB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB00u;
label_11ab00:
    // 0x11ab00: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x11ab00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x11ab04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11ab04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11ab08: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11ab08u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x11ab0c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11ab0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x11ab10: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11ab10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11ab14: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x11ab14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x11ab18: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x11ab18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x11ab1cu;
}

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

// Function: entry_0011aa88
// Address: 0x11aa88 - 0x11aac0
void entry_0011aa88_0x11aa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011aa88_0x11aa88");
#endif

    switch (ctx->pc) {
        case 0x11aaa4u: goto label_11aaa4;
        default: break;
    }

    ctx->pc = 0x11aa88u;

    // 0x11aa88: 0x3c014370  lui         $at, 0x4370
    ctx->pc = 0x11aa88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17264 << 16));
    // 0x11aa8c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11aa8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11aa90: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x11aa90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11aa94: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x11AA94u;
    {
        const bool branch_taken_0x11aa94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11aa94) {
            ctx->pc = 0x11AA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AA94u;
            // 0x11aa98: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AAC0u;
            return;
        }
    }
    ctx->pc = 0x11AA9Cu;
    // 0x11aa9c: 0xc066f2c  jal         func_19BCB0
    ctx->pc = 0x11AA9Cu;
    SET_GPR_U32(ctx, 31, 0x11AAA4u);
    ctx->pc = 0x19BCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BCB0u, 0x11AA9Cu, 0x11AAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AAA4u;
label_11aaa4:
    // 0x11aaa4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x11aaa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x11aaa8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11aaa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11aaac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11aaacu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x11aab0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11aab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x11aab4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11aab4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11aab8: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x11aab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x11aabc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x11aabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x11aac0u;
}

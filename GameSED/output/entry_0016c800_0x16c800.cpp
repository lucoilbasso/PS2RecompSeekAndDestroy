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

// Function: entry_0016c800
// Address: 0x16c800 - 0x16c838
void entry_0016c800_0x16c800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c800_0x16c800");
#endif

    switch (ctx->pc) {
        case 0x16c810u: goto label_16c810;
        default: break;
    }

    ctx->pc = 0x16c800u;

    // 0x16c800: 0x1500000d  bnez        $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x16C800u;
    {
        const bool branch_taken_0x16c800 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c800) {
            ctx->pc = 0x16C838u;
            return;
        }
    }
    ctx->pc = 0x16C808u;
    // 0x16c808: 0xc052fa2  jal         func_14BE88
    ctx->pc = 0x16C808u;
    SET_GPR_U32(ctx, 31, 0x16C810u);
    ctx->pc = 0x16C80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C808u;
    // 0x16c80c: 0x8e040150  lw          $a0, 0x150($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BE88u, 0x16C808u, 0x16C810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C810u;
label_16c810:
    // 0x16c810: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x16c810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x16c814: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16c814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16c818: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16c818u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16c81c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x16C81Cu;
    {
        const bool branch_taken_0x16c81c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16c81c) {
            ctx->pc = 0x16C838u;
            return;
        }
    }
    ctx->pc = 0x16C824u;
    // 0x16c824: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16c824u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16c828: 0xc6010284  lwc1        $f1, 0x284($s0)
    ctx->pc = 0x16c828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c82c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x16c82cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x16c830: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x16c830u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16c834: 0xe6010284  swc1        $f1, 0x284($s0)
    ctx->pc = 0x16c834u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    ctx->pc = 0x16c838u;
}

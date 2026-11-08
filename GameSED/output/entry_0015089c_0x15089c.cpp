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

// Function: entry_0015089c
// Address: 0x15089c - 0x1508c8
void entry_0015089c_0x15089c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015089c_0x15089c");
#endif

    ctx->pc = 0x15089cu;

    // 0x15089c: 0xc7808228  lwc1        $f0, -0x7DD8($gp)
    ctx->pc = 0x15089cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1508a0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1508a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1508a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1508a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1508a8: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x1508A8u;
    {
        const bool branch_taken_0x1508a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1508ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1508A8u;
        // 0x1508ac: 0xe4b40018  swc1        $f20, 0x18($a1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1508a8) {
            ctx->pc = 0x150910u;
            return;
        }
    }
    ctx->pc = 0x1508B0u;
    // 0x1508b0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1508b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1508b4: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x1508b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1508b8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x1508b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x1508bc: 0x46010529  min.s       $f20, $f0, $f1
    ctx->pc = 0x1508bcu;
    ctx->f[20] = std::min(ctx->f[0], ctx->f[1]);
    // 0x1508c0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1508C0u;
    {
        const bool branch_taken_0x1508c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1508c0) {
            ctx->pc = 0x150910u;
            return;
        }
    }
    ctx->pc = 0x1508C8u;
}

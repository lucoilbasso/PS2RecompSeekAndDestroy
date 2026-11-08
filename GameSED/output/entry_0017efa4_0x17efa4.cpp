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

// Function: entry_0017efa4
// Address: 0x17efa4 - 0x17efd0
void entry_0017efa4_0x17efa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017efa4_0x17efa4");
#endif

    ctx->pc = 0x17efa4u;

    // 0x17efa4: 0xe4a40000  swc1        $f4, 0x0($a1)
    ctx->pc = 0x17efa4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x17efa8: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x17efa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x17efac: 0xe4a30008  swc1        $f3, 0x8($a1)
    ctx->pc = 0x17efacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x17efb0: 0x46030828  max.s       $f0, $f1, $f3
    ctx->pc = 0x17efb0u;
    ctx->f[0] = std::max(ctx->f[1], ctx->f[3]);
    // 0x17efb4: 0x46002028  max.s       $f0, $f4, $f0
    ctx->pc = 0x17efb4u;
    ctx->f[0] = std::max(ctx->f[4], ctx->f[0]);
    // 0x17efb8: 0xc7818550  lwc1        $f1, -0x7AB0($gp)
    ctx->pc = 0x17efb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17efbc: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x17efbcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x17efc0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x17efc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x17efc4: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x17efc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17efc8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x17EFC8u;
    {
        const bool branch_taken_0x17efc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17EFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EFC8u;
        // 0x17efcc: 0xe4a00010  swc1        $f0, 0x10($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17efc8) {
            ctx->pc = 0x17EFE0u;
            return;
        }
    }
    ctx->pc = 0x17EFD0u;
}

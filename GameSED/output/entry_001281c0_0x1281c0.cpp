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

// Function: entry_001281c0
// Address: 0x1281c0 - 0x1281e4
void entry_001281c0_0x1281c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001281c0_0x1281c0");
#endif

    ctx->pc = 0x1281c0u;

    // 0x1281c0: 0xc7808104  lwc1        $f0, -0x7EFC($gp)
    ctx->pc = 0x1281c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1281c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1281c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1281c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1281c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1281cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1281ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1281d0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1281d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1281d4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1281D4u;
    {
        const bool branch_taken_0x1281d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1281D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1281D4u;
        // 0x1281d8: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1281d4) {
            ctx->pc = 0x1281E4u;
            return;
        }
    }
    ctx->pc = 0x1281DCu;
    // 0x1281dc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1281dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1281e0: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1281e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    ctx->pc = 0x1281e4u;
}

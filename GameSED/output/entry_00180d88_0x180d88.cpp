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

// Function: entry_00180d88
// Address: 0x180d88 - 0x180da8
void entry_00180d88_0x180d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180d88_0x180d88");
#endif

    ctx->pc = 0x180d88u;

    // 0x180d88: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x180d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180d8c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x180d8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180d90: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x180d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180d94: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x180d94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x180d98: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x180d98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180d9c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x180D9Cu;
    {
        const bool branch_taken_0x180d9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x180DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D9Cu;
        // 0x180da0: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180d9c) {
            ctx->pc = 0x180DA8u;
            return;
        }
    }
    ctx->pc = 0x180DA4u;
    // 0x180da4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x180da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x180da8u;
}

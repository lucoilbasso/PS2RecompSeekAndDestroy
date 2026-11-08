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

// Function: entry_0011e77c
// Address: 0x11e77c - 0x11e798
void entry_0011e77c_0x11e77c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e77c_0x11e77c");
#endif

    ctx->pc = 0x11e77cu;

    // 0x11e77c: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x11e77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11e780: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11e780u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e784: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11e784u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11e788: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x11E788u;
    {
        const bool branch_taken_0x11e788 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E788u;
        // 0x11e78c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e788) {
            ctx->pc = 0x11E798u;
            return;
        }
    }
    ctx->pc = 0x11E790u;
    // 0x11e790: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x11E790u;
    {
        const bool branch_taken_0x11e790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E790u;
        // 0x11e794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e790) {
            ctx->pc = 0x11E850u;
            return;
        }
    }
    ctx->pc = 0x11E798u;
}

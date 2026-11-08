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

// Function: entry_0013f218
// Address: 0x13f218 - 0x13f230
void entry_0013f218_0x13f218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f218_0x13f218");
#endif

    ctx->pc = 0x13f218u;

    // 0x13f218: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13f218u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f21c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x13f21cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f220: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x13F220u;
    {
        const bool branch_taken_0x13f220 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F220u;
        // 0x13f224: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f220) {
            ctx->pc = 0x13F230u;
            return;
        }
    }
    ctx->pc = 0x13F228u;
    // 0x13f228: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13F228u;
    {
        const bool branch_taken_0x13f228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F228u;
        // 0x13f22c: 0xe454020c  swc1        $f20, 0x20C($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 524), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f228) {
            ctx->pc = 0x13F240u;
            return;
        }
    }
    ctx->pc = 0x13F230u;
}

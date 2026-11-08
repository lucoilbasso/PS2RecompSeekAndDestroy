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

// Function: entry_001510cc
// Address: 0x1510cc - 0x1510f0
void entry_001510cc_0x1510cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001510cc_0x1510cc");
#endif

    ctx->pc = 0x1510ccu;

    // 0x1510cc: 0x46032829  min.s       $f0, $f5, $f3
    ctx->pc = 0x1510ccu;
    ctx->f[0] = std::min(ctx->f[5], ctx->f[3]);
    // 0x1510d0: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x1510d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1510d4: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
    ctx->pc = 0x1510D4u;
    {
        const bool branch_taken_0x1510d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1510d4) {
            ctx->pc = 0x1510D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1510D4u;
            // 0x1510d8: 0x46041041  sub.s       $f1, $f2, $f4 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x151140u;
            return;
        }
    }
    ctx->pc = 0x1510DCu;
    // 0x1510dc: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x1510dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1510e0: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x1510E0u;
    {
        const bool branch_taken_0x1510e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1510e0) {
            ctx->pc = 0x151148u;
            return;
        }
    }
    ctx->pc = 0x1510E8u;
    // 0x1510e8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1510E8u;
    {
        const bool branch_taken_0x1510e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1510ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1510E8u;
        // 0x1510ec: 0x46041041  sub.s       $f1, $f2, $f4 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1510e8) {
            ctx->pc = 0x151140u;
            return;
        }
    }
    ctx->pc = 0x1510F0u;
}

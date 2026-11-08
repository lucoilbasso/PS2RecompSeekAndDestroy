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

// Function: entry_00151114
// Address: 0x151114 - 0x151140
void entry_00151114_0x151114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151114_0x151114");
#endif

    ctx->pc = 0x151114u;

    // 0x151114: 0x46002807  neg.s       $f0, $f5
    ctx->pc = 0x151114u;
    ctx->f[0] = FPU_NEG_S(ctx->f[5]);
    // 0x151118: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x151118u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x15111c: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x15111cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x151120: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x151120u;
    {
        const bool branch_taken_0x151120 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x151120) {
            ctx->pc = 0x151124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151120u;
            // 0x151124: 0x46041041  sub.s       $f1, $f2, $f4 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x151140u;
            return;
        }
    }
    ctx->pc = 0x151128u;
    // 0x151128: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x151128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15112c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x15112Cu;
    {
        const bool branch_taken_0x15112c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15112c) {
            ctx->pc = 0x151130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15112Cu;
            // 0x151130: 0x46041041  sub.s       $f1, $f2, $f4 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x151140u;
            return;
        }
    }
    ctx->pc = 0x151134u;
    // 0x151134: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x151134u;
    {
        const bool branch_taken_0x151134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151134u;
        // 0x151138: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
        ctx->f[1] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151134) {
            ctx->pc = 0x151148u;
            return;
        }
    }
    ctx->pc = 0x15113Cu;
    // 0x15113c: 0x0  nop
    ctx->pc = 0x15113cu;
    // NOP
    ctx->pc = 0x151140u;
}

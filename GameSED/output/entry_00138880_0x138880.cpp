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

// Function: entry_00138880
// Address: 0x138880 - 0x1388a0
void entry_00138880_0x138880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138880_0x138880");
#endif

    ctx->pc = 0x138880u;

    // 0x138880: 0x11200007  beqz        $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x138880u;
    {
        const bool branch_taken_0x138880 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x138880) {
            ctx->pc = 0x1388A0u;
            return;
        }
    }
    ctx->pc = 0x138888u;
    // 0x138888: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x138888u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13888c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x13888Cu;
    {
        const bool branch_taken_0x13888c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x138890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13888Cu;
        // 0x138890: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13888c) {
            ctx->pc = 0x1388A0u;
            return;
        }
    }
    ctx->pc = 0x138894u;
    // 0x138894: 0xac880404  sw          $t0, 0x404($a0)
    ctx->pc = 0x138894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1028), GPR_U32(ctx, 8));
    // 0x138898: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x138898u;
    {
        const bool branch_taken_0x138898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138898u;
        // 0x13889c: 0xe4820408  swc1        $f2, 0x408($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1032), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x138898) {
            ctx->pc = 0x1388E0u;
            return;
        }
    }
    ctx->pc = 0x1388A0u;
}

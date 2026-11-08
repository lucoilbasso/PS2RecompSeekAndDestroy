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

// Function: entry_00150758
// Address: 0x150758 - 0x150780
void entry_00150758_0x150758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150758_0x150758");
#endif

    ctx->pc = 0x150758u;

    // 0x150758: 0xc7808218  lwc1        $f0, -0x7DE8($gp)
    ctx->pc = 0x150758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15075c: 0x3b11021  addu        $v0, $sp, $s1
    ctx->pc = 0x15075cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
    // 0x150760: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x150760u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150764: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x150764u;
    {
        const bool branch_taken_0x150764 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x150768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150764u;
        // 0x150768: 0xe4540000  swc1        $f20, 0x0($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150764) {
            ctx->pc = 0x150780u;
            return;
        }
    }
    ctx->pc = 0x15076Cu;
    // 0x15076c: 0x2361021  addu        $v0, $s1, $s6
    ctx->pc = 0x15076cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x150770: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x150770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x150774: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x150774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150778: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x150778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15077c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x15077cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x150780u;
}

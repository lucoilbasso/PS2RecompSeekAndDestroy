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

// Function: entry_00181ccc
// Address: 0x181ccc - 0x181ce4
void entry_00181ccc_0x181ccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181ccc_0x181ccc");
#endif

    ctx->pc = 0x181cccu;

    // 0x181ccc: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x181cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181cd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x181cd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181cd4: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x181cd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181cd8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x181CD8u;
    {
        const bool branch_taken_0x181cd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x181CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181CD8u;
        // 0x181cdc: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181cd8) {
            ctx->pc = 0x181CE4u;
            return;
        }
    }
    ctx->pc = 0x181CE0u;
    // 0x181ce0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x181ce4u;
}

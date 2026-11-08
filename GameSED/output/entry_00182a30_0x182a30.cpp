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

// Function: entry_00182a30
// Address: 0x182a30 - 0x182a44
void entry_00182a30_0x182a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182a30_0x182a30");
#endif

    ctx->pc = 0x182a30u;

    // 0x182a30: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x182a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182a34: 0x460d0001  sub.s       $f0, $f0, $f13
    ctx->pc = 0x182a34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x182a38: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x182a38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182a3c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x182A3Cu;
    {
        const bool branch_taken_0x182a3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x182A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A3Cu;
        // 0x182a40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a3c) {
            ctx->pc = 0x182A48u;
            return;
        }
    }
    ctx->pc = 0x182A44u;
}

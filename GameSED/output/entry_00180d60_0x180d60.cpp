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

// Function: entry_00180d60
// Address: 0x180d60 - 0x180d74
void entry_00180d60_0x180d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180d60_0x180d60");
#endif

    ctx->pc = 0x180d60u;

    // 0x180d60: 0xc5c10004  lwc1        $f1, 0x4($t6)
    ctx->pc = 0x180d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180d64: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x180d64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x180d68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x180d68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180d6c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x180D6Cu;
    {
        const bool branch_taken_0x180d6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180d6c) {
            ctx->pc = 0x180D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180D6Cu;
            // 0x180d70: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x180D74u;
            return;
        }
    }
    ctx->pc = 0x180D74u;
}

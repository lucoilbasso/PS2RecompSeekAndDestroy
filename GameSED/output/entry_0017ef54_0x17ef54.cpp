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

// Function: entry_0017ef54
// Address: 0x17ef54 - 0x17ef64
void entry_0017ef54_0x17ef54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ef54_0x17ef54");
#endif

    ctx->pc = 0x17ef54u;

    // 0x17ef54: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x17ef54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ef58: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x17ef58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ef5c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x17EF5Cu;
    {
        const bool branch_taken_0x17ef5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ef5c) {
            ctx->pc = 0x17EF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EF5Cu;
            // 0x17ef60: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EF64u;
            return;
        }
    }
    ctx->pc = 0x17EF64u;
}

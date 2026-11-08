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

// Function: entry_0017ef40
// Address: 0x17ef40 - 0x17ef54
void entry_0017ef40_0x17ef40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ef40_0x17ef40");
#endif

    ctx->pc = 0x17ef40u;

    // 0x17ef40: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x17ef40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ef44: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x17ef44u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x17ef48: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x17ef48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ef4c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x17EF4Cu;
    {
        const bool branch_taken_0x17ef4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ef4c) {
            ctx->pc = 0x17EF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EF4Cu;
            // 0x17ef50: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
            ctx->f[4] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EF54u;
            return;
        }
    }
    ctx->pc = 0x17EF54u;
}

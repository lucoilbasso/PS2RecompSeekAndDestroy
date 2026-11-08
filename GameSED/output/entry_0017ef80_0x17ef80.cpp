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

// Function: entry_0017ef80
// Address: 0x17ef80 - 0x17ef94
void entry_0017ef80_0x17ef80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ef80_0x17ef80");
#endif

    ctx->pc = 0x17ef80u;

    // 0x17ef80: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x17ef80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ef84: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x17ef84u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x17ef88: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x17ef88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ef8c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x17EF8Cu;
    {
        const bool branch_taken_0x17ef8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ef8c) {
            ctx->pc = 0x17EF90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EF8Cu;
            // 0x17ef90: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
            ctx->f[3] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EF94u;
            return;
        }
    }
    ctx->pc = 0x17EF94u;
}

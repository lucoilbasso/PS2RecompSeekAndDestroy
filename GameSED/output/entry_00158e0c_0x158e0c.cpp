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

// Function: entry_00158e0c
// Address: 0x158e0c - 0x158e20
void entry_00158e0c_0x158e0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158e0c_0x158e0c");
#endif

    ctx->pc = 0x158e0cu;

    // 0x158e0c: 0x46026040  add.s       $f1, $f12, $f2
    ctx->pc = 0x158e0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x158e10: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x158e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158e14: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x158e14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158e18: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x158E18u;
    {
        const bool branch_taken_0x158e18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x158e18) {
            ctx->pc = 0x158E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158E18u;
            // 0x158e1c: 0x34a50010  ori         $a1, $a1, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x158E20u;
            return;
        }
    }
    ctx->pc = 0x158E20u;
}

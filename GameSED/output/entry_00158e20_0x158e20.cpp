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

// Function: entry_00158e20
// Address: 0x158e20 - 0x158e34
void entry_00158e20_0x158e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158e20_0x158e20");
#endif

    ctx->pc = 0x158e20u;

    // 0x158e20: 0x46022040  add.s       $f1, $f4, $f2
    ctx->pc = 0x158e20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x158e24: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x158e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158e28: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x158e28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158e2c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x158E2Cu;
    {
        const bool branch_taken_0x158e2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x158e2c) {
            ctx->pc = 0x158E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158E2Cu;
            // 0x158e30: 0x34a50020  ori         $a1, $a1, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x158E34u;
            return;
        }
    }
    ctx->pc = 0x158E34u;
}

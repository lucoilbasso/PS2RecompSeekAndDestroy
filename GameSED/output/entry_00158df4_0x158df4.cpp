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

// Function: entry_00158df4
// Address: 0x158df4 - 0x158e0c
void entry_00158df4_0x158df4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158df4_0x158df4");
#endif

    ctx->pc = 0x158df4u;

    // 0x158df4: 0xc5030408  lwc1        $f3, 0x408($t0)
    ctx->pc = 0x158df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x158df8: 0xc5450008  lwc1        $f5, 0x8($t2)
    ctx->pc = 0x158df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x158dfc: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x158dfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x158e00: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x158e00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158e04: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x158E04u;
    {
        const bool branch_taken_0x158e04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x158e04) {
            ctx->pc = 0x158E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158E04u;
            // 0x158e08: 0x34a50004  ori         $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x158E0Cu;
            return;
        }
    }
    ctx->pc = 0x158E0Cu;
}

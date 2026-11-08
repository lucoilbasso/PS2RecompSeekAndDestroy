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

// Function: entry_00180de8
// Address: 0x180de8 - 0x180e00
void entry_00180de8_0x180de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180de8_0x180de8");
#endif

    ctx->pc = 0x180de8u;

    // 0x180de8: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x180DE8u;
    {
        const bool branch_taken_0x180de8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x180DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180DE8u;
        // 0x180dec: 0xc5800004  lwc1        $f0, 0x4($t4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x180de8) {
            ctx->pc = 0x180E08u;
            return;
        }
    }
    ctx->pc = 0x180DF0u;
    // 0x180df0: 0xc5a10004  lwc1        $f1, 0x4($t5)
    ctx->pc = 0x180df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180df4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x180df4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180df8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x180DF8u;
    {
        const bool branch_taken_0x180df8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180df8) {
            ctx->pc = 0x180DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180DF8u;
            // 0x180dfc: 0x34630004  ori         $v1, $v1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x180E00u;
            return;
        }
    }
    ctx->pc = 0x180E00u;
}

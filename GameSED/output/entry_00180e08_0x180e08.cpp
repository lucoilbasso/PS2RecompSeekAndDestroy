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

// Function: entry_00180e08
// Address: 0x180e08 - 0x180e1c
void entry_00180e08_0x180e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180e08_0x180e08");
#endif

    ctx->pc = 0x180e08u;

    // 0x180e08: 0xc5a10004  lwc1        $f1, 0x4($t5)
    ctx->pc = 0x180e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180e0c: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x180e0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x180e10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x180e10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180e14: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x180E14u;
    {
        const bool branch_taken_0x180e14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180e14) {
            ctx->pc = 0x180E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180E14u;
            // 0x180e18: 0x34630004  ori         $v1, $v1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x180E1Cu;
            return;
        }
    }
    ctx->pc = 0x180E1Cu;
}

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

// Function: entry_00158dc8
// Address: 0x158dc8 - 0x158ddc
void entry_00158dc8_0x158dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158dc8_0x158dc8");
#endif

    ctx->pc = 0x158dc8u;

    // 0x158dc8: 0xc5460000  lwc1        $f6, 0x0($t2)
    ctx->pc = 0x158dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x158dcc: 0x46026001  sub.s       $f0, $f12, $f2
    ctx->pc = 0x158dccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x158dd0: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x158dd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158dd4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x158DD4u;
    {
        const bool branch_taken_0x158dd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x158dd4) {
            ctx->pc = 0x158DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158DD4u;
            // 0x158dd8: 0x34a50001  ori         $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x158DDCu;
            return;
        }
    }
    ctx->pc = 0x158DDCu;
}

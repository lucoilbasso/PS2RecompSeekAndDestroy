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

// Function: entry_001800cc
// Address: 0x1800cc - 0x1800dc
void entry_001800cc_0x1800cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001800cc_0x1800cc");
#endif

    ctx->pc = 0x1800ccu;

    // 0x1800cc: 0xc780855c  lwc1        $f0, -0x7AA4($gp)
    ctx->pc = 0x1800ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1800d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1800d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1800d4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1800D4u;
    {
        const bool branch_taken_0x1800d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1800d4) {
            ctx->pc = 0x1800D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1800D4u;
            // 0x1800d8: 0x358c0002  ori         $t4, $t4, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1800DCu;
            return;
        }
    }
    ctx->pc = 0x1800DCu;
}

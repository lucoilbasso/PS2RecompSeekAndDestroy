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

// Function: entry_001201e0
// Address: 0x1201e0 - 0x1201f0
void entry_001201e0_0x1201e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001201e0_0x1201e0");
#endif

    ctx->pc = 0x1201e0u;

    // 0x1201e0: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1201E0u;
    {
        const bool branch_taken_0x1201e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1201E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1201E0u;
        // 0x1201e4: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1201e0) {
            ctx->pc = 0x1201F4u;
            return;
        }
    }
    ctx->pc = 0x1201E8u;
    // 0x1201e8: 0xc78080a0  lwc1        $f0, -0x7F60($gp)
    ctx->pc = 0x1201e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1201ec: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1201ecu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->pc = 0x1201f0u;
}

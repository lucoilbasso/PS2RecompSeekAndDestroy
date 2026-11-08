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

// Function: entry_001620f0
// Address: 0x1620f0 - 0x162104
void entry_001620f0_0x1620f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001620f0_0x1620f0");
#endif

    ctx->pc = 0x1620f0u;

    // 0x1620f0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1620F0u;
    {
        const bool branch_taken_0x1620f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1620F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1620F0u;
        // 0x1620f4: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1620f0) {
            ctx->pc = 0x162104u;
            return;
        }
    }
    ctx->pc = 0x1620F8u;
    // 0x1620f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1620f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1620fc: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x1620fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162100: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x162100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->pc = 0x162104u;
}

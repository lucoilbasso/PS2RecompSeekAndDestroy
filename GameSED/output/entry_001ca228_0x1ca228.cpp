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

// Function: entry_001ca228
// Address: 0x1ca228 - 0x1ca234
void entry_001ca228_0x1ca228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca228_0x1ca228");
#endif

    ctx->pc = 0x1ca228u;

    // 0x1ca228: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CA228u;
    {
        const bool branch_taken_0x1ca228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA228u;
        // 0x1ca22c: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca228) {
            ctx->pc = 0x1CA208u;
            return;
        }
    }
    ctx->pc = 0x1CA230u;
    // 0x1ca230: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1ca230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    ctx->pc = 0x1ca234u;
}

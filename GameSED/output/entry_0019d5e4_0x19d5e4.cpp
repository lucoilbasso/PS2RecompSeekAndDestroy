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

// Function: entry_0019d5e4
// Address: 0x19d5e4 - 0x19d5f0
void entry_0019d5e4_0x19d5e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d5e4_0x19d5e4");
#endif

    ctx->pc = 0x19d5e4u;

    // 0x19d5e4: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x19D5E4u;
    {
        const bool branch_taken_0x19d5e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D5E4u;
        // 0x19d5e8: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d5e4) {
            ctx->pc = 0x19D608u;
            return;
        }
    }
    ctx->pc = 0x19D5ECu;
    // 0x19d5ec: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x19d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->pc = 0x19d5f0u;
}

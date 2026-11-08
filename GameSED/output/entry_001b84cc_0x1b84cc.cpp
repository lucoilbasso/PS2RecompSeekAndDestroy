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

// Function: entry_001b84cc
// Address: 0x1b84cc - 0x1b84d8
void entry_001b84cc_0x1b84cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b84cc_0x1b84cc");
#endif

    ctx->pc = 0x1b84ccu;

    // 0x1b84cc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B84CCu;
    {
        const bool branch_taken_0x1b84cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B84D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B84CCu;
        // 0x1b84d0: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b84cc) {
            ctx->pc = 0x1B8500u;
            return;
        }
    }
    ctx->pc = 0x1B84D4u;
    // 0x1b84d4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1b84d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1b84d8u;
}

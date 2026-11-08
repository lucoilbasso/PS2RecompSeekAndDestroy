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

// Function: entry_001b94e0
// Address: 0x1b94e0 - 0x1b94f4
void entry_001b94e0_0x1b94e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b94e0_0x1b94e0");
#endif

    ctx->pc = 0x1b94e0u;

    // 0x1b94e0: 0x90820064  lbu         $v0, 0x64($a0)
    ctx->pc = 0x1b94e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1b94e4: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B94E4u;
    {
        const bool branch_taken_0x1b94e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B94E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B94E4u;
        // 0x1b94e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b94e4) {
            ctx->pc = 0x1B952Cu;
            return;
        }
    }
    ctx->pc = 0x1B94ECu;
    // 0x1b94ec: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B94ECu;
    {
        const bool branch_taken_0x1b94ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B94F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B94ECu;
        // 0x1b94f0: 0x90820069  lbu         $v0, 0x69($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 105)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b94ec) {
            ctx->pc = 0x1B952Cu;
            return;
        }
    }
    ctx->pc = 0x1B94F4u;
}

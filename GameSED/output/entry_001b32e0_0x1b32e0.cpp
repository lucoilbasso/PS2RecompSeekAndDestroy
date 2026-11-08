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

// Function: entry_001b32e0
// Address: 0x1b32e0 - 0x1b32f8
void entry_001b32e0_0x1b32e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b32e0_0x1b32e0");
#endif

    ctx->pc = 0x1b32e0u;

    // 0x1b32e0: 0x2338825  or          $s1, $s1, $s3
    ctx->pc = 0x1b32e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 19));
    // 0x1b32e4: 0xae500018  sw          $s0, 0x18($s2)
    ctx->pc = 0x1b32e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 16));
    // 0x1b32e8: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B32E8u;
    {
        const bool branch_taken_0x1b32e8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1B32ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B32E8u;
        // 0x1b32ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b32e8) {
            ctx->pc = 0x1B3318u;
            return;
        }
    }
    ctx->pc = 0x1B32F0u;
    // 0x1b32f0: 0x2646001c  addiu       $a2, $s2, 0x1C
    ctx->pc = 0x1b32f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x1b32f4: 0x0  nop
    ctx->pc = 0x1b32f4u;
    // NOP
    ctx->pc = 0x1b32f8u;
}

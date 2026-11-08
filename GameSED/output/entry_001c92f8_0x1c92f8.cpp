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

// Function: entry_001c92f8
// Address: 0x1c92f8 - 0x1c9308
void entry_001c92f8_0x1c92f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c92f8_0x1c92f8");
#endif

    ctx->pc = 0x1c92f8u;

    // 0x1c92f8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C92F8u;
    {
        const bool branch_taken_0x1c92f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c92f8) {
            ctx->pc = 0x1C92FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C92F8u;
            // 0x1c92fc: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9308u;
            return;
        }
    }
    ctx->pc = 0x1C9300u;
    // 0x1c9300: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1C9300u;
    {
        const bool branch_taken_0x1c9300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9300u;
        // 0x1c9304: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9300) {
            ctx->pc = 0x1C94A0u;
            return;
        }
    }
    ctx->pc = 0x1C9308u;
}

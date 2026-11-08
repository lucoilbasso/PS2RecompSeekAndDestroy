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

// Function: entry_001c303c
// Address: 0x1c303c - 0x1c3050
void entry_001c303c_0x1c303c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c303c_0x1c303c");
#endif

    ctx->pc = 0x1c303cu;

    // 0x1c303c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1c303cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1c3040: 0x10c00061  beqz        $a2, . + 4 + (0x61 << 2)
    ctx->pc = 0x1C3040u;
    {
        const bool branch_taken_0x1c3040 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3040u;
        // 0x1c3044: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3040) {
            ctx->pc = 0x1C31C8u;
            return;
        }
    }
    ctx->pc = 0x1C3048u;
    // 0x1c3048: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x1c3048u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x1c304c: 0x0  nop
    ctx->pc = 0x1c304cu;
    // NOP
    ctx->pc = 0x1c3050u;
}

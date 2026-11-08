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

// Function: entry_00151cd8
// Address: 0x151cd8 - 0x151cec
void entry_00151cd8_0x151cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151cd8_0x151cd8");
#endif

    ctx->pc = 0x151cd8u;

    // 0x151cd8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x151cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x151cdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x151CDCu;
    {
        const bool branch_taken_0x151cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CDCu;
        // 0x151ce0: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151cdc) {
            ctx->pc = 0x151CECu;
            return;
        }
    }
    ctx->pc = 0x151CE4u;
    // 0x151ce4: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x151CE4u;
    {
        const bool branch_taken_0x151ce4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x151ce4) {
            ctx->pc = 0x151CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151CE4u;
            // 0x151ce8: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151CF8u;
            return;
        }
    }
    ctx->pc = 0x151CECu;
}

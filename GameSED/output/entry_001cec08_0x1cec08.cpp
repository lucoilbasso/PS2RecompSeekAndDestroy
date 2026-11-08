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

// Function: entry_001cec08
// Address: 0x1cec08 - 0x1cec18
void entry_001cec08_0x1cec08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cec08_0x1cec08");
#endif

    ctx->pc = 0x1cec08u;

    // 0x1cec08: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CEC08u;
    {
        const bool branch_taken_0x1cec08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cec08) {
            ctx->pc = 0x1CEC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CEC08u;
            // 0x1cec0c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CEC18u;
            return;
        }
    }
    ctx->pc = 0x1CEC10u;
    // 0x1cec10: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x1cec10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1cec14: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x1cec14u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->pc = 0x1cec18u;
}

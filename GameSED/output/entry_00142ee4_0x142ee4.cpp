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

// Function: entry_00142ee4
// Address: 0x142ee4 - 0x142ef0
void entry_00142ee4_0x142ee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142ee4_0x142ee4");
#endif

    ctx->pc = 0x142ee4u;

    // 0x142ee4: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x142EE4u;
    {
        const bool branch_taken_0x142ee4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x142EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142EE4u;
        // 0x142ee8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ee4) {
            ctx->pc = 0x142EF0u;
            return;
        }
    }
    ctx->pc = 0x142EECu;
    // 0x142eec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x142eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x142ef0u;
}

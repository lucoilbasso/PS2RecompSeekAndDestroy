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

// Function: entry_001caa00
// Address: 0x1caa00 - 0x1caa10
void entry_001caa00_0x1caa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001caa00_0x1caa00");
#endif

    ctx->pc = 0x1caa00u;

    // 0x1caa00: 0x8e2c0000  lw          $t4, 0x0($s1)
    ctx->pc = 0x1caa00u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1caa04: 0x11a00033  beqz        $t5, . + 4 + (0x33 << 2)
    ctx->pc = 0x1CAA04u;
    {
        const bool branch_taken_0x1caa04 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAA04u;
        // 0x1caa08: 0x1a0702d  daddu       $t6, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caa04) {
            ctx->pc = 0x1CAAD4u;
            return;
        }
    }
    ctx->pc = 0x1CAA0Cu;
    // 0x1caa0c: 0x25c4ffff  addiu       $a0, $t6, -0x1
    ctx->pc = 0x1caa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    ctx->pc = 0x1caa10u;
}

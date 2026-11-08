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

// Function: entry_001c2974
// Address: 0x1c2974 - 0x1c2980
void entry_001c2974_0x1c2974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2974_0x1c2974");
#endif

    ctx->pc = 0x1c2974u;

    // 0x1c2974: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c2974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2978: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2978u;
    {
        const bool branch_taken_0x1c2978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c2978) {
            ctx->pc = 0x1C297Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2978u;
            // 0x1c297c: 0x8e220184  lw          $v0, 0x184($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2988u;
            return;
        }
    }
    ctx->pc = 0x1C2980u;
}

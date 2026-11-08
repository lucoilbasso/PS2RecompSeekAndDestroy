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

// Function: entry_00199de4
// Address: 0x199de4 - 0x199df0
void entry_00199de4_0x199de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199de4_0x199de4");
#endif

    ctx->pc = 0x199de4u;

    // 0x199de4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x199de4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x199de8: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x199DE8u;
    {
        const bool branch_taken_0x199de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199de8) {
            ctx->pc = 0x199DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199DE8u;
            // 0x199dec: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199DA0u;
            return;
        }
    }
    ctx->pc = 0x199DF0u;
}

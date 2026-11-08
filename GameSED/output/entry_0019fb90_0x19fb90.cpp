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

// Function: entry_0019fb90
// Address: 0x19fb90 - 0x19fb9c
void entry_0019fb90_0x19fb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fb90_0x19fb90");
#endif

    ctx->pc = 0x19fb90u;

    // 0x19fb90: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19fb90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb94: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x19FB94u;
    {
        const bool branch_taken_0x19fb94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fb94) {
            ctx->pc = 0x19FB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FB94u;
            // 0x19fb98: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FBB0u;
            return;
        }
    }
    ctx->pc = 0x19FB9Cu;
}

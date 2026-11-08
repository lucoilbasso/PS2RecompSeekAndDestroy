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

// Function: entry_0019fb1c
// Address: 0x19fb1c - 0x19fb34
void entry_0019fb1c_0x19fb1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fb1c_0x19fb1c");
#endif

    ctx->pc = 0x19fb1cu;

    // 0x19fb1c: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x19fb1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x19fb20: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FB20u;
    {
        const bool branch_taken_0x19fb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB20u;
        // 0x19fb24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb20) {
            ctx->pc = 0x19FB34u;
            return;
        }
    }
    ctx->pc = 0x19FB28u;
    // 0x19fb28: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x19fb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19fb2c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19fb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19fb30: 0x82302b  sltu        $a2, $a0, $v0
    ctx->pc = 0x19fb30u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x19fb34u;
}

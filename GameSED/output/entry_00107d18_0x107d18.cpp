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

// Function: entry_00107d18
// Address: 0x107d18 - 0x107d2c
void entry_00107d18_0x107d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107d18_0x107d18");
#endif

    ctx->pc = 0x107d18u;

    // 0x107d18: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x107d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x107d1c: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x107d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
    // 0x107d20: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x107D20u;
    {
        const bool branch_taken_0x107d20 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x107d20) {
            ctx->pc = 0x107D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107D20u;
            // 0x107d24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107D34u;
            return;
        }
    }
    ctx->pc = 0x107D28u;
    // 0x107d28: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x107d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    ctx->pc = 0x107d2cu;
}

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

// Function: entry_00107e08
// Address: 0x107e08 - 0x107e28
void entry_00107e08_0x107e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107e08_0x107e08");
#endif

    ctx->pc = 0x107e08u;

    // 0x107e08: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x107e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x107e0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x107e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x107e10: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x107e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x107e14: 0x8c420c0c  lw          $v0, 0xC0C($v0)
    ctx->pc = 0x107e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3084)));
    // 0x107e18: 0x5043ffc6  beql        $v0, $v1, . + 4 + (-0x3A << 2)
    ctx->pc = 0x107E18u;
    {
        const bool branch_taken_0x107e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x107e18) {
            ctx->pc = 0x107E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107E18u;
            // 0x107e1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107D34u;
            return;
        }
    }
    ctx->pc = 0x107E20u;
    // 0x107e20: 0x1000ffc2  b           . + 4 + (-0x3E << 2)
    ctx->pc = 0x107E20u;
    {
        const bool branch_taken_0x107e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E20u;
        // 0x107e24: 0x8e0301b4  lw          $v1, 0x1B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e20) {
            ctx->pc = 0x107D2Cu;
            return;
        }
    }
    ctx->pc = 0x107E28u;
}

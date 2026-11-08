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

// Function: entry_0017ee18
// Address: 0x17ee18 - 0x17ee30
void entry_0017ee18_0x17ee18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ee18_0x17ee18");
#endif

    ctx->pc = 0x17ee18u;

    // 0x17ee18: 0x8e4b002c  lw          $t3, 0x2C($s2)
    ctx->pc = 0x17ee18u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x17ee1c: 0x8e4a0030  lw          $t2, 0x30($s2)
    ctx->pc = 0x17ee1cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x17ee20: 0x8e490034  lw          $t1, 0x34($s2)
    ctx->pc = 0x17ee20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x17ee24: 0x1aa00024  blez        $s5, . + 4 + (0x24 << 2)
    ctx->pc = 0x17EE24u;
    {
        const bool branch_taken_0x17ee24 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x17EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EE24u;
        // 0x17ee28: 0x8e500024  lw          $s0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ee24) {
            ctx->pc = 0x17EEB8u;
            return;
        }
    }
    ctx->pc = 0x17EE2Cu;
    // 0x17ee2c: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x17ee2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17ee30u;
}

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

// Function: entry_0013cb5c
// Address: 0x13cb5c - 0x13cb74
void entry_0013cb5c_0x13cb5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cb5c_0x13cb5c");
#endif

    ctx->pc = 0x13cb5cu;

    // 0x13cb5c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x13cb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x13cb60: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x13cb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13cb64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13CB64u;
    {
        const bool branch_taken_0x13cb64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB64u;
        // 0x13cb68: 0x8f828a3c  lw          $v0, -0x75C4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cb64) {
            ctx->pc = 0x13CB74u;
            return;
        }
    }
    ctx->pc = 0x13CB6Cu;
    // 0x13cb6c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13cb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x13cb70: 0xaf828a3c  sw          $v0, -0x75C4($gp)
    ctx->pc = 0x13cb70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937148), GPR_U32(ctx, 2));
    ctx->pc = 0x13cb74u;
}

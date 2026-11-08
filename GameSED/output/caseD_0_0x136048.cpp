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

// Function: caseD_0
// Address: 0x136048 - 0x136060
void caseD_0_0x136048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x136048");
#endif

    ctx->pc = 0x136048u;

    // 0x136048: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x136048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x13604c: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x13604cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x136050: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x136050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x136054: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x136054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x136058: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x136058u;
    {
        const bool branch_taken_0x136058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136058u;
        // 0x13605c: 0xae0300d4  sw          $v1, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136058) {
            ctx->pc = 0x13613Cu;
            return;
        }
    }
    ctx->pc = 0x136060u;
}

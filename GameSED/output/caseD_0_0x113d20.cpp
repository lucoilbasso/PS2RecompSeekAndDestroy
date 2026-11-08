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
// Address: 0x113d20 - 0x113d38
void caseD_0_0x113d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x113d20");
#endif

    ctx->pc = 0x113d20u;

    // 0x113d20: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x113d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x113d24: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x113d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x113d28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x113d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x113d2c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x113D2Cu;
    {
        const bool branch_taken_0x113d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D2Cu;
        // 0x113d30: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d2c) {
            ctx->pc = 0x113DB8u;
            return;
        }
    }
    ctx->pc = 0x113D34u;
    // 0x113d34: 0x0  nop
    ctx->pc = 0x113d34u;
    // NOP
    ctx->pc = 0x113d38u;
}

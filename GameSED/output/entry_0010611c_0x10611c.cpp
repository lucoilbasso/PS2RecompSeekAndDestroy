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

// Function: entry_0010611c
// Address: 0x10611c - 0x106138
void entry_0010611c_0x10611c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010611c_0x10611c");
#endif

    ctx->pc = 0x10611cu;

    // 0x10611c: 0x8f8288a0  lw          $v0, -0x7760($gp)
    ctx->pc = 0x10611cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936736)));
    // 0x106120: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x106120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106124: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x106124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x106128: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x106128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10612c: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x10612Cu;
    {
        const bool branch_taken_0x10612c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x106130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10612Cu;
        // 0x106130: 0xaf8288a0  sw          $v0, -0x7760($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936736), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10612c) {
            ctx->pc = 0x106168u;
            return;
        }
    }
    ctx->pc = 0x106134u;
    // 0x106134: 0x8f8488a0  lw          $a0, -0x7760($gp)
    ctx->pc = 0x106134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936736)));
    ctx->pc = 0x106138u;
}

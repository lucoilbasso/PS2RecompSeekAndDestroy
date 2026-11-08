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

// Function: entry_001a0330
// Address: 0x1a0330 - 0x1a0354
void entry_001a0330_0x1a0330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0330_0x1a0330");
#endif

    ctx->pc = 0x1a0330u;

    // 0x1a0330: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0334: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a0334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0338: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0338u;
    {
        const bool branch_taken_0x1a0338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0338u;
        // 0x1a033c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0338) {
            ctx->pc = 0x1A0354u;
            return;
        }
    }
    ctx->pc = 0x1A0340u;
    // 0x1a0340: 0x8f838dd8  lw          $v1, -0x7228($gp)
    ctx->pc = 0x1a0340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
    // 0x1a0344: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0344u;
    {
        const bool branch_taken_0x1a0344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0344u;
        // 0x1a0348: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0344) {
            ctx->pc = 0x1A0358u;
            return;
        }
    }
    ctx->pc = 0x1A034Cu;
    // 0x1a034c: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x1a034cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x1a0350: 0x8c43f640  lw          $v1, -0x9C0($v0)
    ctx->pc = 0x1a0350u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x23F640u));
    ctx->pc = 0x1a0354u;
}

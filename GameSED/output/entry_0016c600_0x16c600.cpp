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

// Function: entry_0016c600
// Address: 0x16c600 - 0x16c620
void entry_0016c600_0x16c600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c600_0x16c600");
#endif

    ctx->pc = 0x16c600u;

    // 0x16c600: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x16c600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x16c604: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x16c604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
    // 0x16c608: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16C608u;
    {
        const bool branch_taken_0x16c608 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C608u;
        // 0x16c60c: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c608) {
            ctx->pc = 0x16C620u;
            return;
        }
    }
    ctx->pc = 0x16C610u;
    // 0x16c610: 0x8ea301b4  lw          $v1, 0x1B4($s5)
    ctx->pc = 0x16c610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 436)));
    // 0x16c614: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16C614u;
    {
        const bool branch_taken_0x16c614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C614u;
        // 0x16c618: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c614) {
            ctx->pc = 0x16C624u;
            return;
        }
    }
    ctx->pc = 0x16C61Cu;
    // 0x16c61c: 0x0  nop
    ctx->pc = 0x16c61cu;
    // NOP
    ctx->pc = 0x16c620u;
}

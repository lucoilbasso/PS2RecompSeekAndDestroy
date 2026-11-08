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

// Function: entry_0016ec08
// Address: 0x16ec08 - 0x16ec18
void entry_0016ec08_0x16ec08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ec08_0x16ec08");
#endif

    ctx->pc = 0x16ec08u;

    // 0x16ec08: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x16ec08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x16ec0c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x16ec0cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x16ec10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16EC10u;
    {
        const bool branch_taken_0x16ec10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EC10u;
        // 0x16ec14: 0x26220280  addiu       $v0, $s1, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ec10) {
            ctx->pc = 0x16EC20u;
            return;
        }
    }
    ctx->pc = 0x16EC18u;
}

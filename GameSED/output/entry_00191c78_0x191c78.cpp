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

// Function: entry_00191c78
// Address: 0x191c78 - 0x191c90
void entry_00191c78_0x191c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191c78_0x191c78");
#endif

    ctx->pc = 0x191c78u;

    // 0x191c78: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x191c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x191c7c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x191c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x191c80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x191c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191c84: 0xace30130  sw          $v1, 0x130($a3)
    ctx->pc = 0x191c84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 304), GPR_U32(ctx, 3));
    // 0x191c88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x191C88u;
    {
        const bool branch_taken_0x191c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C88u;
        // 0x191c8c: 0xac470000  sw          $a3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191c88) {
            ctx->pc = 0x191CA0u;
            return;
        }
    }
    ctx->pc = 0x191C90u;
}

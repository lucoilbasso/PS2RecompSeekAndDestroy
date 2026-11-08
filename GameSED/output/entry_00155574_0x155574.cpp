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

// Function: entry_00155574
// Address: 0x155574 - 0x155590
void entry_00155574_0x155574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155574_0x155574");
#endif

    ctx->pc = 0x155574u;

    // 0x155574: 0x8c8208a0  lw          $v0, 0x8A0($a0)
    ctx->pc = 0x155574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2208)));
    // 0x155578: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x155578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15557c: 0xac8308a4  sw          $v1, 0x8A4($a0)
    ctx->pc = 0x15557cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2212), GPR_U32(ctx, 3));
    // 0x155580: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x155580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x155584: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x155584u;
    {
        const bool branch_taken_0x155584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155584u;
        // 0x155588: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155584) {
            ctx->pc = 0x155690u;
            return;
        }
    }
    ctx->pc = 0x15558Cu;
    // 0x15558c: 0x0  nop
    ctx->pc = 0x15558cu;
    // NOP
    ctx->pc = 0x155590u;
}

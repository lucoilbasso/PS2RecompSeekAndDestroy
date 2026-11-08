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

// Function: entry_0018aaf8
// Address: 0x18aaf8 - 0x18ab10
void entry_0018aaf8_0x18aaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018aaf8_0x18aaf8");
#endif

    ctx->pc = 0x18aaf8u;

    // 0x18aaf8: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x18aaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x18aafc: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x18aafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x18ab00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18ab00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18ab04: 0xacc30130  sw          $v1, 0x130($a2)
    ctx->pc = 0x18ab04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 304), GPR_U32(ctx, 3));
    // 0x18ab08: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x18AB08u;
    {
        const bool branch_taken_0x18ab08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB08u;
        // 0x18ab0c: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ab08) {
            ctx->pc = 0x18AB48u;
            return;
        }
    }
    ctx->pc = 0x18AB10u;
}

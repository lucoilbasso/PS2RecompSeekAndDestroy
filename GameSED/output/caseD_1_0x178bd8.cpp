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

// Function: caseD_1
// Address: 0x178bd8 - 0x178be8
void caseD_1_0x178bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x178bd8");
#endif

    ctx->pc = 0x178bd8u;

    // 0x178bd8: 0x8e021040  lw          $v0, 0x1040($s0)
    ctx->pc = 0x178bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4160)));
    // 0x178bdc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x178BDCu;
    {
        const bool branch_taken_0x178bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178BDCu;
        // 0x178be0: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178bdc) {
            ctx->pc = 0x178C00u;
            return;
        }
    }
    ctx->pc = 0x178BE4u;
    // 0x178be4: 0x0  nop
    ctx->pc = 0x178be4u;
    // NOP
    ctx->pc = 0x178be8u;
}

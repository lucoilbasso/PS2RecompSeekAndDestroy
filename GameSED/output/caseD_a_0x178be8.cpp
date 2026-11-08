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

// Function: caseD_a
// Address: 0x178be8 - 0x178bf8
void caseD_a_0x178be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x178be8");
#endif

    ctx->pc = 0x178be8u;

    // 0x178be8: 0x8e021040  lw          $v0, 0x1040($s0)
    ctx->pc = 0x178be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4160)));
    // 0x178bec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x178BECu;
    {
        const bool branch_taken_0x178bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178BECu;
        // 0x178bf0: 0x30420003  andi        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x178bec) {
            ctx->pc = 0x178C08u;
            return;
        }
    }
    ctx->pc = 0x178BF4u;
    // 0x178bf4: 0x0  nop
    ctx->pc = 0x178bf4u;
    // NOP
    ctx->pc = 0x178bf8u;
}

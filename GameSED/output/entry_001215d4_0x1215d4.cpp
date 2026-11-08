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

// Function: entry_001215d4
// Address: 0x1215d4 - 0x1215e0
void entry_001215d4_0x1215d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001215d4_0x1215d4");
#endif

    ctx->pc = 0x1215d4u;

    // 0x1215d4: 0xe5102b  sltu        $v0, $a3, $a1
    ctx->pc = 0x1215d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1215d8: 0x5440ffe5  bnel        $v0, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1215D8u;
    {
        const bool branch_taken_0x1215d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1215d8) {
            ctx->pc = 0x1215DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1215D8u;
            // 0x1215dc: 0x8d040000  lw          $a0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121570u;
            return;
        }
    }
    ctx->pc = 0x1215E0u;
}

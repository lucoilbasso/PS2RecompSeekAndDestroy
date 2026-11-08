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

// Function: entry_001ad82c
// Address: 0x1ad82c - 0x1ad83c
void entry_001ad82c_0x1ad82c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad82c_0x1ad82c");
#endif

    ctx->pc = 0x1ad82cu;

    // 0x1ad82c: 0x54660043  bnel        $v1, $a2, . + 4 + (0x43 << 2)
    ctx->pc = 0x1AD82Cu;
    {
        const bool branch_taken_0x1ad82c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x1ad82c) {
            ctx->pc = 0x1AD830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD82Cu;
            // 0x1ad830: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD93Cu;
            return;
        }
    }
    ctx->pc = 0x1AD834u;
    // 0x1ad834: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1AD834u;
    {
        const bool branch_taken_0x1ad834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad834) {
            ctx->pc = 0x1AD914u;
            return;
        }
    }
    ctx->pc = 0x1AD83Cu;
}

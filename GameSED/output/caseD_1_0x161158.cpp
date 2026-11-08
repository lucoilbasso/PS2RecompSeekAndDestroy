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
// Address: 0x161158 - 0x161168
void caseD_1_0x161158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x161158");
#endif

    ctx->pc = 0x161158u;

    // 0x161158: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x161158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16115c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x16115Cu;
    {
        const bool branch_taken_0x16115c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16115Cu;
        // 0x161160: 0x26041a30  addiu       $a0, $s0, 0x1A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16115c) {
            ctx->pc = 0x161218u;
            return;
        }
    }
    ctx->pc = 0x161164u;
    // 0x161164: 0x0  nop
    ctx->pc = 0x161164u;
    // NOP
    ctx->pc = 0x161168u;
}

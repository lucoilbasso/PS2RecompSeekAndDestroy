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

// Function: entry_00160220
// Address: 0x160220 - 0x160238
void entry_00160220_0x160220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160220_0x160220");
#endif

    ctx->pc = 0x160220u;

    // 0x160220: 0x112043  sra         $a0, $s1, 1
    ctx->pc = 0x160220u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 1));
    // 0x160224: 0x111883  sra         $v1, $s1, 2
    ctx->pc = 0x160224u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 2));
    // 0x160228: 0xa0510000  sb          $s1, 0x0($v0)
    ctx->pc = 0x160228u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x16022c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16022Cu;
    {
        const bool branch_taken_0x16022c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16022Cu;
        // 0x160230: 0xa0430002  sb          $v1, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16022c) {
            ctx->pc = 0x160248u;
            return;
        }
    }
    ctx->pc = 0x160234u;
    // 0x160234: 0x0  nop
    ctx->pc = 0x160234u;
    // NOP
    ctx->pc = 0x160238u;
}

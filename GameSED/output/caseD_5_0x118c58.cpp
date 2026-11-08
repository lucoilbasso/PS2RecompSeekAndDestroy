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

// Function: caseD_5
// Address: 0x118c58 - 0x118c60
void caseD_5_0x118c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x118c58");
#endif

    ctx->pc = 0x118c58u;

    // 0x118c58: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x118C58u;
    {
        const bool branch_taken_0x118c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C58u;
        // 0x118c5c: 0x262300e8  addiu       $v1, $s1, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c58) {
            ctx->pc = 0x118C8Cu;
            return;
        }
    }
    ctx->pc = 0x118C60u;
}

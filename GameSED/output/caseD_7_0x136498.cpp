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

// Function: caseD_7
// Address: 0x136498 - 0x1364a0
void caseD_7_0x136498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x136498");
#endif

    ctx->pc = 0x136498u;

    // 0x136498: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x136498u;
    {
        const bool branch_taken_0x136498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136498u;
        // 0x13649c: 0x3c130008  lui         $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136498) {
            ctx->pc = 0x1364DCu;
            return;
        }
    }
    ctx->pc = 0x1364A0u;
}

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

// Function: caseD_6
// Address: 0x136490 - 0x136498
void caseD_6_0x136490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x136490");
#endif

    ctx->pc = 0x136490u;

    // 0x136490: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x136490u;
    {
        const bool branch_taken_0x136490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136490u;
        // 0x136494: 0x24130010  addiu       $s3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136490) {
            ctx->pc = 0x1364DCu;
            return;
        }
    }
    ctx->pc = 0x136498u;
}

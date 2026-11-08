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

// Function: caseD_3
// Address: 0x136478 - 0x136480
void caseD_3_0x136478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x136478");
#endif

    ctx->pc = 0x136478u;

    // 0x136478: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x136478u;
    {
        const bool branch_taken_0x136478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136478u;
        // 0x13647c: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136478) {
            ctx->pc = 0x1364DCu;
            return;
        }
    }
    ctx->pc = 0x136480u;
}

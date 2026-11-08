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

// Function: entry_001bb704
// Address: 0x1bb704 - 0x1bb70c
void entry_001bb704_0x1bb704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb704_0x1bb704");
#endif

    ctx->pc = 0x1bb704u;

    // 0x1bb704: 0x1672ffe0  bne         $s3, $s2, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1BB704u;
    {
        const bool branch_taken_0x1bb704 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        ctx->pc = 0x1BB708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB704u;
        // 0x1bb708: 0x8ec2c090  lw          $v0, -0x3F70($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294951056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb704) {
            ctx->pc = 0x1BB688u;
            return;
        }
    }
    ctx->pc = 0x1BB70Cu;
}

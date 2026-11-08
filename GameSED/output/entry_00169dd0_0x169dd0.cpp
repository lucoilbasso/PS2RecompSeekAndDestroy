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

// Function: entry_00169dd0
// Address: 0x169dd0 - 0x169dd8
void entry_00169dd0_0x169dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169dd0_0x169dd0");
#endif

    ctx->pc = 0x169dd0u;

    // 0x169dd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x169DD0u;
    {
        const bool branch_taken_0x169dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169DD0u;
        // 0x169dd4: 0x26d1120c  addiu       $s1, $s6, 0x120C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4620));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169dd0) {
            ctx->pc = 0x169DDCu;
            return;
        }
    }
    ctx->pc = 0x169DD8u;
}

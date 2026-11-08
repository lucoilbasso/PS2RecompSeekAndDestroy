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

// Function: entry_00169dc8
// Address: 0x169dc8 - 0x169dd0
void entry_00169dc8_0x169dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169dc8_0x169dc8");
#endif

    ctx->pc = 0x169dc8u;

    // 0x169dc8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x169DC8u;
    {
        const bool branch_taken_0x169dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169DC8u;
        // 0x169dcc: 0x26d11218  addiu       $s1, $s6, 0x1218 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169dc8) {
            ctx->pc = 0x169DDCu;
            return;
        }
    }
    ctx->pc = 0x169DD0u;
}

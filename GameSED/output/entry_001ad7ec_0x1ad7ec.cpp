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

// Function: entry_001ad7ec
// Address: 0x1ad7ec - 0x1ad7f4
void entry_001ad7ec_0x1ad7ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad7ec_0x1ad7ec");
#endif

    ctx->pc = 0x1ad7ecu;

    // 0x1ad7ec: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1AD7ECu;
    {
        const bool branch_taken_0x1ad7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD7ECu;
        // 0x1ad7f0: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad7ec) {
            ctx->pc = 0x1AD914u;
            return;
        }
    }
    ctx->pc = 0x1AD7F4u;
}

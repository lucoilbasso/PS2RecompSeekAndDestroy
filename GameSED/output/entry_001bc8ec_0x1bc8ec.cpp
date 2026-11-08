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

// Function: entry_001bc8ec
// Address: 0x1bc8ec - 0x1bc8f4
void entry_001bc8ec_0x1bc8ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc8ec_0x1bc8ec");
#endif

    ctx->pc = 0x1bc8ecu;

    // 0x1bc8ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BC8ECu;
    {
        const bool branch_taken_0x1bc8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8ECu;
        // 0x1bc8f0: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8ec) {
            ctx->pc = 0x1BC8FCu;
            return;
        }
    }
    ctx->pc = 0x1BC8F4u;
}

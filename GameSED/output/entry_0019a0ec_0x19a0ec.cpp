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

// Function: entry_0019a0ec
// Address: 0x19a0ec - 0x19a0f4
void entry_0019a0ec_0x19a0ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a0ec_0x19a0ec");
#endif

    ctx->pc = 0x19a0ecu;

    // 0x19a0ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19A0ECu;
    {
        const bool branch_taken_0x19a0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0ECu;
        // 0x19a0f0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a0ec) {
            ctx->pc = 0x19A0FCu;
            return;
        }
    }
    ctx->pc = 0x19A0F4u;
}

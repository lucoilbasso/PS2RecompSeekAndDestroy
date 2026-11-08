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

// Function: entry_0019d1f4
// Address: 0x19d1f4 - 0x19d200
void entry_0019d1f4_0x19d1f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d1f4_0x19d1f4");
#endif

    ctx->pc = 0x19d1f4u;

    // 0x19d1f4: 0x106102b  sltu        $v0, $t0, $a2
    ctx->pc = 0x19d1f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x19d1f8: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x19D1F8u;
    {
        const bool branch_taken_0x19d1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d1f8) {
            ctx->pc = 0x19D1FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D1F8u;
            // 0x19d1fc: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D1B8u;
            return;
        }
    }
    ctx->pc = 0x19D200u;
}

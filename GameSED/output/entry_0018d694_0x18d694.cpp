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

// Function: entry_0018d694
// Address: 0x18d694 - 0x18d6a0
void entry_0018d694_0x18d694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d694_0x18d694");
#endif

    ctx->pc = 0x18d694u;

    // 0x18d694: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18d694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18d698: 0x10000152  b           . + 4 + (0x152 << 2)
    ctx->pc = 0x18D698u;
    {
        const bool branch_taken_0x18d698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D698u;
        // 0x18d69c: 0xa6220244  sh          $v0, 0x244($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 580), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d698) {
            ctx->pc = 0x18DBE4u;
            return;
        }
    }
    ctx->pc = 0x18D6A0u;
}

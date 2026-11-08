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

// Function: entry_0012ec98
// Address: 0x12ec98 - 0x12eca0
void entry_0012ec98_0x12ec98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ec98_0x12ec98");
#endif

    ctx->pc = 0x12ec98u;

    // 0x12ec98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12EC98u;
    {
        const bool branch_taken_0x12ec98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC98u;
        // 0x12ec9c: 0x8e25013c  lw          $a1, 0x13C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec98) {
            ctx->pc = 0x12ECACu;
            return;
        }
    }
    ctx->pc = 0x12ECA0u;
}

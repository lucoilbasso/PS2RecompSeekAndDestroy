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

// Function: entry_0018f258
// Address: 0x18f258 - 0x18f268
void entry_0018f258_0x18f258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f258_0x18f258");
#endif

    ctx->pc = 0x18f258u;

    // 0x18f258: 0x2a240003  slti        $a0, $s1, 0x3
    ctx->pc = 0x18f258u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x18f25c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18f25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f260: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18F260u;
    {
        const bool branch_taken_0x18f260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F260u;
        // 0x18f264: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f260) {
            ctx->pc = 0x18F27Cu;
            return;
        }
    }
    ctx->pc = 0x18F268u;
}

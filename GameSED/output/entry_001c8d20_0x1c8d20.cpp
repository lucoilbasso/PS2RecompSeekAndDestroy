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

// Function: entry_001c8d20
// Address: 0x1c8d20 - 0x1c8d30
void entry_001c8d20_0x1c8d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8d20_0x1c8d20");
#endif

    ctx->pc = 0x1c8d20u;

    // 0x1c8d20: 0x1492023  subu        $a0, $t2, $t1
    ctx->pc = 0x1c8d20u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1c8d24: 0x1a2182b  sltu        $v1, $t5, $v0
    ctx->pc = 0x1c8d24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c8d28: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x1c8d28u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8d2c: 0x835023  subu        $t2, $a0, $v1
    ctx->pc = 0x1c8d2cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->pc = 0x1c8d30u;
}

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

// Function: entry_00165d18
// Address: 0x165d18 - 0x165d20
void entry_00165d18_0x165d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165d18_0x165d18");
#endif

    ctx->pc = 0x165d18u;

    // 0x165d18: 0xac830044  sw          $v1, 0x44($a0)
    ctx->pc = 0x165d18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
    // 0x165d1c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x165d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->pc = 0x165d20u;
}

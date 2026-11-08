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

// Function: entry_00188a94
// Address: 0x188a94 - 0x188a9c
void entry_00188a94_0x188a94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188a94_0x188a94");
#endif

    ctx->pc = 0x188a94u;

    // 0x188a94: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x188a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188a98: 0xac820130  sw          $v0, 0x130($a0)
    ctx->pc = 0x188a98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 2));
    ctx->pc = 0x188a9cu;
}

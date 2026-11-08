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

// Function: entry_0017f854
// Address: 0x17f854 - 0x17f85c
void entry_0017f854_0x17f854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f854_0x17f854");
#endif

    ctx->pc = 0x17f854u;

    // 0x17f854: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17f854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f858: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x17f858u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x17f85cu;
}

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

// Function: entry_00173288
// Address: 0x173288 - 0x173290
void entry_00173288_0x173288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173288_0x173288");
#endif

    ctx->pc = 0x173288u;

    // 0x173288: 0x8fb10080  lw          $s1, 0x80($sp)
    ctx->pc = 0x173288u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17328c: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x17328cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    ctx->pc = 0x173290u;
}

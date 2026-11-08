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

// Function: entry_0013b87c
// Address: 0x13b87c - 0x13b880
void entry_0013b87c_0x13b87c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b87c_0x13b87c");
#endif

    ctx->pc = 0x13b87cu;

    // 0x13b87c: 0x8e520004  lw          $s2, 0x4($s2)
    ctx->pc = 0x13b87cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->pc = 0x13b880u;
}

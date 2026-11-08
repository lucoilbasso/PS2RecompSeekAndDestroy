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

// Function: entry_001d6140
// Address: 0x1d6140 - 0x1d6148
void entry_001d6140_0x1d6140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6140_0x1d6140");
#endif

    ctx->pc = 0x1d6140u;

    // 0x1d6140: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1d6140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6144: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1d6144u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1d6148u;
}

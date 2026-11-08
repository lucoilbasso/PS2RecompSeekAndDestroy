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

// Function: entry_0011cfd4
// Address: 0x11cfd4 - 0x11cfd8
void entry_0011cfd4_0x11cfd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cfd4_0x11cfd4");
#endif

    ctx->pc = 0x11cfd4u;

    // 0x11cfd4: 0x8c624048  lw          $v0, 0x4048($v1)
    ctx->pc = 0x11cfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16456)));
    ctx->pc = 0x11cfd8u;
}

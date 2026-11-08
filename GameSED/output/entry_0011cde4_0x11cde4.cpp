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

// Function: entry_0011cde4
// Address: 0x11cde4 - 0x11cde8
void entry_0011cde4_0x11cde4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cde4_0x11cde4");
#endif

    ctx->pc = 0x11cde4u;

    // 0x11cde4: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x11cde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->pc = 0x11cde8u;
}

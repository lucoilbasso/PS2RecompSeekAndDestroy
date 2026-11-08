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

// Function: entry_0011d72c
// Address: 0x11d72c - 0x11d734
void entry_0011d72c_0x11d72c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d72c_0x11d72c");
#endif

    ctx->pc = 0x11d72cu;

    // 0x11d72c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11d730: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x11d730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x11d734u;
}

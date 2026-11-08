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

// Function: entry_00199b58
// Address: 0x199b58 - 0x199b5c
void entry_00199b58_0x199b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199b58_0x199b58");
#endif

    ctx->pc = 0x199b58u;

    // 0x199b58: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x199b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    ctx->pc = 0x199b5cu;
}

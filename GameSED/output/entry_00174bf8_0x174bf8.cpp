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

// Function: entry_00174bf8
// Address: 0x174bf8 - 0x174bfc
void entry_00174bf8_0x174bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174bf8_0x174bf8");
#endif

    ctx->pc = 0x174bf8u;

    // 0x174bf8: 0xaf828c04  sw          $v0, -0x73FC($gp)
    ctx->pc = 0x174bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937604), GPR_U32(ctx, 2));
    ctx->pc = 0x174bfcu;
}

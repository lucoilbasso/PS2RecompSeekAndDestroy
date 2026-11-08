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

// Function: entry_0018e9d8
// Address: 0x18e9d8 - 0x18e9dc
void entry_0018e9d8_0x18e9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e9d8_0x18e9d8");
#endif

    ctx->pc = 0x18e9d8u;

    // 0x18e9d8: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x18e9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    ctx->pc = 0x18e9dcu;
}

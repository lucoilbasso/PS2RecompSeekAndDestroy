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

// Function: entry_0018ebf8
// Address: 0x18ebf8 - 0x18ebfc
void entry_0018ebf8_0x18ebf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ebf8_0x18ebf8");
#endif

    ctx->pc = 0x18ebf8u;

    // 0x18ebf8: 0xac80024c  sw          $zero, 0x24C($a0)
    ctx->pc = 0x18ebf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 588), GPR_U32(ctx, 0));
    ctx->pc = 0x18ebfcu;
}

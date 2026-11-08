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

// Function: entry_001a85f8
// Address: 0x1a85f8 - 0x1a85fc
void entry_001a85f8_0x1a85f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a85f8_0x1a85f8");
#endif

    ctx->pc = 0x1a85f8u;

    // 0x1a85f8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1a85f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x1a85fcu;
}

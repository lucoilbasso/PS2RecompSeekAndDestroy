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

// Function: entry_0019a6f8
// Address: 0x19a6f8 - 0x19a6fc
void entry_0019a6f8_0x19a6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a6f8_0x19a6f8");
#endif

    ctx->pc = 0x19a6f8u;

    // 0x19a6f8: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x19a6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    ctx->pc = 0x19a6fcu;
}

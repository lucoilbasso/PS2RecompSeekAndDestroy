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

// Function: entry_0012de44
// Address: 0x12de44 - 0x12de48
void entry_0012de44_0x12de44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012de44_0x12de44");
#endif

    ctx->pc = 0x12de44u;

    // 0x12de44: 0xac4000c0  sw          $zero, 0xC0($v0)
    ctx->pc = 0x12de44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 0));
    ctx->pc = 0x12de48u;
}

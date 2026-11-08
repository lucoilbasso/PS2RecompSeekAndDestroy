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

// Function: entry_0010bebc
// Address: 0x10bebc - 0x10bec0
void entry_0010bebc_0x10bebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bebc_0x10bebc");
#endif

    ctx->pc = 0x10bebcu;

    // 0x10bebc: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x10bebcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    ctx->pc = 0x10bec0u;
}

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

// Function: entry_0017c7ac
// Address: 0x17c7ac - 0x17c7b0
void entry_0017c7ac_0x17c7ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c7ac_0x17c7ac");
#endif

    ctx->pc = 0x17c7acu;

    // 0x17c7ac: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x17c7acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x17c7b0u;
}

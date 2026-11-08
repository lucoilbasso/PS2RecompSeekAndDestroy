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

// Function: entry_0018b2ac
// Address: 0x18b2ac - 0x18b2b0
void entry_0018b2ac_0x18b2ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b2ac_0x18b2ac");
#endif

    ctx->pc = 0x18b2acu;

    // 0x18b2ac: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x18b2acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    ctx->pc = 0x18b2b0u;
}

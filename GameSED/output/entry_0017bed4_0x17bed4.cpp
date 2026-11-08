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

// Function: entry_0017bed4
// Address: 0x17bed4 - 0x17bed8
void entry_0017bed4_0x17bed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bed4_0x17bed4");
#endif

    ctx->pc = 0x17bed4u;

    // 0x17bed4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x17bed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x17bed8u;
}

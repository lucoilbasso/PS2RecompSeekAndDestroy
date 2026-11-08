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

// Function: entry_0017a3e0
// Address: 0x17a3e0 - 0x17a3e4
void entry_0017a3e0_0x17a3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a3e0_0x17a3e0");
#endif

    ctx->pc = 0x17a3e0u;

    // 0x17a3e0: 0xaf808d14  sw          $zero, -0x72EC($gp)
    ctx->pc = 0x17a3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937876), GPR_U32(ctx, 0));
    ctx->pc = 0x17a3e4u;
}

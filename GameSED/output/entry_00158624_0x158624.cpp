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

// Function: entry_00158624
// Address: 0x158624 - 0x158628
void entry_00158624_0x158624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158624_0x158624");
#endif

    ctx->pc = 0x158624u;

    // 0x158624: 0xacc5009c  sw          $a1, 0x9C($a2)
    ctx->pc = 0x158624u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 156), GPR_U32(ctx, 5));
    ctx->pc = 0x158628u;
}

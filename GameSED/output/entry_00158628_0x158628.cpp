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

// Function: entry_00158628
// Address: 0x158628 - 0x15862c
void entry_00158628_0x158628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158628_0x158628");
#endif

    ctx->pc = 0x158628u;

    // 0x158628: 0xacca0094  sw          $t2, 0x94($a2)
    ctx->pc = 0x158628u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 148), GPR_U32(ctx, 10));
    ctx->pc = 0x15862cu;
}

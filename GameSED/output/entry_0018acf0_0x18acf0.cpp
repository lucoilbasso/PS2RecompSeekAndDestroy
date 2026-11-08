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

// Function: entry_0018acf0
// Address: 0x18acf0 - 0x18acf4
void entry_0018acf0_0x18acf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018acf0_0x18acf0");
#endif

    ctx->pc = 0x18acf0u;

    // 0x18acf0: 0xdf848c90  ld          $a0, -0x7370($gp)
    ctx->pc = 0x18acf0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    ctx->pc = 0x18acf4u;
}

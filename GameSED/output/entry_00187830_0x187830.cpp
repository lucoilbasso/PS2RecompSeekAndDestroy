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

// Function: entry_00187830
// Address: 0x187830 - 0x187834
void entry_00187830_0x187830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187830_0x187830");
#endif

    ctx->pc = 0x187830u;

    // 0x187830: 0xae30015c  sw          $s0, 0x15C($s1)
    ctx->pc = 0x187830u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 16));
    ctx->pc = 0x187834u;
}

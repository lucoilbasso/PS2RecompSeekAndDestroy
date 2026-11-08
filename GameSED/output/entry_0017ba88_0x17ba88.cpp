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

// Function: entry_0017ba88
// Address: 0x17ba88 - 0x17ba8c
void entry_0017ba88_0x17ba88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ba88_0x17ba88");
#endif

    ctx->pc = 0x17ba88u;

    // 0x17ba88: 0xaca40040  sw          $a0, 0x40($a1)
    ctx->pc = 0x17ba88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 4));
    ctx->pc = 0x17ba8cu;
}

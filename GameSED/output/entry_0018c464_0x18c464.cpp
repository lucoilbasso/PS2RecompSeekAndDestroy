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

// Function: entry_0018c464
// Address: 0x18c464 - 0x18c468
void entry_0018c464_0x18c464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c464_0x18c464");
#endif

    ctx->pc = 0x18c464u;

    // 0x18c464: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18c464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    ctx->pc = 0x18c468u;
}

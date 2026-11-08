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

// Function: entry_001a2f54
// Address: 0x1a2f54 - 0x1a2f58
void entry_001a2f54_0x1a2f54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2f54_0x1a2f54");
#endif

    ctx->pc = 0x1a2f54u;

    // 0x1a2f54: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a2f54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1a2f58u;
}

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

// Function: entry_001234cc
// Address: 0x1234cc - 0x1234d0
void entry_001234cc_0x1234cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001234cc_0x1234cc");
#endif

    ctx->pc = 0x1234ccu;

    // 0x1234cc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1234ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    ctx->pc = 0x1234d0u;
}

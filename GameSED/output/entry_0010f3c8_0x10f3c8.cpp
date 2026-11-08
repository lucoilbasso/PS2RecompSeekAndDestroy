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

// Function: entry_0010f3c8
// Address: 0x10f3c8 - 0x10f3cc
void entry_0010f3c8_0x10f3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f3c8_0x10f3c8");
#endif

    ctx->pc = 0x10f3c8u;

    // 0x10f3c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10f3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->pc = 0x10f3ccu;
}

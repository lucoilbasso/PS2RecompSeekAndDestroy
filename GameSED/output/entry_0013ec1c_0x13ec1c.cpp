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

// Function: entry_0013ec1c
// Address: 0x13ec1c - 0x13ec20
void entry_0013ec1c_0x13ec1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ec1c_0x13ec1c");
#endif

    ctx->pc = 0x13ec1cu;

    // 0x13ec1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13ec1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    ctx->pc = 0x13ec20u;
}

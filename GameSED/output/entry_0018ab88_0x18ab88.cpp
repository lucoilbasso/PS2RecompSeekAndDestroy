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

// Function: entry_0018ab88
// Address: 0x18ab88 - 0x18ab8c
void entry_0018ab88_0x18ab88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ab88_0x18ab88");
#endif

    ctx->pc = 0x18ab88u;

    // 0x18ab88: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x18ab88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    ctx->pc = 0x18ab8cu;
}

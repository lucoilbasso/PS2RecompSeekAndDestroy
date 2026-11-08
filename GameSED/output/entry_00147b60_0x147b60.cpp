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

// Function: entry_00147b60
// Address: 0x147b60 - 0x147b64
void entry_00147b60_0x147b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147b60_0x147b60");
#endif

    ctx->pc = 0x147b60u;

    // 0x147b60: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x147b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    ctx->pc = 0x147b64u;
}

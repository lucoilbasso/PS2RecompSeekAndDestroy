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

// Function: entry_0012c4b8
// Address: 0x12c4b8 - 0x12c4bc
void entry_0012c4b8_0x12c4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c4b8_0x12c4b8");
#endif

    ctx->pc = 0x12c4b8u;

    // 0x12c4b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x12c4bcu;
}

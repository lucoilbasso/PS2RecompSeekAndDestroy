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

// Function: entry_00110cc4
// Address: 0x110cc4 - 0x110cc8
void entry_00110cc4_0x110cc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110cc4_0x110cc4");
#endif

    ctx->pc = 0x110cc4u;

    // 0x110cc4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x110cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    ctx->pc = 0x110cc8u;
}

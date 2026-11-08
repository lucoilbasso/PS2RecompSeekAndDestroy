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

// Function: entry_001a1b78
// Address: 0x1a1b78 - 0x1a1b84
void entry_001a1b78_0x1a1b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1b78_0x1a1b78");
#endif

    ctx->pc = 0x1a1b78u;

    // 0x1a1b78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a1b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a1b7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a1b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a1b80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a1b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    ctx->pc = 0x1a1b84u;
}

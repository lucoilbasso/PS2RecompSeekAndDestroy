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

// Function: entry_0018e964
// Address: 0x18e964 - 0x18e96c
void entry_0018e964_0x18e964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e964_0x18e964");
#endif

    ctx->pc = 0x18e964u;

    // 0x18e964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18e964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18e968: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18e968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    ctx->pc = 0x18e96cu;
}

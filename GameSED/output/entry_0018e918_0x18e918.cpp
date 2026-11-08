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

// Function: entry_0018e918
// Address: 0x18e918 - 0x18e91c
void entry_0018e918_0x18e918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e918_0x18e918");
#endif

    ctx->pc = 0x18e918u;

    // 0x18e918: 0x2c4202df  sltiu       $v0, $v0, 0x2DF
    ctx->pc = 0x18e918u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)735) ? 1 : 0);
    ctx->pc = 0x18e91cu;
}

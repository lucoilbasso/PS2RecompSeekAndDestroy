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

// Function: entry_001cadb8
// Address: 0x1cadb8 - 0x1cadbc
void entry_001cadb8_0x1cadb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cadb8_0x1cadb8");
#endif

    ctx->pc = 0x1cadb8u;

    // 0x1cadb8: 0x2da20002  sltiu       $v0, $t5, 0x2
    ctx->pc = 0x1cadb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    ctx->pc = 0x1cadbcu;
}

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

// Function: entry_001cbda8
// Address: 0x1cbda8 - 0x1cbdb0
void entry_001cbda8_0x1cbda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbda8_0x1cbda8");
#endif

    ctx->pc = 0x1cbda8u;

    // 0x1cbda8: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x1cbda8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1cbdac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1cbdacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    ctx->pc = 0x1cbdb0u;
}

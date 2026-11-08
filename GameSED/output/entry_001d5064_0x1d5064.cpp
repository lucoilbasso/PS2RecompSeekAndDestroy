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

// Function: entry_001d5064
// Address: 0x1d5064 - 0x1d5068
void entry_001d5064_0x1d5064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5064_0x1d5064");
#endif

    ctx->pc = 0x1d5064u;

    // 0x1d5064: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x1d5064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    ctx->pc = 0x1d5068u;
}

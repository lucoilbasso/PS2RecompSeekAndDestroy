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

// Function: entry_0017443c
// Address: 0x17443c - 0x174444
void entry_0017443c_0x17443c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017443c_0x17443c");
#endif

    ctx->pc = 0x17443cu;

    // 0x17443c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x17443cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x174440: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x174440u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    ctx->pc = 0x174444u;
}

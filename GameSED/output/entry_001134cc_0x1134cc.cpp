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

// Function: entry_001134cc
// Address: 0x1134cc - 0x1134d0
void entry_001134cc_0x1134cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001134cc_0x1134cc");
#endif

    ctx->pc = 0x1134ccu;

    // 0x1134cc: 0x26223410  addiu       $v0, $s1, 0x3410
    ctx->pc = 0x1134ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 13328));
    ctx->pc = 0x1134d0u;
}

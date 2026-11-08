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

// Function: entry_001370c8
// Address: 0x1370c8 - 0x1370cc
void entry_001370c8_0x1370c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001370c8_0x1370c8");
#endif

    ctx->pc = 0x1370c8u;

    // 0x1370c8: 0x46300b  movn        $a2, $v0, $a2
    ctx->pc = 0x1370c8u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    ctx->pc = 0x1370ccu;
}

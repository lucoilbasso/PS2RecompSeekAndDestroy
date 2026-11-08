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

// Function: entry_001c9050
// Address: 0x1c9050 - 0x1c9054
void entry_001c9050_0x1c9050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9050_0x1c9050");
#endif

    ctx->pc = 0x1c9050u;

    // 0x1c9050: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1c9050u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->pc = 0x1c9054u;
}

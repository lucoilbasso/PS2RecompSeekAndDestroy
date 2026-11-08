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

// Function: entry_00184d60
// Address: 0x184d60 - 0x184d64
void entry_00184d60_0x184d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184d60_0x184d60");
#endif

    ctx->pc = 0x184d60u;

    // 0x184d60: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x184d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->pc = 0x184d64u;
}

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

// Function: entry_001a7c68
// Address: 0x1a7c68 - 0x1a7c6c
void entry_001a7c68_0x1a7c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7c68_0x1a7c68");
#endif

    ctx->pc = 0x1a7c68u;

    // 0x1a7c68: 0x8e270038  lw          $a3, 0x38($s1)
    ctx->pc = 0x1a7c68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    ctx->pc = 0x1a7c6cu;
}

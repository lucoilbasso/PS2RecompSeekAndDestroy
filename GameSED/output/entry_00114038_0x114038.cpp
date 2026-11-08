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

// Function: entry_00114038
// Address: 0x114038 - 0x11403c
void entry_00114038_0x114038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114038_0x114038");
#endif

    ctx->pc = 0x114038u;

    // 0x114038: 0x90660013  lbu         $a2, 0x13($v1)
    ctx->pc = 0x114038u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
    ctx->pc = 0x11403cu;
}

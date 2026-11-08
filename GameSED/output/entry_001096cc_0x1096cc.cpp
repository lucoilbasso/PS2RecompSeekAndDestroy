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

// Function: entry_001096cc
// Address: 0x1096cc - 0x1096d0
void entry_001096cc_0x1096cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001096cc_0x1096cc");
#endif

    ctx->pc = 0x1096ccu;

    // 0x1096cc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1096ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1096d0u;
}

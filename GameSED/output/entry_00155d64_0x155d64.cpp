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

// Function: entry_00155d64
// Address: 0x155d64 - 0x155d68
void entry_00155d64_0x155d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155d64_0x155d64");
#endif

    ctx->pc = 0x155d64u;

    // 0x155d64: 0x24639c48  addiu       $v1, $v1, -0x63B8
    ctx->pc = 0x155d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941768));
    ctx->pc = 0x155d68u;
}

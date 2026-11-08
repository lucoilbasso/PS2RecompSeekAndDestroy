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

// Function: entry_00138994
// Address: 0x138994 - 0x138998
void entry_00138994_0x138994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138994_0x138994");
#endif

    ctx->pc = 0x138994u;

    // 0x138994: 0x2451b840  addiu       $s1, $v0, -0x47C0
    ctx->pc = 0x138994u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948928));
    ctx->pc = 0x138998u;
}

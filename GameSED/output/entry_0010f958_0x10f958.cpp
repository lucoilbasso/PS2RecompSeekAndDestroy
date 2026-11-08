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

// Function: entry_0010f958
// Address: 0x10f958 - 0x10f95c
void entry_0010f958_0x10f958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f958_0x10f958");
#endif

    ctx->pc = 0x10f958u;

    // 0x10f958: 0x264300d0  addiu       $v1, $s2, 0xD0
    ctx->pc = 0x10f958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    ctx->pc = 0x10f95cu;
}

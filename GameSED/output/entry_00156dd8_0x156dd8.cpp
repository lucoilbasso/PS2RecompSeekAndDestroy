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

// Function: entry_00156dd8
// Address: 0x156dd8 - 0x156ddc
void entry_00156dd8_0x156dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156dd8_0x156dd8");
#endif

    ctx->pc = 0x156dd8u;

    // 0x156dd8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x156dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->pc = 0x156ddcu;
}

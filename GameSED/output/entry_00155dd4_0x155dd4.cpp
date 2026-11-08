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

// Function: entry_00155dd4
// Address: 0x155dd4 - 0x155dd8
void entry_00155dd4_0x155dd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155dd4_0x155dd4");
#endif

    ctx->pc = 0x155dd4u;

    // 0x155dd4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x155dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x155dd8u;
}

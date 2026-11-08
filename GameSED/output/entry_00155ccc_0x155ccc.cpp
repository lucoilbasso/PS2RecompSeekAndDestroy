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

// Function: entry_00155ccc
// Address: 0x155ccc - 0x155cd0
void entry_00155ccc_0x155ccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155ccc_0x155ccc");
#endif

    ctx->pc = 0x155cccu;

    // 0x155ccc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x155cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x155cd0u;
}

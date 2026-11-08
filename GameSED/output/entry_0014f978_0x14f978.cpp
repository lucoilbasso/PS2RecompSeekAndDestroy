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

// Function: entry_0014f978
// Address: 0x14f978 - 0x14f97c
void entry_0014f978_0x14f978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f978_0x14f978");
#endif

    ctx->pc = 0x14f978u;

    // 0x14f978: 0x8e620184  lw          $v0, 0x184($s3)
    ctx->pc = 0x14f978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 388)));
    ctx->pc = 0x14f97cu;
}

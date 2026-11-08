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

// Function: entry_0017b0dc
// Address: 0x17b0dc - 0x17b0e0
void entry_0017b0dc_0x17b0dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b0dc_0x17b0dc");
#endif

    ctx->pc = 0x17b0dcu;

    // 0x17b0dc: 0x24130040  addiu       $s3, $zero, 0x40
    ctx->pc = 0x17b0dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x17b0e0u;
}

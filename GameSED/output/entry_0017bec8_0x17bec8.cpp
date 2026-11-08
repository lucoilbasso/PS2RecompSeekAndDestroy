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

// Function: entry_0017bec8
// Address: 0x17bec8 - 0x17becc
void entry_0017bec8_0x17bec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bec8_0x17bec8");
#endif

    ctx->pc = 0x17bec8u;

    // 0x17bec8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x17bec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x17beccu;
}

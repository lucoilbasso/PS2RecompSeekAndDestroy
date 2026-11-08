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

// Function: entry_001c4bc8
// Address: 0x1c4bc8 - 0x1c4bcc
void entry_001c4bc8_0x1c4bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4bc8_0x1c4bc8");
#endif

    ctx->pc = 0x1c4bc8u;

    // 0x1c4bc8: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1c4bc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x1c4bccu;
}

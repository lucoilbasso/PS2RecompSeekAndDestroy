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

// Function: entry_00105884
// Address: 0x105884 - 0x105888
void entry_00105884_0x105884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105884_0x105884");
#endif

    ctx->pc = 0x105884u;

    // 0x105884: 0x24041605  addiu       $a0, $zero, 0x1605
    ctx->pc = 0x105884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5637));
    ctx->pc = 0x105888u;
}

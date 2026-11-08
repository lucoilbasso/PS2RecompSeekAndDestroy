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

// Function: entry_0017b800
// Address: 0x17b800 - 0x17b804
void entry_0017b800_0x17b800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b800_0x17b800");
#endif

    ctx->pc = 0x17b800u;

    // 0x17b800: 0x24c60060  addiu       $a2, $a2, 0x60
    ctx->pc = 0x17b800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    ctx->pc = 0x17b804u;
}

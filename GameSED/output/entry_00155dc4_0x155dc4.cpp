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

// Function: entry_00155dc4
// Address: 0x155dc4 - 0x155dc8
void entry_00155dc4_0x155dc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155dc4_0x155dc4");
#endif

    ctx->pc = 0x155dc4u;

    // 0x155dc4: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x155dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    ctx->pc = 0x155dc8u;
}

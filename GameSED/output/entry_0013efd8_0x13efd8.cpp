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

// Function: entry_0013efd8
// Address: 0x13efd8 - 0x13efdc
void entry_0013efd8_0x13efd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013efd8_0x13efd8");
#endif

    ctx->pc = 0x13efd8u;

    // 0x13efd8: 0xa6200008  sh          $zero, 0x8($s1)
    ctx->pc = 0x13efd8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x13efdcu;
}

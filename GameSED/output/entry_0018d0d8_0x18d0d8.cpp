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

// Function: entry_0018d0d8
// Address: 0x18d0d8 - 0x18d0e0
void entry_0018d0d8_0x18d0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d0d8_0x18d0d8");
#endif

    ctx->pc = 0x18d0d8u;

    // 0x18d0d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18d0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18d0dc: 0xa6030244  sh          $v1, 0x244($s0)
    ctx->pc = 0x18d0dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 580), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x18d0e0u;
}

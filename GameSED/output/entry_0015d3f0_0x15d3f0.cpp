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

// Function: entry_0015d3f0
// Address: 0x15d3f0 - 0x15d400
void entry_0015d3f0_0x15d3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d3f0_0x15d3f0");
#endif

    ctx->pc = 0x15d3f0u;

    // 0x15d3f0: 0xae00016c  sw          $zero, 0x16C($s0)
    ctx->pc = 0x15d3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 0));
    // 0x15d3f4: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x15d3f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x15d3f8: 0xae030160  sw          $v1, 0x160($s0)
    ctx->pc = 0x15d3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 3));
    // 0x15d3fc: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x15d3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    ctx->pc = 0x15d400u;
}

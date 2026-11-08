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

// Function: entry_001d50e0
// Address: 0x1d50e0 - 0x1d50ec
void entry_001d50e0_0x1d50e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d50e0_0x1d50e0");
#endif

    ctx->pc = 0x1d50e0u;

    // 0x1d50e0: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x1d50e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d50e4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1d50e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1d50e8: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x1d50e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1d50ecu;
}

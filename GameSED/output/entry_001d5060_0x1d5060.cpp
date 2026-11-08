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

// Function: entry_001d5060
// Address: 0x1d5060 - 0x1d5064
void entry_001d5060_0x1d5060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5060_0x1d5060");
#endif

    ctx->pc = 0x1d5060u;

    // 0x1d5060: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x1d5060u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x1d5064u;
}

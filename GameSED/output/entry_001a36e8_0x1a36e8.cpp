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

// Function: entry_001a36e8
// Address: 0x1a36e8 - 0x1a36ec
void entry_001a36e8_0x1a36e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a36e8_0x1a36e8");
#endif

    ctx->pc = 0x1a36e8u;

    // 0x1a36e8: 0x9502000a  lhu         $v0, 0xA($t0)
    ctx->pc = 0x1a36e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
    ctx->pc = 0x1a36ecu;
}

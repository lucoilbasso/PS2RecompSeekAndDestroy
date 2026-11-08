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

// Function: entry_0011a5e8
// Address: 0x11a5e8 - 0x11a5ec
void entry_0011a5e8_0x11a5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a5e8_0x11a5e8");
#endif

    ctx->pc = 0x11a5e8u;

    // 0x11a5e8: 0xc43806  srlv        $a3, $a0, $a2
    ctx->pc = 0x11a5e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
    ctx->pc = 0x11a5ecu;
}

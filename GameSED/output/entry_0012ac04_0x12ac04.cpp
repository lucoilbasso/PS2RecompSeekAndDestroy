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

// Function: entry_0012ac04
// Address: 0x12ac04 - 0x12ac08
void entry_0012ac04_0x12ac04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ac04_0x12ac04");
#endif

    ctx->pc = 0x12ac04u;

    // 0x12ac04: 0x8602000a  lh          $v0, 0xA($s0)
    ctx->pc = 0x12ac04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    ctx->pc = 0x12ac08u;
}

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

// Function: entry_0018fff4
// Address: 0x18fff4 - 0x18fff8
void entry_0018fff4_0x18fff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fff4_0x18fff4");
#endif

    ctx->pc = 0x18fff4u;

    // 0x18fff4: 0x9622015a  lhu         $v0, 0x15A($s1)
    ctx->pc = 0x18fff4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 346)));
    ctx->pc = 0x18fff8u;
}

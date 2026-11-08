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

// Function: entry_00127bcc
// Address: 0x127bcc - 0x127bd0
void entry_00127bcc_0x127bcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127bcc_0x127bcc");
#endif

    ctx->pc = 0x127bccu;

    // 0x127bcc: 0x263001b0  addiu       $s0, $s1, 0x1B0
    ctx->pc = 0x127bccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
    ctx->pc = 0x127bd0u;
}

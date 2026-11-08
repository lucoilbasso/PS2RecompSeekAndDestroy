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

// Function: entry_0018e598
// Address: 0x18e598 - 0x18e59c
void entry_0018e598_0x18e598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e598_0x18e598");
#endif

    ctx->pc = 0x18e598u;

    // 0x18e598: 0x84e40006  lh          $a0, 0x6($a3)
    ctx->pc = 0x18e598u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    ctx->pc = 0x18e59cu;
}

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

// Function: entry_001779c4
// Address: 0x1779c4 - 0x1779c8
void entry_001779c4_0x1779c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001779c4_0x1779c4");
#endif

    ctx->pc = 0x1779c4u;

    // 0x1779c4: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1779c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x1779c8u;
}

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

// Function: entry_00129fa4
// Address: 0x129fa4 - 0x129fa8
void entry_00129fa4_0x129fa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129fa4_0x129fa4");
#endif

    ctx->pc = 0x129fa4u;

    // 0x129fa4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x129fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x129fa8u;
}

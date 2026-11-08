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

// Function: entry_0019e000
// Address: 0x19e000 - 0x19e004
void entry_0019e000_0x19e000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e000_0x19e000");
#endif

    ctx->pc = 0x19e000u;

    // 0x19e000: 0x23000  sll         $a2, $v0, 0
    ctx->pc = 0x19e000u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    ctx->pc = 0x19e004u;
}

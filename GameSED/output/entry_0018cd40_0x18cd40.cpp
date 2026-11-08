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

// Function: entry_0018cd40
// Address: 0x18cd40 - 0x18cd44
void entry_0018cd40_0x18cd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cd40_0x18cd40");
#endif

    ctx->pc = 0x18cd40u;

    // 0x18cd40: 0x1128c0  sll         $a1, $s1, 3
    ctx->pc = 0x18cd40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    ctx->pc = 0x18cd44u;
}

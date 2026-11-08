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

// Function: entry_00118bf4
// Address: 0x118bf4 - 0x118bf8
void entry_00118bf4_0x118bf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118bf4_0x118bf4");
#endif

    ctx->pc = 0x118bf4u;

    // 0x118bf4: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x118bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x118bf8u;
}

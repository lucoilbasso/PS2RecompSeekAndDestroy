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

// Function: entry_0017caf4
// Address: 0x17caf4 - 0x17caf8
void entry_0017caf4_0x17caf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017caf4_0x17caf4");
#endif

    ctx->pc = 0x17caf4u;

    // 0x17caf4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x17caf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    ctx->pc = 0x17caf8u;
}

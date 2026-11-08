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

// Function: entry_00118ae0
// Address: 0x118ae0 - 0x118ae4
void entry_00118ae0_0x118ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118ae0_0x118ae0");
#endif

    ctx->pc = 0x118ae0u;

    // 0x118ae0: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x118ae0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    ctx->pc = 0x118ae4u;
}

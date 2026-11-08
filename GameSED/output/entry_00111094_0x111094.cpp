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

// Function: entry_00111094
// Address: 0x111094 - 0x11109c
void entry_00111094_0x111094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111094_0x111094");
#endif

    ctx->pc = 0x111094u;

    // 0x111094: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x111094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x111098: 0x2414001b  addiu       $s4, $zero, 0x1B
    ctx->pc = 0x111098u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->pc = 0x11109cu;
}

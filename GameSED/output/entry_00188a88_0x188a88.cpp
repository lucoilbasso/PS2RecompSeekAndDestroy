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

// Function: entry_00188a88
// Address: 0x188a88 - 0x188a90
void entry_00188a88_0x188a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188a88_0x188a88");
#endif

    ctx->pc = 0x188a88u;

    // 0x188a88: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x188a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x188a8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x188a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x188a90u;
}

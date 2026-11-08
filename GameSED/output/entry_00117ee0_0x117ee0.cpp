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

// Function: entry_00117ee0
// Address: 0x117ee0 - 0x117ee8
void entry_00117ee0_0x117ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117ee0_0x117ee0");
#endif

    ctx->pc = 0x117ee0u;

    // 0x117ee0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x117ee0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ee4: 0x1032021  addu        $a0, $t0, $v1
    ctx->pc = 0x117ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    ctx->pc = 0x117ee8u;
}

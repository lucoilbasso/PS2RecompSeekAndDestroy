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

// Function: entry_00132634
// Address: 0x132634 - 0x132644
void entry_00132634_0x132634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132634_0x132634");
#endif

    ctx->pc = 0x132634u;

    // 0x132634: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x132634u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x132638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x132638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13263c: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x13263cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x132640: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x132640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->pc = 0x132644u;
}

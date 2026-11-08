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

// Function: entry_00122910
// Address: 0x122910 - 0x122920
void entry_00122910_0x122910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122910_0x122910");
#endif

    ctx->pc = 0x122910u;

    // 0x122910: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x122910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x122914: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x122914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x122918: 0xac440160  sw          $a0, 0x160($v0)
    ctx->pc = 0x122918u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 4));
    // 0x12291c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x12291cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x122920u;
}

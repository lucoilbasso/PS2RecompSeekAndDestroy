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

// Function: entry_001bf744
// Address: 0x1bf744 - 0x1bf758
void entry_001bf744_0x1bf744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf744_0x1bf744");
#endif

    ctx->pc = 0x1bf744u;

    // 0x1bf744: 0x51083  sra         $v0, $a1, 2
    ctx->pc = 0x1bf744u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 2));
    // 0x1bf748: 0xb1843  sra         $v1, $t3, 1
    ctx->pc = 0x1bf748u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), 1));
    // 0x1bf74c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bf74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bf750: 0xf12021  addu        $a0, $a3, $s1
    ctx->pc = 0x1bf750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x1bf754: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x1bf754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x1bf758u;
}

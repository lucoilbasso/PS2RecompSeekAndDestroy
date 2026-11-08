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

// Function: entry_00150038
// Address: 0x150038 - 0x150048
void entry_00150038_0x150038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150038_0x150038");
#endif

    ctx->pc = 0x150038u;

    // 0x150038: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x150038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x15003c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x15003cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x150040: 0xae0203b0  sw          $v0, 0x3B0($s0)
    ctx->pc = 0x150040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 2));
    // 0x150044: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x150044u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x150048u;
}

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

// Function: entry_00113358
// Address: 0x113358 - 0x113368
void entry_00113358_0x113358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113358_0x113358");
#endif

    ctx->pc = 0x113358u;

    // 0x113358: 0x26303518  addiu       $s0, $s1, 0x3518
    ctx->pc = 0x113358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 13592));
    // 0x11335c: 0x26333538  addiu       $s3, $s1, 0x3538
    ctx->pc = 0x11335cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 13624));
    // 0x113360: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x113360u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x113364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x113368u;
}

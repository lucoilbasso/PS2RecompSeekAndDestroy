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

// Function: entry_0013d868
// Address: 0x13d868 - 0x13d870
void entry_0013d868_0x13d868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d868_0x13d868");
#endif

    ctx->pc = 0x13d868u;

    // 0x13d868: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x13d868u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d86c: 0x24520030  addiu       $s2, $v0, 0x30
    ctx->pc = 0x13d86cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->pc = 0x13d870u;
}

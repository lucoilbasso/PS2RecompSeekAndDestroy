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

// Function: entry_00177ae4
// Address: 0x177ae4 - 0x177af0
void entry_00177ae4_0x177ae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177ae4_0x177ae4");
#endif

    ctx->pc = 0x177ae4u;

    // 0x177ae4: 0x2450cf80  addiu       $s0, $v0, -0x3080
    ctx->pc = 0x177ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954880));
    // 0x177ae8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x177ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177aec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177af0u;
}

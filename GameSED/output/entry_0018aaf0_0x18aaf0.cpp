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

// Function: entry_0018aaf0
// Address: 0x18aaf0 - 0x18aaf8
void entry_0018aaf0_0x18aaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018aaf0_0x18aaf0");
#endif

    ctx->pc = 0x18aaf0u;

    // 0x18aaf0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x18aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x18aaf4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    ctx->pc = 0x18aaf8u;
}

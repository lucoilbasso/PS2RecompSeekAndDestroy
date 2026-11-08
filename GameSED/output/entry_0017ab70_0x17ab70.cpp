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

// Function: entry_0017ab70
// Address: 0x17ab70 - 0x17ab8c
void entry_0017ab70_0x17ab70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ab70_0x17ab70");
#endif

    ctx->pc = 0x17ab70u;

    // 0x17ab70: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x17ab70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17ab74: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x17ab74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17ab78: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x17ab78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x17ab7c: 0xae040040  sw          $a0, 0x40($s0)
    ctx->pc = 0x17ab7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 4));
    // 0x17ab80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17ab80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab84: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x17ab84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x17ab88: 0x24067fff  addiu       $a2, $zero, 0x7FFF
    ctx->pc = 0x17ab88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    ctx->pc = 0x17ab8cu;
}

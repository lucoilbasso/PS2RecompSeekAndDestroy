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

// Function: entry_0012e4d8
// Address: 0x12e4d8 - 0x12e4f0
void entry_0012e4d8_0x12e4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e4d8_0x12e4d8");
#endif

    ctx->pc = 0x12e4d8u;

    // 0x12e4d8: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x12e4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x12e4dc: 0x1618c0  sll         $v1, $s6, 3
    ctx->pc = 0x12e4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x12e4e0: 0x5e8821  addu        $s1, $v0, $fp
    ctx->pc = 0x12e4e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x12e4e4: 0x7d9821  addu        $s3, $v1, $sp
    ctx->pc = 0x12e4e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x12e4e8: 0x2415000d  addiu       $s5, $zero, 0xD
    ctx->pc = 0x12e4e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x12e4ec: 0x0  nop
    ctx->pc = 0x12e4ecu;
    // NOP
    ctx->pc = 0x12e4f0u;
}

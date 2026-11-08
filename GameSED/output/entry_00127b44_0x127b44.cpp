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

// Function: entry_00127b44
// Address: 0x127b44 - 0x127b68
void entry_00127b44_0x127b44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127b44_0x127b44");
#endif

    ctx->pc = 0x127b44u;

    // 0x127b44: 0xae2001a0  sw          $zero, 0x1A0($s1)
    ctx->pc = 0x127b44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 0));
    // 0x127b48: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x127b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x127b4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b50: 0x24a305f4  addiu       $v1, $a1, 0x5F4
    ctx->pc = 0x127b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1524));
    // 0x127b54: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x127b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x127b58: 0x24a605f0  addiu       $a2, $a1, 0x5F0
    ctx->pc = 0x127b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1520));
    // 0x127b5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x127b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b60: 0xae2201a4  sw          $v0, 0x1A4($s1)
    ctx->pc = 0x127b60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 420), GPR_U32(ctx, 2));
    // 0x127b64: 0x0  nop
    ctx->pc = 0x127b64u;
    // NOP
    ctx->pc = 0x127b68u;
}

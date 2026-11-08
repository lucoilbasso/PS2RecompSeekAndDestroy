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

// Function: entry_00142a88
// Address: 0x142a88 - 0x142ab0
void entry_00142a88_0x142a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142a88_0x142a88");
#endif

    ctx->pc = 0x142a88u;

    // 0x142a88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x142a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x142a8c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x142a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x142a90: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x142a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x142a94: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x142a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x142a98: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x142a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x142a9c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x142a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x142aa0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x142aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x142aa4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x142aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x142aa8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x142aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x142aac: 0x26020034  addiu       $v0, $s0, 0x34
    ctx->pc = 0x142aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    ctx->pc = 0x142ab0u;
}

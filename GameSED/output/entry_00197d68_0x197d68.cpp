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

// Function: entry_00197d68
// Address: 0x197d68 - 0x197d7c
void entry_00197d68_0x197d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197d68_0x197d68");
#endif

    ctx->pc = 0x197d68u;

    // 0x197d68: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x197d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x197d6c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x197d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x197d70: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x197d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x197d74: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x197d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x197d78: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x197d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->pc = 0x197d7cu;
}

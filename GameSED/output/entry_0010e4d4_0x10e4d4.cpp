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

// Function: entry_0010e4d4
// Address: 0x10e4d4 - 0x10e4e4
void entry_0010e4d4_0x10e4d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e4d4_0x10e4d4");
#endif

    ctx->pc = 0x10e4d4u;

    // 0x10e4d4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x10e4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x10e4d8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x10e4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x10e4dc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x10e4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x10e4e0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x10e4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x10e4e4u;
}

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

// Function: entry_00177850
// Address: 0x177850 - 0x17785c
void entry_00177850_0x177850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177850_0x177850");
#endif

    ctx->pc = 0x177850u;

    // 0x177850: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x177850u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x177854: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x177854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x177858: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x177858u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x17785cu;
}

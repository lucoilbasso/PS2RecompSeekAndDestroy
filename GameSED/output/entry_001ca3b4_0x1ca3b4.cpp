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

// Function: entry_001ca3b4
// Address: 0x1ca3b4 - 0x1ca3c0
void entry_001ca3b4_0x1ca3b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca3b4_0x1ca3b4");
#endif

    ctx->pc = 0x1ca3b4u;

    // 0x1ca3b4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1ca3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ca3b8: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x1ca3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x1ca3bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca3bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ca3c0u;
}

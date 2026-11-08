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

// Function: entry_001c77a4
// Address: 0x1c77a4 - 0x1c77ac
void entry_001c77a4_0x1c77a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c77a4_0x1c77a4");
#endif

    ctx->pc = 0x1c77a4u;

    // 0x1c77a4: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x1c77a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1c77a8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1c77a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->pc = 0x1c77acu;
}

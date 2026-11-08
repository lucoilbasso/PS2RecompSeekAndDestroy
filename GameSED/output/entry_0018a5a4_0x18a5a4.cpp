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

// Function: entry_0018a5a4
// Address: 0x18a5a4 - 0x18a5b0
void entry_0018a5a4_0x18a5a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a5a4_0x18a5a4");
#endif

    ctx->pc = 0x18a5a4u;

    // 0x18a5a4: 0x423c0  sll         $a0, $a0, 15
    ctx->pc = 0x18a5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 15));
    // 0x18a5a8: 0x2484c000  addiu       $a0, $a0, -0x4000
    ctx->pc = 0x18a5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950912));
    // 0x18a5ac: 0xe42007  srav        $a0, $a0, $a3
    ctx->pc = 0x18a5acu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    ctx->pc = 0x18a5b0u;
}

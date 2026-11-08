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

// Function: entry_0019253c
// Address: 0x19253c - 0x192548
void entry_0019253c_0x19253c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019253c_0x19253c");
#endif

    ctx->pc = 0x19253cu;

    // 0x19253c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x19253cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x192540: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x192540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x192544: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x192544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x192548u;
}

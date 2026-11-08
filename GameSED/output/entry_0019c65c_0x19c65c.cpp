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

// Function: entry_0019c65c
// Address: 0x19c65c - 0x19c664
void entry_0019c65c_0x19c65c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c65c_0x19c65c");
#endif

    ctx->pc = 0x19c65cu;

    // 0x19c65c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x19c65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19c660: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x19c660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x19c664u;
}

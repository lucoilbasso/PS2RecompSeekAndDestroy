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

// Function: entry_00175e64
// Address: 0x175e64 - 0x175e68
void entry_00175e64_0x175e64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175e64_0x175e64");
#endif

    ctx->pc = 0x175e64u;

    // 0x175e64: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x175e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    ctx->pc = 0x175e68u;
}

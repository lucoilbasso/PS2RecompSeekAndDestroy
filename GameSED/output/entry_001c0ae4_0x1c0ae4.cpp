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

// Function: entry_001c0ae4
// Address: 0x1c0ae4 - 0x1c0af0
void entry_001c0ae4_0x1c0ae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0ae4_0x1c0ae4");
#endif

    ctx->pc = 0x1c0ae4u;

    // 0x1c0ae4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1c0ae4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ae8: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x1c0ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x1c0aec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1c0aecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1c0af0u;
}

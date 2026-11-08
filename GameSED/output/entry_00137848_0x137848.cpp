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

// Function: entry_00137848
// Address: 0x137848 - 0x137854
void entry_00137848_0x137848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137848_0x137848");
#endif

    ctx->pc = 0x137848u;

    // 0x137848: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x137848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13784c: 0x2484bc50  addiu       $a0, $a0, -0x43B0
    ctx->pc = 0x13784cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949968));
    // 0x137850: 0xac970400  sw          $s7, 0x400($a0)
    ctx->pc = 0x137850u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1024), GPR_U32(ctx, 23));
    ctx->pc = 0x137854u;
}

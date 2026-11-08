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

// Function: entry_001a4b70
// Address: 0x1a4b70 - 0x1a4b80
void entry_001a4b70_0x1a4b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4b70_0x1a4b70");
#endif

    ctx->pc = 0x1a4b70u;

    // 0x1a4b70: 0x24c625b8  addiu       $a2, $a2, 0x25B8
    ctx->pc = 0x1a4b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9656));
    // 0x1a4b74: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1a4b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a4b78: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a4b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a4b80u;
}

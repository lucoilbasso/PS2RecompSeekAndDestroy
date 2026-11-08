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

// Function: entry_00177b64
// Address: 0x177b64 - 0x177b78
void entry_00177b64_0x177b64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177b64_0x177b64");
#endif

    ctx->pc = 0x177b64u;

    // 0x177b64: 0x26110080  addiu       $s1, $s0, 0x80
    ctx->pc = 0x177b64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x177b68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x177b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177b6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x177b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177b70: 0x24c67bb0  addiu       $a2, $a2, 0x7BB0
    ctx->pc = 0x177b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31664));
    // 0x177b74: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x177b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->pc = 0x177b78u;
}

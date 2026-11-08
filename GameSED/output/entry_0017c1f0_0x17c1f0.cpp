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

// Function: entry_0017c1f0
// Address: 0x17c1f0 - 0x17c208
void entry_0017c1f0_0x17c1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c1f0_0x17c1f0");
#endif

    ctx->pc = 0x17c1f0u;

    // 0x17c1f0: 0xac510020  sw          $s1, 0x20($v0)
    ctx->pc = 0x17c1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 17));
    // 0x17c1f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17c1f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c1f8: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x17c1f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17c1fc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17c1fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c200: 0x24440250  addiu       $a0, $v0, 0x250
    ctx->pc = 0x17c200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 592));
    // 0x17c204: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x17c204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->pc = 0x17c208u;
}

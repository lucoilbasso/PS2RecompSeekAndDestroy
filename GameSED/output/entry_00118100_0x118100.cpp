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

// Function: entry_00118100
// Address: 0x118100 - 0x118110
void entry_00118100_0x118100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118100_0x118100");
#endif

    ctx->pc = 0x118100u;

    // 0x118100: 0xaec00c0c  sw          $zero, 0xC0C($s6)
    ctx->pc = 0x118100u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 3084), GPR_U32(ctx, 0));
    // 0x118104: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x118104u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118108: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x118108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11810c: 0x26c20c28  addiu       $v0, $s6, 0xC28
    ctx->pc = 0x11810cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 3112));
    ctx->pc = 0x118110u;
}

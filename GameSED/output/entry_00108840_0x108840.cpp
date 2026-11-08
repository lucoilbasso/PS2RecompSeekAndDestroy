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

// Function: entry_00108840
// Address: 0x108840 - 0x108848
void entry_00108840_0x108840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108840_0x108840");
#endif

    ctx->pc = 0x108840u;

    // 0x108840: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x108840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108844: 0x8e83007c  lw          $v1, 0x7C($s4)
    ctx->pc = 0x108844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    ctx->pc = 0x108848u;
}

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

// Function: entry_001db1ac
// Address: 0x1db1ac - 0x1db1b8
void entry_001db1ac_0x1db1ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db1ac_0x1db1ac");
#endif

    ctx->pc = 0x1db1acu;

    // 0x1db1ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db1acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1db1b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1b4: 0xc04c5ac  jal         func_1316B0
    ctx->pc = 0x1DB1B4u;
    SET_GPR_U32(ctx, 31, 0x1DB1BCu);
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x1DB1B4u, 0x1DB1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB1BCu;
}

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

// Function: entry_0013edac
// Address: 0x13edac - 0x13edbc
void entry_0013edac_0x13edac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013edac_0x13edac");
#endif

    ctx->pc = 0x13edacu;

    // 0x13edac: 0x8f848c54  lw          $a0, -0x73AC($gp)
    ctx->pc = 0x13edacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
    // 0x13edb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13edb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13edb4: 0xc06b1f6  jal         func_1AC7D8
    ctx->pc = 0x13EDB4u;
    SET_GPR_U32(ctx, 31, 0x13EDBCu);
    ctx->pc = 0x13EDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EDB4u;
    // 0x13edb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC7D8u, 0x13EDB4u, 0x13EDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EDBCu;
}

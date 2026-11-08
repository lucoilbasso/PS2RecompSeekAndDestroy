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

// Function: entry_00143088
// Address: 0x143088 - 0x14309c
void entry_00143088_0x143088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143088_0x143088");
#endif

    ctx->pc = 0x143088u;

    // 0x143088: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x143088u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14308c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14308cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143090: 0x24a56968  addiu       $a1, $a1, 0x6968
    ctx->pc = 0x143090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26984));
    // 0x143094: 0xc068186  jal         func_1A0618
    ctx->pc = 0x143094u;
    SET_GPR_U32(ctx, 31, 0x14309Cu);
    ctx->pc = 0x143098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143094u;
    // 0x143098: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x143094u, 0x14309Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14309Cu;
}

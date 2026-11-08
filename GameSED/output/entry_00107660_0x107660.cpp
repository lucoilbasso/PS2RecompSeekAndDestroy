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

// Function: entry_00107660
// Address: 0x107660 - 0x10766c
void entry_00107660_0x107660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107660_0x107660");
#endif

    ctx->pc = 0x107660u;

    // 0x107660: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x107660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107664: 0xc0416ee  jal         func_105BB8
    ctx->pc = 0x107664u;
    SET_GPR_U32(ctx, 31, 0x10766Cu);
    ctx->pc = 0x107668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107664u;
    // 0x107668: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105BB8u, 0x107664u, 0x10766Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10766Cu;
}

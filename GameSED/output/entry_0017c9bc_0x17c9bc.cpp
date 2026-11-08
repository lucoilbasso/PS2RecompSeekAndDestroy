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

// Function: entry_0017c9bc
// Address: 0x17c9bc - 0x17c9d0
void entry_0017c9bc_0x17c9bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c9bc_0x17c9bc");
#endif

    ctx->pc = 0x17c9bcu;

    // 0x17c9bc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x17c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17c9c0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x17c9c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c9c4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17c9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17c9c8: 0xc060fec  jal         func_183FB0
    ctx->pc = 0x17C9C8u;
    SET_GPR_U32(ctx, 31, 0x17C9D0u);
    ctx->pc = 0x17C9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C9C8u;
    // 0x17c9cc: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183FB0u, 0x17C9C8u, 0x17C9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C9D0u;
}

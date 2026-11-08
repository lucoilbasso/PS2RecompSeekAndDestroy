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

// Function: entry_0017c8b0
// Address: 0x17c8b0 - 0x17c8c4
void entry_0017c8b0_0x17c8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c8b0_0x17c8b0");
#endif

    switch (ctx->pc) {
        case 0x17c8b8u: goto label_17c8b8;
        default: break;
    }

    ctx->pc = 0x17c8b0u;

    // 0x17c8b0: 0xc060ebc  jal         func_183AF0
    ctx->pc = 0x17C8B0u;
    SET_GPR_U32(ctx, 31, 0x17C8B8u);
    ctx->pc = 0x17C8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C8B0u;
    // 0x17c8b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183AF0u, 0x17C8B0u, 0x17C8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C8B8u;
label_17c8b8:
    // 0x17c8b8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17c8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17c8bc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x17c8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x17c8c0: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x17c8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x17c8c4u;
}

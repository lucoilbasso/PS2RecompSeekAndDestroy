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

// Function: entry_0017fbd8
// Address: 0x17fbd8 - 0x17fbfc
void entry_0017fbd8_0x17fbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fbd8_0x17fbd8");
#endif

    switch (ctx->pc) {
        case 0x17fbe0u: goto label_17fbe0;
        default: break;
    }

    ctx->pc = 0x17fbd8u;

    // 0x17fbd8: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17FBD8u;
    SET_GPR_U32(ctx, 31, 0x17FBE0u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17FBD8u, 0x17FBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FBE0u;
label_17fbe0:
    // 0x17fbe0: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x17fbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x17fbe4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x17fbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x17fbe8: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x17fbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x17fbec: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x17fbecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17fbf0: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17FBF0u;
    {
        const bool branch_taken_0x17fbf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FBF0u;
        // 0x17fbf4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fbf0) {
            ctx->pc = 0x17FBFCu;
            return;
        }
    }
    ctx->pc = 0x17FBF8u;
    // 0x17fbf8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17fbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x17fbfcu;
}

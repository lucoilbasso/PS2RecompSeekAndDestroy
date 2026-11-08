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

// Function: entry_0017fd84
// Address: 0x17fd84 - 0x17fda8
void entry_0017fd84_0x17fd84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fd84_0x17fd84");
#endif

    switch (ctx->pc) {
        case 0x17fd8cu: goto label_17fd8c;
        default: break;
    }

    ctx->pc = 0x17fd84u;

    // 0x17fd84: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17FD84u;
    SET_GPR_U32(ctx, 31, 0x17FD8Cu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17FD84u, 0x17FD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FD8Cu;
label_17fd8c:
    // 0x17fd8c: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x17fd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x17fd90: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x17fd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x17fd94: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x17fd94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x17fd98: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x17fd98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17fd9c: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17FD9Cu;
    {
        const bool branch_taken_0x17fd9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD9Cu;
        // 0x17fda0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd9c) {
            ctx->pc = 0x17FDA8u;
            return;
        }
    }
    ctx->pc = 0x17FDA4u;
    // 0x17fda4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17fda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x17fda8u;
}

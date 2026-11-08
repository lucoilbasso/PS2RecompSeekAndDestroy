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

// Function: entry_0014ac08
// Address: 0x14ac08 - 0x14ac2c
void entry_0014ac08_0x14ac08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ac08_0x14ac08");
#endif

    switch (ctx->pc) {
        case 0x14ac10u: goto label_14ac10;
        default: break;
    }

    ctx->pc = 0x14ac08u;

    // 0x14ac08: 0xc068086  jal         func_1A0218
    ctx->pc = 0x14AC08u;
    SET_GPR_U32(ctx, 31, 0x14AC10u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x14AC08u, 0x14AC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC10u;
label_14ac10:
    // 0x14ac10: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14AC10u;
    {
        const bool branch_taken_0x14ac10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AC10u;
        // 0x14ac14: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ac10) {
            ctx->pc = 0x14AC2Cu;
            return;
        }
    }
    ctx->pc = 0x14AC18u;
    // 0x14ac18: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14ac18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14ac1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14ac1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac20: 0x24a56b90  addiu       $a1, $a1, 0x6B90
    ctx->pc = 0x14ac20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27536));
    // 0x14ac24: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14AC24u;
    SET_GPR_U32(ctx, 31, 0x14AC2Cu);
    ctx->pc = 0x14AC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AC24u;
    // 0x14ac28: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14AC24u, 0x14AC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC2Cu;
}

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

// Function: entry_0014ae0c
// Address: 0x14ae0c - 0x14ae40
void entry_0014ae0c_0x14ae0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ae0c_0x14ae0c");
#endif

    switch (ctx->pc) {
        case 0x14ae14u: goto label_14ae14;
        default: break;
    }

    ctx->pc = 0x14ae0cu;

    // 0x14ae0c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14AE0Cu;
    SET_GPR_U32(ctx, 31, 0x14AE14u);
    ctx->pc = 0x14AE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE0Cu;
    // 0x14ae10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14AE0Cu, 0x14AE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE14u;
label_14ae14:
    // 0x14ae14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14ae14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ae18: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x14ae18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae1c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x14ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x14ae20: 0x14440007  bne         $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14AE20u;
    {
        const bool branch_taken_0x14ae20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x14ae20) {
            ctx->pc = 0x14AE40u;
            return;
        }
    }
    ctx->pc = 0x14AE28u;
    // 0x14ae28: 0x8e02017c  lw          $v0, 0x17C($s0)
    ctx->pc = 0x14ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x14ae2c: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x14ae2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x14ae30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14ae30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14ae34: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14AE34u;
    {
        const bool branch_taken_0x14ae34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AE34u;
        // 0x14ae38: 0xae02017c  sw          $v0, 0x17C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ae34) {
            ctx->pc = 0x14AE88u;
            return;
        }
    }
    ctx->pc = 0x14AE3Cu;
    // 0x14ae3c: 0x0  nop
    ctx->pc = 0x14ae3cu;
    // NOP
    ctx->pc = 0x14ae40u;
}

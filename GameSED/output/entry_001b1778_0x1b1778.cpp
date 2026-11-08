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

// Function: entry_001b1778
// Address: 0x1b1778 - 0x1b17b4
void entry_001b1778_0x1b1778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1778_0x1b1778");
#endif

    switch (ctx->pc) {
        case 0x1b17a0u: goto label_1b17a0;
        case 0x1b17b0u: goto label_1b17b0;
        default: break;
    }

    ctx->pc = 0x1b1778u;

    // 0x1b1778: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b1778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b177c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1b177cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1b1780: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1b1780u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1b1784: 0x34840009  ori         $a0, $a0, 0x9
    ctx->pc = 0x1b1784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    // 0x1b1788: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b1788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b178c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1b178cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b1790: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b1790u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1794: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b1794u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1798: 0xc06df7e  jal         func_1B7DF8
    ctx->pc = 0x1B1798u;
    SET_GPR_U32(ctx, 31, 0x1B17A0u);
    ctx->pc = 0x1B179Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1798u;
    // 0x1b179c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7DF8u, 0x1B1798u, 0x1B17A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B17A0u;
label_1b17a0:
    // 0x1b17a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B17A0u;
    {
        const bool branch_taken_0x1b17a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B17A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B17A0u;
        // 0x1b17a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b17a0) {
            ctx->pc = 0x1B17B4u;
            return;
        }
    }
    ctx->pc = 0x1B17A8u;
    // 0x1b17a8: 0xc06c4a4  jal         func_1B1290
    ctx->pc = 0x1B17A8u;
    SET_GPR_U32(ctx, 31, 0x1B17B0u);
    ctx->pc = 0x1B17ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B17A8u;
    // 0x1b17ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1290u, 0x1B17A8u, 0x1B17B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B17B0u;
label_1b17b0:
    // 0x1b17b0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1b17b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->pc = 0x1b17b4u;
}

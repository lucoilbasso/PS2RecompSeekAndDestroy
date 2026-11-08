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

// Function: entry_0017fc88
// Address: 0x17fc88 - 0x17fcdc
void entry_0017fc88_0x17fc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fc88_0x17fc88");
#endif

    switch (ctx->pc) {
        case 0x17fcacu: goto label_17fcac;
        default: break;
    }

    ctx->pc = 0x17fc88u;

label_17fc88:
    // 0x17fc88: 0x96300004  lhu         $s0, 0x4($s1)
    ctx->pc = 0x17fc88u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17fc8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17fc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc90: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x17fc90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc94: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x17fc94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17fc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc9c: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x17fc9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fca0: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x17fca0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fca4: 0xc05ffd0  jal         func_17FF40
    ctx->pc = 0x17FCA4u;
    SET_GPR_U32(ctx, 31, 0x17FCACu);
    ctx->pc = 0x17FCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FCA4u;
    // 0x17fca8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FF40u, 0x17FCA4u, 0x17FCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FCACu;
label_17fcac:
    // 0x17fcac: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x17fcacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x17fcb0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17fcb4: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x17fcb4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x17fcb8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x17fcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17fcbc: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x17fcbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x17fcc0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17fcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17fcc4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x17fcc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x17fcc8: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x17fcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x17fccc: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x17fcccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x17fcd0: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x17fcd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x17fcd4: 0x1660ffec  bnez        $s3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x17FCD4u;
    {
        const bool branch_taken_0x17fcd4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FCD4u;
        // 0x17fcd8: 0x290a021  addu        $s4, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fcd4) {
            ctx->pc = 0x17FC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fc88;
        }
    }
    ctx->pc = 0x17FCDCu;
}

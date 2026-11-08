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

// Function: Finish__6WcPost
// Address: 0x196128 - 0x1961b8
void Finish__6WcPost_0x196128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__6WcPost_0x196128");
#endif

    switch (ctx->pc) {
        case 0x196150u: goto label_196150;
        case 0x1961acu: goto label_1961ac;
        default: break;
    }

    ctx->pc = 0x196128u;

    // 0x196128: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19612c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19612cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196130: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x196134: 0x8c8501b0  lw          $a1, 0x1B0($a0)
    ctx->pc = 0x196134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x196138: 0x8ca301b0  lw          $v1, 0x1B0($a1)
    ctx->pc = 0x196138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x19613c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x19613Cu;
    {
        const bool branch_taken_0x19613c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x196140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19613Cu;
        // 0x196140: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19613c) {
            ctx->pc = 0x1961A4u;
            goto label_1961a4;
        }
    }
    ctx->pc = 0x196144u;
    // 0x196144: 0x24a701b4  addiu       $a3, $a1, 0x1B4
    ctx->pc = 0x196144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 436));
    // 0x196148: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x196148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19614c: 0x0  nop
    ctx->pc = 0x19614cu;
    // NOP
label_196150:
    // 0x196150: 0x54460011  bnel        $v0, $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x196150u;
    {
        const bool branch_taken_0x196150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x196150) {
            ctx->pc = 0x196154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196150u;
            // 0x196154: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196198u;
            goto label_196198;
        }
    }
    ctx->pc = 0x196158u;
    // 0x196158: 0x15000005  bnez        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x196158u;
    {
        const bool branch_taken_0x196158 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x19615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196158u;
        // 0x19615c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196158) {
            ctx->pc = 0x196170u;
            goto label_196170;
        }
    }
    ctx->pc = 0x196160u;
    // 0x196160: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x196160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x196164: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x196164u;
    {
        const bool branch_taken_0x196164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196164u;
        // 0x196168: 0xaca201b0  sw          $v0, 0x1B0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196164) {
            ctx->pc = 0x196178u;
            goto label_196178;
        }
    }
    ctx->pc = 0x19616Cu;
    // 0x19616c: 0x0  nop
    ctx->pc = 0x19616cu;
    // NOP
label_196170:
    // 0x196170: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x196170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x196174: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x196174u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
label_196178:
    // 0x196178: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x196178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19617c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x19617cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x196180: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x196180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x196184: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x196184u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x196188: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x196188u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x19618c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x19618cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x196190: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x196190u;
    {
        const bool branch_taken_0x196190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196190u;
        // 0x196194: 0xace60008  sw          $a2, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196190) {
            ctx->pc = 0x1961A4u;
            goto label_1961a4;
        }
    }
    ctx->pc = 0x196198u;
label_196198:
    // 0x196198: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x196198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19619c: 0x5460ffec  bnel        $v1, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x19619Cu;
    {
        const bool branch_taken_0x19619c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19619c) {
            ctx->pc = 0x1961A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19619Cu;
            // 0x1961a0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196150;
        }
    }
    ctx->pc = 0x1961A4u;
label_1961a4:
    // 0x1961a4: 0xc064e8e  jal         func_193A38
    ctx->pc = 0x1961A4u;
    SET_GPR_U32(ctx, 31, 0x1961ACu);
    ctx->pc = 0x193A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193A38u, 0x1961A4u, 0x1961ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1961ACu;
label_1961ac:
    // 0x1961ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1961acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1961b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1961B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1961B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961B0u;
        // 0x1961b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1961B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1961B8u;
}

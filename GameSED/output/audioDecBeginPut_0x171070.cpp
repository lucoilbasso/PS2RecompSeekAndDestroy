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

// Function: audioDecBeginPut
// Address: 0x171070 - 0x171128
void audioDecBeginPut_0x171070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("audioDecBeginPut_0x171070");
#endif

    ctx->pc = 0x171070u;

    // 0x171070: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x171070u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171074: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x171074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x171078: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x171078u;
    {
        const bool branch_taken_0x171078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x171078) {
            ctx->pc = 0x17107Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171078u;
            // 0x17107c: 0x8d22003c  lw          $v0, 0x3C($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1710B8u;
            goto label_1710b8;
        }
    }
    ctx->pc = 0x171080u;
    // 0x171080: 0x8d22002c  lw          $v0, 0x2C($t1)
    ctx->pc = 0x171080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
    // 0x171084: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x171084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x171088: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x171088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x17108c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17108cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x171090: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x171090u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x171094: 0x8d23002c  lw          $v1, 0x2C($t1)
    ctx->pc = 0x171094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
    // 0x171098: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x171098u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17109c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x17109cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1710a0: 0x8d220030  lw          $v0, 0x30($t1)
    ctx->pc = 0x1710a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x1710a4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1710a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1710a8: 0x8d23003c  lw          $v1, 0x3C($t1)
    ctx->pc = 0x1710a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x1710ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1710ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1710B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1710ACu;
        // 0x1710b0: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1710ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1710B4u;
    // 0x1710b4: 0x0  nop
    ctx->pc = 0x1710b4u;
    // NOP
label_1710b8:
    // 0x1710b8: 0x8d2a0034  lw          $t2, 0x34($t1)
    ctx->pc = 0x1710b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
    // 0x1710bc: 0x8d240038  lw          $a0, 0x38($t1)
    ctx->pc = 0x1710bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 56)));
    // 0x1710c0: 0x4a1823  subu        $v1, $v0, $t2
    ctx->pc = 0x1710c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1710c4: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x1710c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1710c8: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1710c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1710cc: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1710CCu;
    {
        const bool branch_taken_0x1710cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1710D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1710CCu;
        // 0x1710d0: 0x8d220030  lw          $v0, 0x30($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1710cc) {
            ctx->pc = 0x1710F0u;
            goto label_1710f0;
        }
    }
    ctx->pc = 0x1710D4u;
    // 0x1710d4: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1710d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1710d8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1710d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1710dc: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1710dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1710e0: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1710e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1710e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1710E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1710E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1710E4u;
        // 0x1710e8: 0xad000000  sw          $zero, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1710E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1710ECu;
    // 0x1710ec: 0x0  nop
    ctx->pc = 0x1710ecu;
    // NOP
label_1710f0:
    // 0x1710f0: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1710f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1710f4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1710f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1710f8: 0x8d220034  lw          $v0, 0x34($t1)
    ctx->pc = 0x1710f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
    // 0x1710fc: 0x8d23003c  lw          $v1, 0x3C($t1)
    ctx->pc = 0x1710fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x171100: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x171100u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x171104: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x171104u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x171108: 0x8d220030  lw          $v0, 0x30($t1)
    ctx->pc = 0x171108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x17110c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x17110cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x171110: 0x8d230034  lw          $v1, 0x34($t1)
    ctx->pc = 0x171110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
    // 0x171114: 0x8d22003c  lw          $v0, 0x3C($t1)
    ctx->pc = 0x171114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x171118: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x171118u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17111c: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x17111cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x171120: 0x3e00008  jr          $ra
    ctx->pc = 0x171120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171120u;
        // 0x171124: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171128u;
}

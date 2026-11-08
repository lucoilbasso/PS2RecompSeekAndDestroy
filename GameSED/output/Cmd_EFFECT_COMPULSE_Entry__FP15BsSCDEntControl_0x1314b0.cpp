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

// Function: Cmd_EFFECT_COMPULSE_Entry__FP15BsSCDEntControl
// Address: 0x1314b0 - 0x131538
void Cmd_EFFECT_COMPULSE_Entry__FP15BsSCDEntControl_0x1314b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_EFFECT_COMPULSE_Entry__FP15BsSCDEntControl_0x1314b0");
#endif

    switch (ctx->pc) {
        case 0x131508u: goto label_131508;
        case 0x131518u: goto label_131518;
        default: break;
    }

    ctx->pc = 0x1314b0u;

    // 0x1314b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1314b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1314b4: 0x8f858d10  lw          $a1, -0x72F0($gp)
    ctx->pc = 0x1314b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1314b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1314b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1314bc: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1314bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1314c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1314c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1314c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1314c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1314c8: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x1314c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1314cc: 0x8ca40154  lw          $a0, 0x154($a1)
    ctx->pc = 0x1314ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 340)));
    // 0x1314d0: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x1314d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1314d4: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x1314d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x1314d8: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x1314d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1314dc: 0x8c6402f8  lw          $a0, 0x2F8($v1)
    ctx->pc = 0x1314dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 760)));
    // 0x1314e0: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1314E0u;
    {
        const bool branch_taken_0x1314e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1314E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1314E0u;
        // 0x1314e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1314e0) {
            ctx->pc = 0x131528u;
            goto label_131528;
        }
    }
    ctx->pc = 0x1314E8u;
    // 0x1314e8: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1314E8u;
    {
        const bool branch_taken_0x1314e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1314ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1314E8u;
        // 0x1314ec: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1314e8) {
            ctx->pc = 0x13152Cu;
            goto label_13152c;
        }
    }
    ctx->pc = 0x1314F0u;
    // 0x1314f0: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x1314f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1314f4: 0x8c900150  lw          $s0, 0x150($a0)
    ctx->pc = 0x1314f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1314f8: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1314F8u;
    {
        const bool branch_taken_0x1314f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1314FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1314F8u;
        // 0x1314fc: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1314f8) {
            ctx->pc = 0x131524u;
            goto label_131524;
        }
    }
    ctx->pc = 0x131500u;
    // 0x131500: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x131500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x131504: 0x0  nop
    ctx->pc = 0x131504u;
    // NOP
label_131508:
    // 0x131508: 0x56220004  bnel        $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x131508u;
    {
        const bool branch_taken_0x131508 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x131508) {
            ctx->pc = 0x13150Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131508u;
            // 0x13150c: 0x8e100060  lw          $s0, 0x60($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13151Cu;
            goto label_13151c;
        }
    }
    ctx->pc = 0x131510u;
    // 0x131510: 0xc04c6c6  jal         func_131B18
    ctx->pc = 0x131510u;
    SET_GPR_U32(ctx, 31, 0x131518u);
    ctx->pc = 0x131514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131510u;
    // 0x131514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B18u, 0x131510u, 0x131518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131518u;
label_131518:
    // 0x131518: 0x8e100060  lw          $s0, 0x60($s0)
    ctx->pc = 0x131518u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_13151c:
    // 0x13151c: 0x5600fffa  bnel        $s0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13151Cu;
    {
        const bool branch_taken_0x13151c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13151c) {
            ctx->pc = 0x131520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13151Cu;
            // 0x131520: 0x8e020110  lw          $v0, 0x110($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131508;
        }
    }
    ctx->pc = 0x131524u;
label_131524:
    // 0x131524: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x131524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_131528:
    // 0x131528: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x131528u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13152c:
    // 0x13152c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13152cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131530: 0x3e00008  jr          $ra
    ctx->pc = 0x131530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131530u;
        // 0x131534: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131538u;
}

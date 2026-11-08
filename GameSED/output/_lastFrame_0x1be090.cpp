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

// Function: _lastFrame
// Address: 0x1be090 - 0x1be10c
void _lastFrame_0x1be090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_lastFrame_0x1be090");
#endif

    switch (ctx->pc) {
        case 0x1be0b8u: goto label_1be0b8;
        case 0x1be0e0u: goto label_1be0e0;
        case 0x1be0f8u: goto label_1be0f8;
        default: break;
    }

    ctx->pc = 0x1be090u;

    // 0x1be090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1be090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1be094: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1be094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1be098: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1be098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1be09c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1be09cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be0a0: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x1be0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1be0a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BE0A4u;
    {
        const bool branch_taken_0x1be0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0A4u;
        // 0x1be0a8: 0x8e060118  lw          $a2, 0x118($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be0a4) {
            ctx->pc = 0x1BE0C0u;
            goto label_1be0c0;
        }
    }
    ctx->pc = 0x1BE0ACu;
    // 0x1be0ac: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1be0acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1be0b0: 0xc06f8a0  jal         func_1BE280
    ctx->pc = 0x1BE0B0u;
    SET_GPR_U32(ctx, 31, 0x1BE0B8u);
    ctx->pc = 0x1BE0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE0B0u;
    // 0x1be0b4: 0x24a5b308  addiu       $a1, $a1, -0x4CF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE280u, 0x1BE0B0u, 0x1BE0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE0B8u;
label_1be0b8:
    // 0x1be0b8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1BE0B8u;
    {
        const bool branch_taken_0x1be0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0B8u;
        // 0x1be0bc: 0xae000120  sw          $zero, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be0b8) {
            ctx->pc = 0x1BE0FCu;
            goto label_1be0fc;
        }
    }
    ctx->pc = 0x1BE0C0u;
label_1be0c0:
    // 0x1be0c0: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1be0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1be0c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1be0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1be0c8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE0C8u;
    {
        const bool branch_taken_0x1be0c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BE0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0C8u;
        // 0x1be0cc: 0x24c7ffff  addiu       $a3, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be0c8) {
            ctx->pc = 0x1BE0E8u;
            goto label_1be0e8;
        }
    }
    ctx->pc = 0x1BE0D0u;
    // 0x1be0d0: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x1be0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x1be0d4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1be0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1be0d8: 0xc070cec  jal         func_1C33B0
    ctx->pc = 0x1BE0D8u;
    SET_GPR_U32(ctx, 31, 0x1BE0E0u);
    ctx->pc = 0x1BE0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE0D8u;
    // 0x1be0dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C33B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C33B0u, 0x1BE0D8u, 0x1BE0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE0E0u;
label_1be0e0:
    // 0x1be0e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BE0E0u;
    {
        const bool branch_taken_0x1be0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0E0u;
        // 0x1be0e4: 0xae000120  sw          $zero, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be0e0) {
            ctx->pc = 0x1BE0FCu;
            goto label_1be0fc;
        }
    }
    ctx->pc = 0x1BE0E8u;
label_1be0e8:
    // 0x1be0e8: 0x8e0501cc  lw          $a1, 0x1CC($s0)
    ctx->pc = 0x1be0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x1be0ec: 0x8e0601dc  lw          $a2, 0x1DC($s0)
    ctx->pc = 0x1be0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 476)));
    // 0x1be0f0: 0xc070d30  jal         func_1C34C0
    ctx->pc = 0x1BE0F0u;
    SET_GPR_U32(ctx, 31, 0x1BE0F8u);
    ctx->pc = 0x1BE0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE0F0u;
    // 0x1be0f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C34C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C34C0u, 0x1BE0F0u, 0x1BE0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE0F8u;
label_1be0f8:
    // 0x1be0f8: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x1be0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
label_1be0fc:
    // 0x1be0fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1be0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be104: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE104u;
        // 0x1be108: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE10Cu;
}

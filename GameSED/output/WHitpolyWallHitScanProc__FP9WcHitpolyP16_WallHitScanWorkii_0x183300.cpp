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

// Function: WHitpolyWallHitScanProc__FP9WcHitpolyP16_WallHitScanWorkii
// Address: 0x183300 - 0x1833c4
void WHitpolyWallHitScanProc__FP9WcHitpolyP16_WallHitScanWorkii_0x183300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WHitpolyWallHitScanProc__FP9WcHitpolyP16_WallHitScanWorkii_0x183300");
#endif

    switch (ctx->pc) {
        case 0x183374u: goto label_183374;
        case 0x183388u: goto label_183388;
        default: break;
    }

    ctx->pc = 0x183300u;

    // 0x183300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x183300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x183304: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x183304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x183308: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x183308u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18330c: 0x2e420080  sltiu       $v0, $s2, 0x80
    ctx->pc = 0x18330cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x183310: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x183310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x183314: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x183314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x183318: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x183318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18331c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x18331cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x183320: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x183320u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183324: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x183324u;
    {
        const bool branch_taken_0x183324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183324u;
        // 0x183328: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183324) {
            ctx->pc = 0x1833A8u;
            goto label_1833a8;
        }
    }
    ctx->pc = 0x18332Cu;
    // 0x18332c: 0x620001e  bltz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x18332Cu;
    {
        const bool branch_taken_0x18332c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x183330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18332Cu;
        // 0x183330: 0x2a220080  slti        $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18332c) {
            ctx->pc = 0x1833A8u;
            goto label_1833a8;
        }
    }
    ctx->pc = 0x183334u;
    // 0x183334: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x183334u;
    {
        const bool branch_taken_0x183334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183334u;
        // 0x183338: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183334) {
            ctx->pc = 0x1833ACu;
            goto label_1833ac;
        }
    }
    ctx->pc = 0x18333Cu;
    // 0x18333c: 0x1219c0  sll         $v1, $s2, 7
    ctx->pc = 0x18333cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x183340: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x183340u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x183344: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x183344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x183348: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x183348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18334c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x18334cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x183350: 0x94630038  lhu         $v1, 0x38($v1)
    ctx->pc = 0x183350u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x183354: 0x10640015  beq         $v1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x183354u;
    {
        const bool branch_taken_0x183354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x183358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183354u;
        // 0x183358: 0x31980  sll         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183354) {
            ctx->pc = 0x1833ACu;
            goto label_1833ac;
        }
    }
    ctx->pc = 0x18335Cu;
    // 0x18335c: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x18335cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x183360: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x183360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x183364: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x183364u;
    {
        const bool branch_taken_0x183364 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x183368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183364u;
        // 0x183368: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183364) {
            ctx->pc = 0x183380u;
            goto label_183380;
        }
    }
    ctx->pc = 0x18336Cu;
    // 0x18336c: 0xc0606e8  jal         func_181BA0
    ctx->pc = 0x18336Cu;
    SET_GPR_U32(ctx, 31, 0x183374u);
    ctx->pc = 0x183370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18336Cu;
    // 0x183370: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181BA0u, 0x18336Cu, 0x183374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183374u;
label_183374:
    // 0x183374: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x183374u;
    {
        const bool branch_taken_0x183374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183374) {
            ctx->pc = 0x183388u;
            goto label_183388;
        }
    }
    ctx->pc = 0x18337Cu;
    // 0x18337c: 0x0  nop
    ctx->pc = 0x18337cu;
    // NOP
label_183380:
    // 0x183380: 0xc060650  jal         func_181940
    ctx->pc = 0x183380u;
    SET_GPR_U32(ctx, 31, 0x183388u);
    ctx->pc = 0x183384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183380u;
    // 0x183384: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181940u, 0x183380u, 0x183388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183388u;
label_183388:
    // 0x183388: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x183388u;
    {
        const bool branch_taken_0x183388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183388u;
        // 0x18338c: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183388) {
            ctx->pc = 0x1833A8u;
            goto label_1833a8;
        }
    }
    ctx->pc = 0x183390u;
    // 0x183390: 0xae120054  sw          $s2, 0x54($s0)
    ctx->pc = 0x183390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 18));
    // 0x183394: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x183394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x183398: 0xae110050  sw          $s1, 0x50($s0)
    ctx->pc = 0x183398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 17));
    // 0x18339c: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x18339cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x1833a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1833A0u;
    {
        const bool branch_taken_0x1833a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1833A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1833A0u;
        // 0x1833a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1833a0) {
            ctx->pc = 0x1833ACu;
            goto label_1833ac;
        }
    }
    ctx->pc = 0x1833A8u;
label_1833a8:
    // 0x1833a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1833a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1833ac:
    // 0x1833ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1833acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1833b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1833b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1833b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1833b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1833b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1833b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1833bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1833BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1833C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1833BCu;
        // 0x1833c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1833BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1833C4u;
}

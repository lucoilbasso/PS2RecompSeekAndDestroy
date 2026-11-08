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

// Function: Finish__5WcPad
// Address: 0x177498 - 0x177544
void Finish__5WcPad_0x177498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__5WcPad_0x177498");
#endif

    switch (ctx->pc) {
        case 0x1774b4u: goto label_1774b4;
        case 0x1774c0u: goto label_1774c0;
        case 0x1774d8u: goto label_1774d8;
        case 0x177524u: goto label_177524;
        case 0x17752cu: goto label_17752c;
        case 0x177534u: goto label_177534;
        default: break;
    }

    ctx->pc = 0x177498u;

    // 0x177498: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x177498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17749c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17749cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1774a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1774a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1774a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1774a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1774a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1774a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1774ac: 0xc06e390  jal         func_1B8E40
    ctx->pc = 0x1774ACu;
    SET_GPR_U32(ctx, 31, 0x1774B4u);
    ctx->pc = 0x1774B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1774ACu;
    // 0x1774b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8E40u, 0x1774ACu, 0x1774B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1774B4u;
label_1774b4:
    // 0x1774b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1774b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1774b8: 0xc06e390  jal         func_1B8E40
    ctx->pc = 0x1774B8u;
    SET_GPR_U32(ctx, 31, 0x1774C0u);
    ctx->pc = 0x1774BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1774B8u;
    // 0x1774bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8E40u, 0x1774B8u, 0x1774C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1774C0u;
label_1774c0:
    // 0x1774c0: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x1774c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1774c4: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1774c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1774c8: 0x24630158  addiu       $v1, $v1, 0x158
    ctx->pc = 0x1774c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 344));
    // 0x1774cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1774ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1774d0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1774D0u;
    {
        const bool branch_taken_0x1774d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1774D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1774D0u;
        // 0x1774d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1774d0) {
            ctx->pc = 0x177518u;
            goto label_177518;
        }
    }
    ctx->pc = 0x1774D8u;
label_1774d8:
    // 0x1774d8: 0x54440009  bnel        $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1774D8u;
    {
        const bool branch_taken_0x1774d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1774d8) {
            ctx->pc = 0x1774DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1774D8u;
            // 0x1774dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177500u;
            goto label_177500;
        }
    }
    ctx->pc = 0x1774E0u;
    // 0x1774e0: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1774E0u;
    {
        const bool branch_taken_0x1774e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1774E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1774E0u;
        // 0x1774e4: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1774e0) {
            ctx->pc = 0x1774F0u;
            goto label_1774f0;
        }
    }
    ctx->pc = 0x1774E8u;
    // 0x1774e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1774E8u;
    {
        const bool branch_taken_0x1774e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1774ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1774E8u;
        // 0x1774ec: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1774e8) {
            ctx->pc = 0x1774F4u;
            goto label_1774f4;
        }
    }
    ctx->pc = 0x1774F0u;
label_1774f0:
    // 0x1774f0: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x1774f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_1774f4:
    // 0x1774f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1774F4u;
    {
        const bool branch_taken_0x1774f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1774F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1774F4u;
        // 0x1774f8: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1774f4) {
            ctx->pc = 0x177518u;
            goto label_177518;
        }
    }
    ctx->pc = 0x1774FCu;
    // 0x1774fc: 0x0  nop
    ctx->pc = 0x1774fcu;
    // NOP
label_177500:
    // 0x177500: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x177500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x177504: 0x0  nop
    ctx->pc = 0x177504u;
    // NOP
    // 0x177508: 0x0  nop
    ctx->pc = 0x177508u;
    // NOP
    // 0x17750c: 0x0  nop
    ctx->pc = 0x17750cu;
    // NOP
    // 0x177510: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x177510u;
    {
        const bool branch_taken_0x177510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177510) {
            ctx->pc = 0x1774D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1774d8;
        }
    }
    ctx->pc = 0x177518u;
label_177518:
    // 0x177518: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17751c: 0xc06866c  jal         func_1A19B0
    ctx->pc = 0x17751Cu;
    SET_GPR_U32(ctx, 31, 0x177524u);
    ctx->pc = 0x177520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17751Cu;
    // 0x177520: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A19B0u, 0x17751Cu, 0x177524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177524u;
label_177524:
    // 0x177524: 0xc068364  jal         func_1A0D90
    ctx->pc = 0x177524u;
    SET_GPR_U32(ctx, 31, 0x17752Cu);
    ctx->pc = 0x177528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177524u;
    // 0x177528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D90u, 0x177524u, 0x17752Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17752Cu;
label_17752c:
    // 0x17752c: 0xc068396  jal         func_1A0E58
    ctx->pc = 0x17752Cu;
    SET_GPR_U32(ctx, 31, 0x177534u);
    ctx->pc = 0x177530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17752Cu;
    // 0x177530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E58u, 0x17752Cu, 0x177534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177534u;
label_177534:
    // 0x177534: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x177534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177538: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x177538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17753c: 0x3e00008  jr          $ra
    ctx->pc = 0x17753Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17753Cu;
        // 0x177540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17753Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177544u;
}

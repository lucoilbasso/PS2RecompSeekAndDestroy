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

// Function: Cmd_DOWN_LOAD_TANK_PARTS_Entry__FP15BsSCDEntControl
// Address: 0x119908 - 0x1199c0
void Cmd_DOWN_LOAD_TANK_PARTS_Entry__FP15BsSCDEntControl_0x119908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DOWN_LOAD_TANK_PARTS_Entry__FP15BsSCDEntControl_0x119908");
#endif

    switch (ctx->pc) {
        case 0x119940u: goto label_119940;
        case 0x11995cu: goto label_11995c;
        case 0x119968u: goto label_119968;
        case 0x119988u: goto label_119988;
        default: break;
    }

    ctx->pc = 0x119908u;

    // 0x119908: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x119908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11990c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11990cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119910: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x119910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119914: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x119914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x119918: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x119918u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x11991c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11991cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x119920: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x119920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x119924: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x119924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x119928: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x119928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11992c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11992cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119930: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x119930u;
    {
        const bool branch_taken_0x119930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x119934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119930u;
        // 0x119934: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119930) {
            ctx->pc = 0x11994Cu;
            goto label_11994c;
        }
    }
    ctx->pc = 0x119938u;
    // 0x119938: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x119938u;
    SET_GPR_U32(ctx, 31, 0x119940u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x119938u, 0x119940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119940u;
label_119940:
    // 0x119940: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x119940u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119944: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x119944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x119948: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x119948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_11994c:
    // 0x11994c: 0x10520004  beq         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x11994Cu;
    {
        const bool branch_taken_0x11994c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x119950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11994Cu;
        // 0x119950: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11994c) {
            ctx->pc = 0x119960u;
            goto label_119960;
        }
    }
    ctx->pc = 0x119954u;
    // 0x119954: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x119954u;
    SET_GPR_U32(ctx, 31, 0x11995Cu);
    ctx->pc = 0x119958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119954u;
    // 0x119958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x119954u, 0x11995Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11995Cu;
label_11995c:
    // 0x11995c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11995cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119960:
    // 0x119960: 0xc041794  jal         func_105E50
    ctx->pc = 0x119960u;
    SET_GPR_U32(ctx, 31, 0x119968u);
    ctx->pc = 0x119964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119960u;
    // 0x119964: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105E50u, 0x119960u, 0x119968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119968u;
label_119968:
    // 0x119968: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x119968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x11996c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11996cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119970: 0x240224d0  addiu       $v0, $zero, 0x24D0
    ctx->pc = 0x119970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x119974: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x119974u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x119978: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x119978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x11997c: 0x2463d530  addiu       $v1, $v1, -0x2AD0
    ctx->pc = 0x11997cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956336));
    // 0x119980: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x119980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x119984: 0x0  nop
    ctx->pc = 0x119984u;
    // NOP
label_119988:
    // 0x119988: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x119988u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11998c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x11998cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x119990: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x119990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x119994: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x119994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x119998: 0x0  nop
    ctx->pc = 0x119998u;
    // NOP
    // 0x11999c: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11999Cu;
    {
        const bool branch_taken_0x11999c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1199A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11999Cu;
        // 0x1199a0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11999c) {
            ctx->pc = 0x119988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119988;
        }
    }
    ctx->pc = 0x1199A4u;
    // 0x1199a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1199a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1199a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1199a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1199ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1199acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1199b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1199b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1199b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1199b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1199b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1199B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1199BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199B8u;
        // 0x1199bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1199B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1199C0u;
}

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

// Function: VColorCtrlSetup__8WcObject
// Address: 0x1dff18 - 0x1dffb0
void VColorCtrlSetup__8WcObject_0x1dff18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("VColorCtrlSetup__8WcObject_0x1dff18");
#endif

    switch (ctx->pc) {
        case 0x1dff54u: goto label_1dff54;
        case 0x1dff74u: goto label_1dff74;
        default: break;
    }

    ctx->pc = 0x1dff18u;

    // 0x1dff18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dff18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dff1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dff1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dff20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dff20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dff24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dff28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dff28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dff2c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1dff2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1dff30: 0x8e2201ac  lw          $v0, 0x1AC($s1)
    ctx->pc = 0x1dff30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
    // 0x1dff34: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DFF34u;
    {
        const bool branch_taken_0x1dff34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFF34u;
        // 0x1dff38: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dff34) {
            ctx->pc = 0x1DFF98u;
            goto label_1dff98;
        }
    }
    ctx->pc = 0x1DFF3Cu;
    // 0x1dff3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1dff3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff40: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DFF40u;
    {
        const bool branch_taken_0x1dff40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFF40u;
        // 0x1dff44: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dff40) {
            ctx->pc = 0x1DFF4Cu;
            goto label_1dff4c;
        }
    }
    ctx->pc = 0x1DFF48u;
    // 0x1dff48: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1dff48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1dff4c:
    // 0x1dff4c: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1DFF4Cu;
    SET_GPR_U32(ctx, 31, 0x1DFF54u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1DFF4Cu, 0x1DFF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFF54u;
label_1dff54:
    // 0x1dff54: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1dff54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1dff58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dff58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dff5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff60: 0x24a582d0  addiu       $a1, $a1, -0x7D30
    ctx->pc = 0x1dff60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935248));
    // 0x1dff64: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DFF64u;
    {
        const bool branch_taken_0x1dff64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFF64u;
        // 0x1dff68: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dff64) {
            ctx->pc = 0x1DFF74u;
            goto label_1dff74;
        }
    }
    ctx->pc = 0x1DFF6Cu;
    // 0x1dff6c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1DFF6Cu;
    SET_GPR_U32(ctx, 31, 0x1DFF74u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1DFF6Cu, 0x1DFF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFF74u;
label_1dff74:
    // 0x1dff74: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1dff74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1dff78: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1dff78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1dff7c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1dff7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1dff80: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1dff80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1dff84: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1dff84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1dff88: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1dff88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1dff8c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1dff8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1dff90: 0xae3001ac  sw          $s0, 0x1AC($s1)
    ctx->pc = 0x1dff90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 16));
    // 0x1dff94: 0x8e2201ac  lw          $v0, 0x1AC($s1)
    ctx->pc = 0x1dff94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
label_1dff98:
    // 0x1dff98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dff98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dff9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dff9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dffa0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dffa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dffa4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dffa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dffa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFFA8u;
        // 0x1dffac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFFB0u;
}

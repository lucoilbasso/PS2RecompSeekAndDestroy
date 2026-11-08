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

// Function: Cmd_STAGE_CIRCLE_Entry__FP15BsSCDEntControl
// Address: 0x148d10 - 0x148de4
void Cmd_STAGE_CIRCLE_Entry__FP15BsSCDEntControl_0x148d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_STAGE_CIRCLE_Entry__FP15BsSCDEntControl_0x148d10");
#endif

    switch (ctx->pc) {
        case 0x148d44u: goto label_148d44;
        case 0x148d60u: goto label_148d60;
        case 0x148d74u: goto label_148d74;
        case 0x148d88u: goto label_148d88;
        case 0x148d94u: goto label_148d94;
        case 0x148da0u: goto label_148da0;
        default: break;
    }

    ctx->pc = 0x148d10u;

    // 0x148d10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x148d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x148d14: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x148d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x148d18: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x148d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x148d1c: 0x3c110026  lui         $s1, 0x26
    ctx->pc = 0x148d1cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)38 << 16));
    // 0x148d20: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x148d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x148d24: 0x263126c0  addiu       $s1, $s1, 0x26C0
    ctx->pc = 0x148d24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 9920));
    // 0x148d28: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x148d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x148d2c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x148d2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148d30: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x148d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x148d34: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x148d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x148d38: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x148d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x148d3c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x148D3Cu;
    SET_GPR_U32(ctx, 31, 0x148D44u);
    ctx->pc = 0x148D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148D3Cu;
    // 0x148d40: 0x8c530048  lw          $s3, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x148D3Cu, 0x148D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D44u;
label_148d44:
    // 0x148d44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x148d44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148d48: 0x321200ff  andi        $s2, $s0, 0xFF
    ctx->pc = 0x148d48u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x148d4c: 0x108203  sra         $s0, $s0, 8
    ctx->pc = 0x148d4cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 8));
    // 0x148d50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x148d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148d54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x148d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148d58: 0xc051436  jal         func_1450D8
    ctx->pc = 0x148D58u;
    SET_GPR_U32(ctx, 31, 0x148D60u);
    ctx->pc = 0x148D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148D58u;
    // 0x148d5c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1450D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1450D8u, 0x148D58u, 0x148D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D60u;
label_148d60:
    // 0x148d60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x148d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148d64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x148d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148d68: 0x26460001  addiu       $a2, $s2, 0x1
    ctx->pc = 0x148d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x148d6c: 0xc051436  jal         func_1450D8
    ctx->pc = 0x148D6Cu;
    SET_GPR_U32(ctx, 31, 0x148D74u);
    ctx->pc = 0x148D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148D6Cu;
    // 0x148d70: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1450D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1450D8u, 0x148D6Cu, 0x148D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D74u;
label_148d74:
    // 0x148d74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x148d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148d78: 0x26460002  addiu       $a2, $s2, 0x2
    ctx->pc = 0x148d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x148d7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x148d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148d80: 0xc051436  jal         func_1450D8
    ctx->pc = 0x148D80u;
    SET_GPR_U32(ctx, 31, 0x148D88u);
    ctx->pc = 0x148D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148D80u;
    // 0x148d84: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1450D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1450D8u, 0x148D80u, 0x148D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D88u;
label_148d88:
    // 0x148d88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x148d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148d8c: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x148D8Cu;
    SET_GPR_U32(ctx, 31, 0x148D94u);
    ctx->pc = 0x148D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148D8Cu;
    // 0x148d90: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x148D8Cu, 0x148D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D94u;
label_148d94:
    // 0x148d94: 0xae2204d0  sw          $v0, 0x4D0($s1)
    ctx->pc = 0x148d94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1232), GPR_U32(ctx, 2));
    // 0x148d98: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x148D98u;
    SET_GPR_U32(ctx, 31, 0x148DA0u);
    ctx->pc = 0x148D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148D98u;
    // 0x148d9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x148D98u, 0x148DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148DA0u;
label_148da0:
    // 0x148da0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x148da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148da4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x148da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148da8: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x148da8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x148dac: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x148dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x148db0: 0xae2204d4  sw          $v0, 0x4D4($s1)
    ctx->pc = 0x148db0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1236), GPR_U32(ctx, 2));
    // 0x148db4: 0xae2304fc  sw          $v1, 0x4FC($s1)
    ctx->pc = 0x148db4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1276), GPR_U32(ctx, 3));
    // 0x148db8: 0xae2404f0  sw          $a0, 0x4F0($s1)
    ctx->pc = 0x148db8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1264), GPR_U32(ctx, 4));
    // 0x148dbc: 0xae2504f4  sw          $a1, 0x4F4($s1)
    ctx->pc = 0x148dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1268), GPR_U32(ctx, 5));
    // 0x148dc0: 0xae2604f8  sw          $a2, 0x4F8($s1)
    ctx->pc = 0x148dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1272), GPR_U32(ctx, 6));
    // 0x148dc4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x148dc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148dc8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x148dc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x148dcc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x148dccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148dd0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x148dd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148dd4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x148dd4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x148dd8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x148dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x148ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x148DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148DDCu;
        // 0x148de0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148DE4u;
}

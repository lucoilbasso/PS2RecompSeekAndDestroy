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

// Function: ThinkSetup__12ApRemoteWorkP15BsSCDEntControl
// Address: 0x106a08 - 0x106ab4
void ThinkSetup__12ApRemoteWorkP15BsSCDEntControl_0x106a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ThinkSetup__12ApRemoteWorkP15BsSCDEntControl_0x106a08");
#endif

    switch (ctx->pc) {
        case 0x106a28u: goto label_106a28;
        case 0x106a6cu: goto label_106a6c;
        case 0x106a90u: goto label_106a90;
        default: break;
    }

    ctx->pc = 0x106a08u;

    // 0x106a08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x106a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x106a0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x106a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x106a10: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x106a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x106a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x106a18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x106a18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x106a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x106a20: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x106A20u;
    SET_GPR_U32(ctx, 31, 0x106A28u);
    ctx->pc = 0x106A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106A20u;
    // 0x106a24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x106A20u, 0x106A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106A28u;
label_106a28:
    // 0x106a28: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x106a28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a2c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x106a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x106a30: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x106a30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x106a34: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x106a34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x106a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a3c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x106a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x106a40: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x106a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x106a44: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x106a44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x106a48: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x106a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x106a4c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x106a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x106a50: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x106a50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x106a54: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x106a54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x106a58: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x106a58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x106a5c: 0x10c80004  beq         $a2, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106A5Cu;
    {
        const bool branch_taken_0x106a5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        ctx->pc = 0x106A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106A5Cu;
        // 0x106a60: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106a5c) {
            ctx->pc = 0x106A70u;
            goto label_106a70;
        }
    }
    ctx->pc = 0x106A64u;
    // 0x106a64: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x106A64u;
    SET_GPR_U32(ctx, 31, 0x106A6Cu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x106A64u, 0x106A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106A6Cu;
label_106a6c:
    // 0x106a6c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x106a6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_106a70:
    // 0x106a70: 0xae290014  sw          $t1, 0x14($s1)
    ctx->pc = 0x106a70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 9));
    // 0x106a74: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x106a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x106a78: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x106a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x106a7c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x106a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x106a80: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106A80u;
    {
        const bool branch_taken_0x106a80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x106a80) {
            ctx->pc = 0x106A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106A80u;
            // 0x106a84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106A98u;
            goto label_106a98;
        }
    }
    ctx->pc = 0x106A88u;
    // 0x106a88: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x106A88u;
    SET_GPR_U32(ctx, 31, 0x106A90u);
    ctx->pc = 0x106A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106A88u;
    // 0x106a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x106A88u, 0x106A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106A90u;
label_106a90:
    // 0x106a90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x106A90u;
    {
        const bool branch_taken_0x106a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106A90u;
        // 0x106a94: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106a90) {
            ctx->pc = 0x106A9Cu;
            goto label_106a9c;
        }
    }
    ctx->pc = 0x106A98u;
label_106a98:
    // 0x106a98: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x106a98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_106a9c:
    // 0x106a9c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x106a9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106aa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106aa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106aa4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x106aa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x106aa8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x106aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106aac: 0x3e00008  jr          $ra
    ctx->pc = 0x106AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106AACu;
        // 0x106ab0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106AB4u;
}

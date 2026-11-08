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

// Function: BSCDEntVarParameterPtr__FP15BsSCDEntControli
// Address: 0x1a59b0 - 0x1a5ab8
void BSCDEntVarParameterPtr__FP15BsSCDEntControli_0x1a59b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BSCDEntVarParameterPtr__FP15BsSCDEntControli_0x1a59b0");
#endif

    switch (ctx->pc) {
        case 0x1a5a8cu: goto label_1a5a8c;
        case 0x1a5aa0u: goto label_1a5aa0;
        default: break;
    }

    ctx->pc = 0x1a59b0u;

    // 0x1a59b0: 0x3c028001  lui         $v0, 0x8001
    ctx->pc = 0x1a59b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32769 << 16));
    // 0x1a59b4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a59b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a59b8: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1a59b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1a59bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a59bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a59c0: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x1a59c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x1a59c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a59c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a59c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a59c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a59cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A59CCu;
    {
        const bool branch_taken_0x1a59cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A59D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A59CCu;
        // 0x1a59d0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a59cc) {
            ctx->pc = 0x1A59F0u;
            goto label_1a59f0;
        }
    }
    ctx->pc = 0x1A59D4u;
    // 0x1a59d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a59d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a59d8: 0x3c100024  lui         $s0, 0x24
    ctx->pc = 0x1a59d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)36 << 16));
    // 0x1a59dc: 0x2610fcb0  addiu       $s0, $s0, -0x350
    ctx->pc = 0x1a59dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966448));
    // 0x1a59e0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a59e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a59e4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1A59E4u;
    {
        const bool branch_taken_0x1a59e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a59e4) {
            ctx->pc = 0x1A5A64u;
            goto label_1a5a64;
        }
    }
    ctx->pc = 0x1A59ECu;
    // 0x1a59ec: 0x0  nop
    ctx->pc = 0x1a59ecu;
    // NOP
label_1a59f0:
    // 0x1a59f0: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1a59f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x1a59f4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A59F4u;
    {
        const bool branch_taken_0x1a59f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A59F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A59F4u;
        // 0x1a59f8: 0x28620400  slti        $v0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a59f4) {
            ctx->pc = 0x1A5A28u;
            goto label_1a5a28;
        }
    }
    ctx->pc = 0x1A59FCu;
    // 0x1a59fc: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x1a59fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1a5a00: 0x2463fe00  addiu       $v1, $v1, -0x200
    ctx->pc = 0x1a5a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966784));
    // 0x1a5a04: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a5a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a5a08: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1a5a08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a5a0c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A5A0Cu;
    {
        const bool branch_taken_0x1a5a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A0Cu;
        // 0x1a5a10: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a0c) {
            ctx->pc = 0x1A5A64u;
            goto label_1a5a64;
        }
    }
    ctx->pc = 0x1A5A14u;
    // 0x1a5a14: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a5a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a5a18: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a5a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a5a1c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A5A1Cu;
    {
        const bool branch_taken_0x1a5a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A1Cu;
        // 0x1a5a20: 0x24500004  addiu       $s0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a1c) {
            ctx->pc = 0x1A5A64u;
            goto label_1a5a64;
        }
    }
    ctx->pc = 0x1A5A24u;
    // 0x1a5a24: 0x0  nop
    ctx->pc = 0x1a5a24u;
    // NOP
label_1a5a28:
    // 0x1a5a28: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A5A28u;
    {
        const bool branch_taken_0x1a5a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A28u;
        // 0x1a5a2c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a28) {
            ctx->pc = 0x1A5A58u;
            goto label_1a5a58;
        }
    }
    ctx->pc = 0x1A5A30u;
    // 0x1a5a30: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x1a5a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1a5a34: 0x2463fd00  addiu       $v1, $v1, -0x300
    ctx->pc = 0x1a5a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966528));
    // 0x1a5a38: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a5a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a5a3c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1a5a3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a5a40: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A5A40u;
    {
        const bool branch_taken_0x1a5a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A40u;
        // 0x1a5a44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a40) {
            ctx->pc = 0x1A5A64u;
            goto label_1a5a64;
        }
    }
    ctx->pc = 0x1A5A48u;
    // 0x1a5a48: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a5a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a5a4c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a5a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a5a50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5A50u;
    {
        const bool branch_taken_0x1a5a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A50u;
        // 0x1a5a54: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a50) {
            ctx->pc = 0x1A5A64u;
            goto label_1a5a64;
        }
    }
    ctx->pc = 0x1A5A58u;
label_1a5a58:
    // 0x1a5a58: 0x3c100024  lui         $s0, 0x24
    ctx->pc = 0x1a5a58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)36 << 16));
    // 0x1a5a5c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a5a5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a5a60: 0x8e10f4b0  lw          $s0, -0xB50($s0)
    ctx->pc = 0x1a5a60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294964400)));
label_1a5a64:
    // 0x1a5a64: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A5A64u;
    {
        const bool branch_taken_0x1a5a64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A64u;
        // 0x1a5a68: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a64) {
            ctx->pc = 0x1A5AA4u;
            goto label_1a5aa4;
        }
    }
    ctx->pc = 0x1A5A6Cu;
    // 0x1a5a6c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1a5a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1a5a70: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x1a5a70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x1a5a74: 0x34c6fe00  ori         $a2, $a2, 0xFE00
    ctx->pc = 0x1a5a74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65024);
    // 0x1a5a78: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1a5a78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1a5a7c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1a5a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5a80: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x1a5a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1a5a84: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A5A84u;
    SET_GPR_U32(ctx, 31, 0x1A5A8Cu);
    ctx->pc = 0x1A5A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5A84u;
    // 0x1a5a88: 0x248493f0  addiu       $a0, $a0, -0x6C10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A5A84u, 0x1A5A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5A8Cu;
label_1a5a8c:
    // 0x1a5a8c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a5a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a5a90: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x1a5a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1a5a94: 0x24a59410  addiu       $a1, $a1, -0x6BF0
    ctx->pc = 0x1a5a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939664));
    // 0x1a5a98: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A5A98u;
    SET_GPR_U32(ctx, 31, 0x1A5AA0u);
    ctx->pc = 0x1A5A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5A98u;
    // 0x1a5a9c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A5A98u, 0x1A5AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5AA0u;
label_1a5aa0:
    // 0x1a5aa0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a5aa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a5aa4:
    // 0x1a5aa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5aa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5aa8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a5aa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a5aac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a5aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5AB0u;
        // 0x1a5ab4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5AB8u;
}

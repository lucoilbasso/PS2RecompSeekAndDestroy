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

// Function: PartsInit__15ApItemPartsList
// Address: 0x118a18 - 0x118ac0
void PartsInit__15ApItemPartsList_0x118a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PartsInit__15ApItemPartsList_0x118a18");
#endif

    switch (ctx->pc) {
        case 0x118a50u: goto label_118a50;
        case 0x118a60u: goto label_118a60;
        case 0x118a6cu: goto label_118a6c;
        default: break;
    }

    ctx->pc = 0x118a18u;

    // 0x118a18: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x118a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x118a1c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x118a1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x118a20: 0x2442c0a8  addiu       $v0, $v0, -0x3F58
    ctx->pc = 0x118a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951080));
    // 0x118a24: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x118a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x118a28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118a2c: 0x24530002  addiu       $s3, $v0, 0x2
    ctx->pc = 0x118a2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x118a30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x118a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x118a34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x118a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x118a38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x118a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x118a3c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x118a3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118a40: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x118a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x118a44: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x118a44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118a48: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x118a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x118a4c: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x118a4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_118a50:
    // 0x118a50: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x118a50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x118a54: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x118A54u;
    {
        const bool branch_taken_0x118a54 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x118A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118A54u;
        // 0x118a58: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118a54) {
            ctx->pc = 0x118A88u;
            goto label_118a88;
        }
    }
    ctx->pc = 0x118A5Cu;
    // 0x118a5c: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x118a5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_118a60:
    // 0x118a60: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x118a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118a64: 0xc0462fa  jal         func_118BE8
    ctx->pc = 0x118A64u;
    SET_GPR_U32(ctx, 31, 0x118A6Cu);
    ctx->pc = 0x118A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118A64u;
    // 0x118a68: 0x3245ffff  andi        $a1, $s2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x118BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118BE8u, 0x118A64u, 0x118A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118A6Cu;
label_118a6c:
    // 0x118a6c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x118a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x118a70: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x118a70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x118a74: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x118a74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x118a78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x118a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x118a7c: 0x204202a  slt         $a0, $s0, $a0
    ctx->pc = 0x118a7cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x118a80: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x118A80u;
    {
        const bool branch_taken_0x118a80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x118A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118A80u;
        // 0x118a84: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118a80) {
            ctx->pc = 0x118A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118a60;
        }
    }
    ctx->pc = 0x118A88u;
label_118a88:
    // 0x118a88: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x118a88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x118a8c: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x118a8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x118a90: 0x2a42000c  slti        $v0, $s2, 0xC
    ctx->pc = 0x118a90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x118a94: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x118A94u;
    {
        const bool branch_taken_0x118a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118A94u;
        // 0x118a98: 0x26b50002  addiu       $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118a94) {
            ctx->pc = 0x118A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118a50;
        }
    }
    ctx->pc = 0x118A9Cu;
    // 0x118a9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118a9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118aa0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x118aa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x118aa4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x118aa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118aa8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x118aa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x118aac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x118aacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118ab0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x118ab0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x118ab4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x118ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x118AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118AB8u;
        // 0x118abc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118AC0u;
}

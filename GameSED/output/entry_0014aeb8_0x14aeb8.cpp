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

// Function: entry_0014aeb8
// Address: 0x14aeb8 - 0x14af3c
void entry_0014aeb8_0x14aeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014aeb8_0x14aeb8");
#endif

    switch (ctx->pc) {
        case 0x14aef0u: goto label_14aef0;
        case 0x14aefcu: goto label_14aefc;
        case 0x14af08u: goto label_14af08;
        case 0x14af14u: goto label_14af14;
        default: break;
    }

    ctx->pc = 0x14aeb8u;

    // 0x14aeb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14aeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14aebc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x14aebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x14aec0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x14aec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x14aec4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x14aec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x14aec8: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x14aec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x14aecc: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x14aeccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x14aed0: 0x8c730040  lw          $s3, 0x40($v1)
    ctx->pc = 0x14aed0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x14aed4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x14aed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14aed8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x14aed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x14aedc: 0x38420118  xori        $v0, $v0, 0x118
    ctx->pc = 0x14aedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)280);
    // 0x14aee0: 0x14c50023  bne         $a2, $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x14AEE0u;
    {
        const bool branch_taken_0x14aee0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x14AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AEE0u;
        // 0x14aee4: 0x2980b  movn        $s3, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aee0) {
            ctx->pc = 0x14AF70u;
            return;
        }
    }
    ctx->pc = 0x14AEE8u;
    // 0x14aee8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14AEE8u;
    SET_GPR_U32(ctx, 31, 0x14AEF0u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14AEE8u, 0x14AEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AEF0u;
label_14aef0:
    // 0x14aef0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14aef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aef4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14AEF4u;
    SET_GPR_U32(ctx, 31, 0x14AEFCu);
    ctx->pc = 0x14AEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AEF4u;
    // 0x14aef8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14AEF4u, 0x14AEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AEFCu;
label_14aefc:
    // 0x14aefc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14aefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af00: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14AF00u;
    SET_GPR_U32(ctx, 31, 0x14AF08u);
    ctx->pc = 0x14AF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AF00u;
    // 0x14af04: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14AF00u, 0x14AF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AF08u;
label_14af08:
    // 0x14af08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14af08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af0c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14AF0Cu;
    SET_GPR_U32(ctx, 31, 0x14AF14u);
    ctx->pc = 0x14AF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AF0Cu;
    // 0x14af10: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14AF0Cu, 0x14AF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AF14u;
label_14af14:
    // 0x14af14: 0x26630188  addiu       $v1, $s3, 0x188
    ctx->pc = 0x14af14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 392));
    // 0x14af18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14af18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af1c: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x14af1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
    // 0x14af20: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x14af20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x14af24: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x14af24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x14af28: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14AF28u;
    {
        const bool branch_taken_0x14af28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AF28u;
        // 0x14af2c: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14af28) {
            ctx->pc = 0x14AF50u;
            return;
        }
    }
    ctx->pc = 0x14AF30u;
    // 0x14af30: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14af30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x14af34: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14AF34u;
    {
        const bool branch_taken_0x14af34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x14af34) {
            ctx->pc = 0x14AF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AF34u;
            // 0x14af38: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AF3Cu;
            return;
        }
    }
    ctx->pc = 0x14AF3Cu;
}

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

// Function: entry_0018cc14
// Address: 0x18cc14 - 0x18cc50
void entry_0018cc14_0x18cc14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cc14_0x18cc14");
#endif

    switch (ctx->pc) {
        case 0x18cc44u: goto label_18cc44;
        default: break;
    }

    ctx->pc = 0x18cc14u;

    // 0x18cc14: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x18cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x18cc18: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18cc18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18cc1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18cc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18cc20: 0x2639825  or          $s3, $s3, $v1
    ctx->pc = 0x18cc20u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x18cc24: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x18cc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x18cc28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18cc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18cc2c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18CC2Cu;
    {
        const bool branch_taken_0x18cc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CC2Cu;
        // 0x18cc30: 0xae04024c  sw          $a0, 0x24C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cc2c) {
            ctx->pc = 0x18CC50u;
            return;
        }
    }
    ctx->pc = 0x18CC34u;
    // 0x18cc34: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x18cc34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x18cc38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18cc38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cc3c: 0xc068584  jal         func_1A1610
    ctx->pc = 0x18CC3Cu;
    SET_GPR_U32(ctx, 31, 0x18CC44u);
    ctx->pc = 0x18CC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CC3Cu;
    // 0x18cc40: 0x24841be8  addiu       $a0, $a0, 0x1BE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x18CC3Cu, 0x18CC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CC44u;
label_18cc44:
    // 0x18cc44: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x18cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x18cc48: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x18cc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x18cc4c: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x18cc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
    ctx->pc = 0x18cc50u;
}

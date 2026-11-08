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

// Function: DelayJobRegist__9WcTxPanel
// Address: 0x1df0e8 - 0x1df134
void DelayJobRegist__9WcTxPanel_0x1df0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DelayJobRegist__9WcTxPanel_0x1df0e8");
#endif

    switch (ctx->pc) {
        case 0x1df118u: goto label_1df118;
        default: break;
    }

    ctx->pc = 0x1df0e8u;

    // 0x1df0e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1df0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1df0ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1df0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1df0f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1df0f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df0f4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1df0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1df0f8: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x1df0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1df0fc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1df0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1df100: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1df100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1df104: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DF104u;
    {
        const bool branch_taken_0x1df104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF104u;
        // 0x1df108: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df104) {
            ctx->pc = 0x1DF124u;
            goto label_1df124;
        }
    }
    ctx->pc = 0x1DF10Cu;
    // 0x1df10c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1df10cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1df110: 0xc068584  jal         func_1A1610
    ctx->pc = 0x1DF110u;
    SET_GPR_U32(ctx, 31, 0x1DF118u);
    ctx->pc = 0x1DF114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF110u;
    // 0x1df114: 0x24841be8  addiu       $a0, $a0, 0x1BE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x1DF110u, 0x1DF118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF118u;
label_1df118:
    // 0x1df118: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x1df118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1df11c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1df11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1df120: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x1df120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
label_1df124:
    // 0x1df124: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1df124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df128: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1df128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1df12c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF12Cu;
        // 0x1df130: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF134u;
}

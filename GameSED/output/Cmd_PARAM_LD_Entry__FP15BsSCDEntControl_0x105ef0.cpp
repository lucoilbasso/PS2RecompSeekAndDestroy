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

// Function: Cmd_PARAM_LD_Entry__FP15BsSCDEntControl
// Address: 0x105ef0 - 0x105f3c
void Cmd_PARAM_LD_Entry__FP15BsSCDEntControl_0x105ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PARAM_LD_Entry__FP15BsSCDEntControl_0x105ef0");
#endif

    switch (ctx->pc) {
        case 0x105f08u: goto label_105f08;
        case 0x105f14u: goto label_105f14;
        default: break;
    }

    ctx->pc = 0x105ef0u;

    // 0x105ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x105ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x105ef4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x105ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x105ef8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x105ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x105efc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x105efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x105f00: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x105F00u;
    SET_GPR_U32(ctx, 31, 0x105F08u);
    ctx->pc = 0x105F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105F00u;
    // 0x105f04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x105F00u, 0x105F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105F08u;
label_105f08:
    // 0x105f08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x105f08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105f0c: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x105F0Cu;
    SET_GPR_U32(ctx, 31, 0x105F14u);
    ctx->pc = 0x105F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105F0Cu;
    // 0x105f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x105F0Cu, 0x105F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105F14u;
label_105f14:
    // 0x105f14: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x105f14u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x105f18: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x105f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x105f1c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x105f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x105f20: 0x8c63ec00  lw          $v1, -0x1400($v1)
    ctx->pc = 0x105f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962176)));
    // 0x105f24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105f24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105f28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x105f28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x105f2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x105f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105f30: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x105f30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x105f34: 0x3e00008  jr          $ra
    ctx->pc = 0x105F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F34u;
        // 0x105f38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105F3Cu;
}

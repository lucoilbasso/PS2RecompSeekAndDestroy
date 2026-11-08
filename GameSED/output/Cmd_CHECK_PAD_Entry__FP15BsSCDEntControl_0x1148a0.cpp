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

// Function: Cmd_CHECK_PAD_Entry__FP15BsSCDEntControl
// Address: 0x1148a0 - 0x1148f4
void Cmd_CHECK_PAD_Entry__FP15BsSCDEntControl_0x1148a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_CHECK_PAD_Entry__FP15BsSCDEntControl_0x1148a0");
#endif

    switch (ctx->pc) {
        case 0x1148b0u: goto label_1148b0;
        default: break;
    }

    ctx->pc = 0x1148a0u;

    // 0x1148a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1148a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1148a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1148a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1148a8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1148A8u;
    SET_GPR_U32(ctx, 31, 0x1148B0u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1148A8u, 0x1148B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1148B0u;
label_1148b0:
    // 0x1148b0: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x1148b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1148b4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1148b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1148b8: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1148b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1148bc: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x1148bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1148c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1148c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1148c4: 0x90430038  lbu         $v1, 0x38($v0)
    ctx->pc = 0x1148c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1148c8: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1148C8u;
    {
        const bool branch_taken_0x1148c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1148CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148C8u;
        // 0x1148cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1148c8) {
            ctx->pc = 0x1148E0u;
            goto label_1148e0;
        }
    }
    ctx->pc = 0x1148D0u;
    // 0x1148d0: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x1148d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x1148d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1148D4u;
    {
        const bool branch_taken_0x1148d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1148D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148D4u;
        // 0x1148d8: 0xac4000b0  sw          $zero, 0xB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1148d4) {
            ctx->pc = 0x1148E8u;
            goto label_1148e8;
        }
    }
    ctx->pc = 0x1148DCu;
    // 0x1148dc: 0x0  nop
    ctx->pc = 0x1148dcu;
    // NOP
label_1148e0:
    // 0x1148e0: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x1148e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x1148e4: 0xac4300b0  sw          $v1, 0xB0($v0)
    ctx->pc = 0x1148e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2400B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2400B0u, _value); } while (0);
label_1148e8:
    // 0x1148e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1148e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1148ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1148ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1148F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148ECu;
        // 0x1148f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1148ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1148F4u;
}

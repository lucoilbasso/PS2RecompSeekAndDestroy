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

// Function: caseD_8
// Address: 0x1055f8 - 0x105630
void caseD_8_0x1055f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1055f8");
#endif

    switch (ctx->pc) {
        case 0x10561cu: goto label_10561c;
        case 0x105624u: goto label_105624;
        default: break;
    }

    ctx->pc = 0x1055f8u;

    // 0x1055f8: 0x278388c4  addiu       $v1, $gp, -0x773C
    ctx->pc = 0x1055f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936772));
    // 0x1055fc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1055fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x105600: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x105600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x105604: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x105604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105608: 0x24a538e8  addiu       $a1, $a1, 0x38E8
    ctx->pc = 0x105608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14568));
    // 0x10560c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10560cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105610: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x105610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x105614: 0xc066d1c  jal         func_19B470
    ctx->pc = 0x105614u;
    SET_GPR_U32(ctx, 31, 0x10561Cu);
    ctx->pc = 0x105618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105614u;
    // 0x105618: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B470u, 0x105614u, 0x10561Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10561Cu;
label_10561c:
    // 0x10561c: 0xc041434  jal         func_1050D0
    ctx->pc = 0x10561Cu;
    SET_GPR_U32(ctx, 31, 0x105624u);
    ctx->pc = 0x105620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10561Cu;
    // 0x105620: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1050D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1050D0u, 0x10561Cu, 0x105624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105624u;
label_105624:
    // 0x105624: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x105624u;
    {
        const bool branch_taken_0x105624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105624u;
        // 0x105628: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105624) {
            ctx->pc = 0x1057A0u;
            return;
        }
    }
    ctx->pc = 0x10562Cu;
    // 0x10562c: 0x0  nop
    ctx->pc = 0x10562cu;
    // NOP
    ctx->pc = 0x105630u;
}

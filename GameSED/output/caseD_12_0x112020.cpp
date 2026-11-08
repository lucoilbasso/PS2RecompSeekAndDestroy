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

// Function: caseD_12
// Address: 0x112020 - 0x112054
void caseD_12_0x112020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_12_0x112020");
#endif

    switch (ctx->pc) {
        case 0x112028u: goto label_112028;
        case 0x112050u: goto label_112050;
        default: break;
    }

    ctx->pc = 0x112020u;

    // 0x112020: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x112020u;
    SET_GPR_U32(ctx, 31, 0x112028u);
    ctx->pc = 0x112024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112020u;
    // 0x112024: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x112020u, 0x112028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112028u;
label_112028:
    // 0x112028: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x112028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x11202c: 0x30500fff  andi        $s0, $v0, 0xFFF
    ctx->pc = 0x11202cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x112030: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x112030u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x112034: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x112034u;
    {
        const bool branch_taken_0x112034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112034) {
            ctx->pc = 0x112038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112034u;
            // 0x112038: 0x8e63001c  lw          $v1, 0x1C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112054u;
            return;
        }
    }
    ctx->pc = 0x11203Cu;
    // 0x11203c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11203cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x112040: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x112040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112044: 0x24a53ed0  addiu       $a1, $a1, 0x3ED0
    ctx->pc = 0x112044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16080));
    // 0x112048: 0xc068186  jal         func_1A0618
    ctx->pc = 0x112048u;
    SET_GPR_U32(ctx, 31, 0x112050u);
    ctx->pc = 0x11204Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112048u;
    // 0x11204c: 0x24060042  addiu       $a2, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x112048u, 0x112050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112050u;
label_112050:
    // 0x112050: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x112050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    ctx->pc = 0x112054u;
}

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

// Function: default
// Address: 0x115674 - 0x1156ac
void ps2_default_0x115674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x115674");
#endif

    switch (ctx->pc) {
        case 0x1156a8u: goto label_1156a8;
        default: break;
    }

    ctx->pc = 0x115674u;

    // 0x115674: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x115674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x115678: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x115678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11567c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11567cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x115680: 0x54600022  bnel        $v1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x115680u;
    {
        const bool branch_taken_0x115680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x115680) {
            ctx->pc = 0x115684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115680u;
            // 0x115684: 0x8e720000  lw          $s2, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11570Cu;
            return;
        }
    }
    ctx->pc = 0x115688u;
    // 0x115688: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x115688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11568c: 0x56420007  bnel        $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11568Cu;
    {
        const bool branch_taken_0x11568c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x11568c) {
            ctx->pc = 0x115690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11568Cu;
            // 0x115690: 0x128a03  sra         $s1, $s2, 8 (Delay Slot)
            SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 18), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1156ACu;
            return;
        }
    }
    ctx->pc = 0x115694u;
    // 0x115694: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x115694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x115698: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x115698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11569c: 0x24a54390  addiu       $a1, $a1, 0x4390
    ctx->pc = 0x11569cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17296));
    // 0x1156a0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1156A0u;
    SET_GPR_U32(ctx, 31, 0x1156A8u);
    ctx->pc = 0x1156A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1156A0u;
    // 0x1156a4: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1156A0u, 0x1156A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1156A8u;
label_1156a8:
    // 0x1156a8: 0x128a03  sra         $s1, $s2, 8
    ctx->pc = 0x1156a8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 18), 8));
    ctx->pc = 0x1156acu;
}

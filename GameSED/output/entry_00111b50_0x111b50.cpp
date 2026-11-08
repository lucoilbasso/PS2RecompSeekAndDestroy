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

// Function: entry_00111b50
// Address: 0x111b50 - 0x111b78
void entry_00111b50_0x111b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111b50_0x111b50");
#endif

    switch (ctx->pc) {
        case 0x111b70u: goto label_111b70;
        default: break;
    }

    ctx->pc = 0x111b50u;

    // 0x111b50: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x111b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x111b54: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x111b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x111b58: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x111b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x111b5c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x111b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x111b60: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x111B60u;
    {
        const bool branch_taken_0x111b60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x111B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B60u;
        // 0x111b64: 0x8c52b830  lw          $s2, -0x47D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111b60) {
            ctx->pc = 0x111B78u;
            return;
        }
    }
    ctx->pc = 0x111B68u;
    // 0x111b68: 0xc044678  jal         func_1119E0
    ctx->pc = 0x111B68u;
    SET_GPR_U32(ctx, 31, 0x111B70u);
    ctx->pc = 0x1119E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1119E0u, 0x111B68u, 0x111B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B70u;
label_111b70:
    // 0x111b70: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x111B70u;
    {
        const bool branch_taken_0x111b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B70u;
        // 0x111b74: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111b70) {
            ctx->pc = 0x111C6Cu;
            return;
        }
    }
    ctx->pc = 0x111B78u;
}

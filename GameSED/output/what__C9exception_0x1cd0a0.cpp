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

// Function: what__C9exception
// Address: 0x1cd0a0 - 0x1cd0e0
void what__C9exception_0x1cd0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("what__C9exception_0x1cd0a0");
#endif

    switch (ctx->pc) {
        case 0x1cd0a0u: goto label_1cd0a0;
        case 0x1cd0a4u: goto label_1cd0a4;
        case 0x1cd0a8u: goto label_1cd0a8;
        case 0x1cd0acu: goto label_1cd0ac;
        case 0x1cd0b0u: goto label_1cd0b0;
        case 0x1cd0b4u: goto label_1cd0b4;
        case 0x1cd0b8u: goto label_1cd0b8;
        case 0x1cd0bcu: goto label_1cd0bc;
        case 0x1cd0c0u: goto label_1cd0c0;
        case 0x1cd0c4u: goto label_1cd0c4;
        case 0x1cd0c8u: goto label_1cd0c8;
        case 0x1cd0ccu: goto label_1cd0cc;
        case 0x1cd0d0u: goto label_1cd0d0;
        case 0x1cd0d4u: goto label_1cd0d4;
        case 0x1cd0d8u: goto label_1cd0d8;
        case 0x1cd0dcu: goto label_1cd0dc;
        default: break;
    }

    ctx->pc = 0x1cd0a0u;

label_1cd0a0:
    // 0x1cd0a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1cd0a4:
    // 0x1cd0a4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1cd0a8:
    if (ctx->pc == 0x1CD0A8u) {
        ctx->pc = 0x1CD0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD0A4u;
        // 0x1cd0a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD0ACu;
        goto label_1cd0ac;
    }
    ctx->pc = 0x1CD0A4u;
    {
        const bool branch_taken_0x1cd0a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD0A4u;
        // 0x1cd0a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd0a4) {
            ctx->pc = 0x1CD0C8u;
            goto label_1cd0c8;
        }
    }
    ctx->pc = 0x1CD0ACu;
label_1cd0ac:
    // 0x1cd0ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cd0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cd0b0:
    // 0x1cd0b0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cd0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cd0b4:
    // 0x1cd0b4: 0x40f809  jalr        $v0
label_1cd0b8:
    if (ctx->pc == 0x1CD0B8u) {
        ctx->pc = 0x1CD0BCu;
        goto label_1cd0bc;
    }
    ctx->pc = 0x1CD0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CD0BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD0B4u, 0x1CD0BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD0BCu;
label_1cd0bc:
    // 0x1cd0bc: 0x10000005  b           . + 4 + (0x5 << 2)
label_1cd0c0:
    if (ctx->pc == 0x1CD0C0u) {
        ctx->pc = 0x1CD0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD0BCu;
        // 0x1cd0c0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD0C4u;
        goto label_1cd0c4;
    }
    ctx->pc = 0x1CD0BCu;
    {
        const bool branch_taken_0x1cd0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD0BCu;
        // 0x1cd0c0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd0bc) {
            ctx->pc = 0x1CD0D4u;
            goto label_1cd0d4;
        }
    }
    ctx->pc = 0x1CD0C4u;
label_1cd0c4:
    // 0x1cd0c4: 0x0  nop
    ctx->pc = 0x1cd0c4u;
    // NOP
label_1cd0c8:
    // 0x1cd0c8: 0xc073400  jal         func_1CD000
label_1cd0cc:
    if (ctx->pc == 0x1CD0CCu) {
        ctx->pc = 0x1CD0D0u;
        goto label_1cd0d0;
    }
    ctx->pc = 0x1CD0C8u;
    SET_GPR_U32(ctx, 31, 0x1CD0D0u);
    ctx->pc = 0x1CD000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD000u, 0x1CD0C8u, 0x1CD0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD0D0u;
label_1cd0d0:
    // 0x1cd0d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cd0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cd0d4:
    // 0x1cd0d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cd0d8:
    // 0x1cd0d8: 0x3e00008  jr          $ra
label_1cd0dc:
    if (ctx->pc == 0x1CD0DCu) {
        ctx->pc = 0x1CD0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD0D8u;
        // 0x1cd0dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD0E0u;
        goto label_fallthrough_0x1cd0d8;
    }
    ctx->pc = 0x1CD0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD0D8u;
        // 0x1cd0dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cd0d8:
    ctx->pc = 0x1CD0E0u;
}

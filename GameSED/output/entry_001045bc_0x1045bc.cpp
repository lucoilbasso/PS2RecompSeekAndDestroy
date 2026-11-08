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

// Function: entry_001045bc
// Address: 0x1045bc - 0x1045e4
void entry_001045bc_0x1045bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001045bc_0x1045bc");
#endif

    switch (ctx->pc) {
        case 0x1045d4u: goto label_1045d4;
        default: break;
    }

    ctx->pc = 0x1045bcu;

label_1045bc:
    // 0x1045bc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1045bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1045c0:
    // 0x1045c0: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1045c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_1045c4:
    // 0x1045c4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1045c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1045c8:
    // 0x1045c8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1045c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1045cc:
    // 0x1045cc: 0x60f809  jalr        $v1
label_1045d0:
    if (ctx->pc == 0x1045D0u) {
        ctx->pc = 0x1045D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1045CCu;
        // 0x1045d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1045D4u;
        goto label_1045d4;
    }
    ctx->pc = 0x1045CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1045D4u);
        ctx->pc = 0x1045D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1045CCu;
        // 0x1045d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1045CCu, 0x1045D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1045D4u;
label_1045d4:
    // 0x1045d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1045d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1045d8:
    // 0x1045d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1045d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1045dc:
    // 0x1045dc: 0x3e00008  jr          $ra
label_1045e0:
    if (ctx->pc == 0x1045E0u) {
        ctx->pc = 0x1045E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1045DCu;
        // 0x1045e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1045E4u;
        goto label_fallthrough_0x1045dc;
    }
    ctx->pc = 0x1045DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1045E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1045DCu;
        // 0x1045e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1045DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1045dc:
    ctx->pc = 0x1045E4u;
}

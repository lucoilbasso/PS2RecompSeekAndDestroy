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

// Function: __tf6WcView
// Address: 0x1dd568 - 0x1dd5b8
void ps2___tf6WcView_0x1dd568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf6WcView_0x1dd568");
#endif

    switch (ctx->pc) {
        case 0x1dd58cu: goto label_1dd58c;
        case 0x1dd5a4u: goto label_1dd5a4;
        default: break;
    }

    ctx->pc = 0x1dd568u;

    // 0x1dd568: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd56c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1dd56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1dd570: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd574: 0x245015d8  addiu       $s0, $v0, 0x15D8
    ctx->pc = 0x1dd574u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5592));
    // 0x1dd578: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1dd578u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4115D8u));
    // 0x1dd57c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DD57Cu;
    {
        const bool branch_taken_0x1dd57c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD57Cu;
        // 0x1dd580: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd57c) {
            ctx->pc = 0x1DD5A4u;
            goto label_1dd5a4;
        }
    }
    ctx->pc = 0x1DD584u;
    // 0x1dd584: 0xc077340  jal         func_1DCD00
    ctx->pc = 0x1DD584u;
    SET_GPR_U32(ctx, 31, 0x1DD58Cu);
    ctx->pc = 0x1DCD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD00u, 0x1DD584u, 0x1DD58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD58Cu;
label_1dd58c:
    // 0x1dd58c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1dd58cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1dd590: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1dd590u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1dd594: 0x24a5d5d0  addiu       $a1, $a1, -0x2A30
    ctx->pc = 0x1dd594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956496));
    // 0x1dd598: 0x24c61580  addiu       $a2, $a2, 0x1580
    ctx->pc = 0x1dd598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5504));
    // 0x1dd59c: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1DD59Cu;
    SET_GPR_U32(ctx, 31, 0x1DD5A4u);
    ctx->pc = 0x1DD5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD59Cu;
    // 0x1dd5a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1DD59Cu, 0x1DD5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD5A4u;
label_1dd5a4:
    // 0x1dd5a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dd5a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd5a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd5a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd5ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dd5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5B0u;
        // 0x1dd5b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD5B8u;
}

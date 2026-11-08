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

// Function: __tf12ApcFieldDraw
// Address: 0x1d84d0 - 0x1d8520
void ps2___tf12ApcFieldDraw_0x1d84d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf12ApcFieldDraw_0x1d84d0");
#endif

    switch (ctx->pc) {
        case 0x1d84f4u: goto label_1d84f4;
        case 0x1d850cu: goto label_1d850c;
        default: break;
    }

    ctx->pc = 0x1d84d0u;

    // 0x1d84d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d84d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d84d4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1d84d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1d84d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d84d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d84dc: 0x24500f60  addiu       $s0, $v0, 0xF60
    ctx->pc = 0x1d84dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3936));
    // 0x1d84e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d84e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x410F60u));
    // 0x1d84e4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D84E4u;
    {
        const bool branch_taken_0x1d84e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D84E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D84E4u;
        // 0x1d84e8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d84e4) {
            ctx->pc = 0x1D850Cu;
            goto label_1d850c;
        }
    }
    ctx->pc = 0x1D84ECu;
    // 0x1d84ec: 0xc077340  jal         func_1DCD00
    ctx->pc = 0x1D84ECu;
    SET_GPR_U32(ctx, 31, 0x1D84F4u);
    ctx->pc = 0x1DCD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD00u, 0x1D84ECu, 0x1D84F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D84F4u;
label_1d84f4:
    // 0x1d84f4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d84f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d84f8: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1d84f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1d84fc: 0x24a568d8  addiu       $a1, $a1, 0x68D8
    ctx->pc = 0x1d84fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26840));
    // 0x1d8500: 0x24c61580  addiu       $a2, $a2, 0x1580
    ctx->pc = 0x1d8500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5504));
    // 0x1d8504: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1D8504u;
    SET_GPR_U32(ctx, 31, 0x1D850Cu);
    ctx->pc = 0x1D8508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8504u;
    // 0x1d8508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1D8504u, 0x1D850Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D850Cu;
label_1d850c:
    // 0x1d850c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d850cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8514: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d8514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8518: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8518u;
        // 0x1d851c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8520u;
}

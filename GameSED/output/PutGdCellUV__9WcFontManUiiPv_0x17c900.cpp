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

// Function: PutGdCellUV__9WcFontManUiiPv
// Address: 0x17c900 - 0x17c92c
void PutGdCellUV__9WcFontManUiiPv_0x17c900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PutGdCellUV__9WcFontManUiiPv_0x17c900");
#endif

    switch (ctx->pc) {
        case 0x17c920u: goto label_17c920;
        default: break;
    }

    ctx->pc = 0x17c900u;

    // 0x17c900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17c900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c904: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x17c904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17c908: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17c908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c90c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17c90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17c910: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x17c910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c914: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x17c914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c918: 0xc060fb6  jal         func_183ED8
    ctx->pc = 0x17C918u;
    SET_GPR_U32(ctx, 31, 0x17C920u);
    ctx->pc = 0x17C91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C918u;
    // 0x17c91c: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183ED8u, 0x17C918u, 0x17C920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C920u;
label_17c920:
    // 0x17c920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c924: 0x3e00008  jr          $ra
    ctx->pc = 0x17C924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C924u;
        // 0x17c928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C92Cu;
}

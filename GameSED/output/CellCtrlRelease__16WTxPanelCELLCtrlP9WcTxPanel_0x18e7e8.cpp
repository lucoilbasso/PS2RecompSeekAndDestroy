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

// Function: CellCtrlRelease__16WTxPanelCELLCtrlP9WcTxPanel
// Address: 0x18e7e8 - 0x18e83c
void CellCtrlRelease__16WTxPanelCELLCtrlP9WcTxPanel_0x18e7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CellCtrlRelease__16WTxPanelCELLCtrlP9WcTxPanel_0x18e7e8");
#endif

    switch (ctx->pc) {
        case 0x18e830u: goto label_18e830;
        default: break;
    }

    ctx->pc = 0x18e7e8u;

    // 0x18e7e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18e7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18e7ec: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x18e7ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e7f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18e7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e7f4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x18e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18e7f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18e7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18e7fc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18E7FCu;
    {
        const bool branch_taken_0x18e7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E7FCu;
        // 0x18e800: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e7fc) {
            ctx->pc = 0x18E830u;
            goto label_18e830;
        }
    }
    ctx->pc = 0x18E804u;
    // 0x18e804: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x18e804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x18e808: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x18e808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x18e80c: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x18e80cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
    // 0x18e810: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18e810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18e814: 0x50440007  beql        $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18E814u;
    {
        const bool branch_taken_0x18e814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x18e814) {
            ctx->pc = 0x18E818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E814u;
            // 0x18e818: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E834u;
            goto label_18e834;
        }
    }
    ctx->pc = 0x18E81Cu;
    // 0x18e81c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x18e81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x18e820: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E820u;
    {
        const bool branch_taken_0x18e820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E820u;
        // 0x18e824: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e820) {
            ctx->pc = 0x18E830u;
            goto label_18e830;
        }
    }
    ctx->pc = 0x18E828u;
    // 0x18e828: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x18E828u;
    SET_GPR_U32(ctx, 31, 0x18E830u);
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x18E828u, 0x18E830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E830u;
label_18e830:
    // 0x18e830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18e830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18e834:
    // 0x18e834: 0x3e00008  jr          $ra
    ctx->pc = 0x18E834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E834u;
        // 0x18e838: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E83Cu;
}

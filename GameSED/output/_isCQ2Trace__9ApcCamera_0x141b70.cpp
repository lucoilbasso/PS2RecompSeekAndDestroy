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

// Function: _isCQ2Trace__9ApcCamera
// Address: 0x141b70 - 0x141bec
void _isCQ2Trace__9ApcCamera_0x141b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_isCQ2Trace__9ApcCamera_0x141b70");
#endif

    switch (ctx->pc) {
        case 0x141b94u: goto label_141b94;
        default: break;
    }

    ctx->pc = 0x141b70u;

    // 0x141b70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x141b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x141b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141b78: 0x8c820214  lw          $v0, 0x214($a0)
    ctx->pc = 0x141b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
    // 0x141b7c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x141B7Cu;
    {
        const bool branch_taken_0x141b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141B7Cu;
        // 0x141b80: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141b7c) {
            ctx->pc = 0x141BDCu;
            goto label_141bdc;
        }
    }
    ctx->pc = 0x141B84u;
    // 0x141b84: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x141b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x141b88: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x141b88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x141b8c: 0xc061a46  jal         func_186918
    ctx->pc = 0x141B8Cu;
    SET_GPR_U32(ctx, 31, 0x141B94u);
    ctx->pc = 0x141B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141B8Cu;
    // 0x141b90: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x141B8Cu, 0x141B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141B94u;
label_141b94:
    // 0x141b94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x141b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141b98: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x141B98u;
    {
        const bool branch_taken_0x141b98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x141B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141B98u;
        // 0x141b9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141b98) {
            ctx->pc = 0x141BC0u;
            goto label_141bc0;
        }
    }
    ctx->pc = 0x141BA0u;
    // 0x141ba0: 0x3c030014  lui         $v1, 0x14
    ctx->pc = 0x141ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20 << 16));
    // 0x141ba4: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x141ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x141ba8: 0x2463ee48  addiu       $v1, $v1, -0x11B8
    ctx->pc = 0x141ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962760));
    // 0x141bac: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x141BACu;
    {
        const bool branch_taken_0x141bac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x141bac) {
            ctx->pc = 0x141BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141BACu;
            // 0x141bb0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141BC4u;
            goto label_141bc4;
        }
    }
    ctx->pc = 0x141BB4u;
    // 0x141bb4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x141BB4u;
    {
        const bool branch_taken_0x141bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141BB4u;
        // 0x141bb8: 0x8ca3001c  lw          $v1, 0x1C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141bb4) {
            ctx->pc = 0x141BC4u;
            goto label_141bc4;
        }
    }
    ctx->pc = 0x141BBCu;
    // 0x141bbc: 0x0  nop
    ctx->pc = 0x141bbcu;
    // NOP
label_141bc0:
    // 0x141bc0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x141bc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141bc4:
    // 0x141bc4: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x141BC4u;
    {
        const bool branch_taken_0x141bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x141bc4) {
            ctx->pc = 0x141BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141BC4u;
            // 0x141bc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141BE0u;
            goto label_141be0;
        }
    }
    ctx->pc = 0x141BCCu;
    // 0x141bcc: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x141bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x141bd0: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x141bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x141bd4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x141BD4u;
    {
        const bool branch_taken_0x141bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x141BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141BD4u;
        // 0x141bd8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141bd4) {
            ctx->pc = 0x141BE4u;
            goto label_141be4;
        }
    }
    ctx->pc = 0x141BDCu;
label_141bdc:
    // 0x141bdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x141bdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141be0:
    // 0x141be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x141be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_141be4:
    // 0x141be4: 0x3e00008  jr          $ra
    ctx->pc = 0x141BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141BE4u;
        // 0x141be8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141BECu;
}

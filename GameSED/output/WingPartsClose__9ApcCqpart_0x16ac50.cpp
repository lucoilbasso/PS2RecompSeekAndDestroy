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

// Function: WingPartsClose__9ApcCqpart
// Address: 0x16ac50 - 0x16accc
void WingPartsClose__9ApcCqpart_0x16ac50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WingPartsClose__9ApcCqpart_0x16ac50");
#endif

    switch (ctx->pc) {
        case 0x16ac70u: goto label_16ac70;
        case 0x16ac80u: goto label_16ac80;
        default: break;
    }

    ctx->pc = 0x16ac50u;

    // 0x16ac50: 0x8c821258  lw          $v0, 0x1258($a0)
    ctx->pc = 0x16ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4696)));
    // 0x16ac54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16ac54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ac58: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x16ac58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x16ac5c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x16AC5Cu;
    {
        const bool branch_taken_0x16ac5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC5Cu;
        // 0x16ac60: 0xac801260  sw          $zero, 0x1260($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac5c) {
            ctx->pc = 0x16ACC4u;
            goto label_16acc4;
        }
    }
    ctx->pc = 0x16AC64u;
    // 0x16ac64: 0x24071250  addiu       $a3, $zero, 0x1250
    ctx->pc = 0x16ac64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4688));
    // 0x16ac68: 0x24061250  addiu       $a2, $zero, 0x1250
    ctx->pc = 0x16ac68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4688));
    // 0x16ac6c: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x16ac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_16ac70:
    // 0x16ac70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ac74: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16AC74u;
    {
        const bool branch_taken_0x16ac74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC74u;
        // 0x16ac78: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac74) {
            ctx->pc = 0x16AC9Cu;
            goto label_16ac9c;
        }
    }
    ctx->pc = 0x16AC7Cu;
    // 0x16ac7c: 0xac4300e0  sw          $v1, 0xE0($v0)
    ctx->pc = 0x16ac7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 3));
label_16ac80:
    // 0x16ac80: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x16ac80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x16ac84: 0x0  nop
    ctx->pc = 0x16ac84u;
    // NOP
    // 0x16ac88: 0x0  nop
    ctx->pc = 0x16ac88u;
    // NOP
    // 0x16ac8c: 0x0  nop
    ctx->pc = 0x16ac8cu;
    // NOP
    // 0x16ac90: 0x0  nop
    ctx->pc = 0x16ac90u;
    // NOP
    // 0x16ac94: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16AC94u;
    {
        const bool branch_taken_0x16ac94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ac94) {
            ctx->pc = 0x16AC98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AC94u;
            // 0x16ac98: 0xac4300e0  sw          $v1, 0xE0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ac80;
        }
    }
    ctx->pc = 0x16AC9Cu;
label_16ac9c:
    // 0x16ac9c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x16ac9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x16aca0: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x16aca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x16aca4: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x16aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x16aca8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x16aca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x16acac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16acacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16acb0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16ACB0u;
    {
        const bool branch_taken_0x16acb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ACB0u;
        // 0x16acb4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16acb0) {
            ctx->pc = 0x16ACC4u;
            goto label_16acc4;
        }
    }
    ctx->pc = 0x16ACB8u;
    // 0x16acb8: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x16acb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x16acbc: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x16ACBCu;
    {
        const bool branch_taken_0x16acbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16ACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ACBCu;
        // 0x16acc0: 0xa61021  addu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16acbc) {
            ctx->pc = 0x16AC70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ac70;
        }
    }
    ctx->pc = 0x16ACC4u;
label_16acc4:
    // 0x16acc4: 0x3e00008  jr          $ra
    ctx->pc = 0x16ACC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16ACC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16ACCCu;
}

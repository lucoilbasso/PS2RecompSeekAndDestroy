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

// Function: WingPartsOpen__9ApcCqpart
// Address: 0x16abc8 - 0x16ac4c
void WingPartsOpen__9ApcCqpart_0x16abc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WingPartsOpen__9ApcCqpart_0x16abc8");
#endif

    switch (ctx->pc) {
        case 0x16abf0u: goto label_16abf0;
        case 0x16ac00u: goto label_16ac00;
        default: break;
    }

    ctx->pc = 0x16abc8u;

    // 0x16abc8: 0x8c831258  lw          $v1, 0x1258($a0)
    ctx->pc = 0x16abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4696)));
    // 0x16abcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16abccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16abd0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16abd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16abd4: 0xac821260  sw          $v0, 0x1260($a0)
    ctx->pc = 0x16abd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4704), GPR_U32(ctx, 2));
    // 0x16abd8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x16ABD8u;
    {
        const bool branch_taken_0x16abd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ABD8u;
        // 0x16abdc: 0x24850008  addiu       $a1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16abd8) {
            ctx->pc = 0x16AC44u;
            goto label_16ac44;
        }
    }
    ctx->pc = 0x16ABE0u;
    // 0x16abe0: 0x24071250  addiu       $a3, $zero, 0x1250
    ctx->pc = 0x16abe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4688));
    // 0x16abe4: 0x24061250  addiu       $a2, $zero, 0x1250
    ctx->pc = 0x16abe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4688));
    // 0x16abe8: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x16abe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x16abec: 0x0  nop
    ctx->pc = 0x16abecu;
    // NOP
label_16abf0:
    // 0x16abf0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16abf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16abf4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x16ABF4u;
    {
        const bool branch_taken_0x16abf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16abf4) {
            ctx->pc = 0x16ABF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16ABF4u;
            // 0x16abf8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AC20u;
            goto label_16ac20;
        }
    }
    ctx->pc = 0x16ABFCu;
    // 0x16abfc: 0xac4000e0  sw          $zero, 0xE0($v0)
    ctx->pc = 0x16abfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 0));
label_16ac00:
    // 0x16ac00: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x16ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x16ac04: 0x0  nop
    ctx->pc = 0x16ac04u;
    // NOP
    // 0x16ac08: 0x0  nop
    ctx->pc = 0x16ac08u;
    // NOP
    // 0x16ac0c: 0x0  nop
    ctx->pc = 0x16ac0cu;
    // NOP
    // 0x16ac10: 0x0  nop
    ctx->pc = 0x16ac10u;
    // NOP
    // 0x16ac14: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16AC14u;
    {
        const bool branch_taken_0x16ac14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ac14) {
            ctx->pc = 0x16AC18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AC14u;
            // 0x16ac18: 0xac4000e0  sw          $zero, 0xE0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ac00;
        }
    }
    ctx->pc = 0x16AC1Cu;
    // 0x16ac1c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x16ac1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_16ac20:
    // 0x16ac20: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x16ac20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x16ac24: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x16ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x16ac28: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x16ac28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x16ac2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16ac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ac30: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16AC30u;
    {
        const bool branch_taken_0x16ac30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC30u;
        // 0x16ac34: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac30) {
            ctx->pc = 0x16AC44u;
            goto label_16ac44;
        }
    }
    ctx->pc = 0x16AC38u;
    // 0x16ac38: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x16ac38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x16ac3c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x16AC3Cu;
    {
        const bool branch_taken_0x16ac3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC3Cu;
        // 0x16ac40: 0xa61021  addu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac3c) {
            ctx->pc = 0x16ABF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16abf0;
        }
    }
    ctx->pc = 0x16AC44u;
label_16ac44:
    // 0x16ac44: 0x3e00008  jr          $ra
    ctx->pc = 0x16AC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AC44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AC4Cu;
}

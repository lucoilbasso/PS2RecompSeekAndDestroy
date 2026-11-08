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

// Function: PartsOpenCheck__9ApcCqpart
// Address: 0x16acd0 - 0x16ad6c
void PartsOpenCheck__9ApcCqpart_0x16acd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PartsOpenCheck__9ApcCqpart_0x16acd0");
#endif

    switch (ctx->pc) {
        case 0x16ad10u: goto label_16ad10;
        case 0x16ad20u: goto label_16ad20;
        default: break;
    }

    ctx->pc = 0x16acd0u;

    // 0x16acd0: 0x8c821264  lw          $v0, 0x1264($a0)
    ctx->pc = 0x16acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4708)));
    // 0x16acd4: 0x8c4201ac  lw          $v0, 0x1AC($v0)
    ctx->pc = 0x16acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x16acd8: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x16ACD8u;
    {
        const bool branch_taken_0x16acd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16acd8) {
            ctx->pc = 0x16AD64u;
            goto label_16ad64;
        }
    }
    ctx->pc = 0x16ACE0u;
    // 0x16ace0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x16ace0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x16ace4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ace8: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x16ACE8u;
    {
        const bool branch_taken_0x16ace8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16ace8) {
            ctx->pc = 0x16AD64u;
            goto label_16ad64;
        }
    }
    ctx->pc = 0x16ACF0u;
    // 0x16acf0: 0x8c821258  lw          $v0, 0x1258($a0)
    ctx->pc = 0x16acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4696)));
    // 0x16acf4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16acf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16acf8: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x16acf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x16acfc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x16ACFCu;
    {
        const bool branch_taken_0x16acfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ACFCu;
        // 0x16ad00: 0xac801260  sw          $zero, 0x1260($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16acfc) {
            ctx->pc = 0x16AD64u;
            goto label_16ad64;
        }
    }
    ctx->pc = 0x16AD04u;
    // 0x16ad04: 0x24071250  addiu       $a3, $zero, 0x1250
    ctx->pc = 0x16ad04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4688));
    // 0x16ad08: 0x24061250  addiu       $a2, $zero, 0x1250
    ctx->pc = 0x16ad08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4688));
    // 0x16ad0c: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x16ad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_16ad10:
    // 0x16ad10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ad14: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16AD14u;
    {
        const bool branch_taken_0x16ad14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AD14u;
        // 0x16ad18: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ad14) {
            ctx->pc = 0x16AD3Cu;
            goto label_16ad3c;
        }
    }
    ctx->pc = 0x16AD1Cu;
    // 0x16ad1c: 0xac4300e0  sw          $v1, 0xE0($v0)
    ctx->pc = 0x16ad1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 3));
label_16ad20:
    // 0x16ad20: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x16ad20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x16ad24: 0x0  nop
    ctx->pc = 0x16ad24u;
    // NOP
    // 0x16ad28: 0x0  nop
    ctx->pc = 0x16ad28u;
    // NOP
    // 0x16ad2c: 0x0  nop
    ctx->pc = 0x16ad2cu;
    // NOP
    // 0x16ad30: 0x0  nop
    ctx->pc = 0x16ad30u;
    // NOP
    // 0x16ad34: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16AD34u;
    {
        const bool branch_taken_0x16ad34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ad34) {
            ctx->pc = 0x16AD38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AD34u;
            // 0x16ad38: 0xac4300e0  sw          $v1, 0xE0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AD20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ad20;
        }
    }
    ctx->pc = 0x16AD3Cu;
label_16ad3c:
    // 0x16ad3c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x16ad3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x16ad40: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x16ad40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x16ad44: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x16ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x16ad48: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x16ad48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x16ad4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16ad4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ad50: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16AD50u;
    {
        const bool branch_taken_0x16ad50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AD50u;
        // 0x16ad54: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ad50) {
            ctx->pc = 0x16AD64u;
            goto label_16ad64;
        }
    }
    ctx->pc = 0x16AD58u;
    // 0x16ad58: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x16ad58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x16ad5c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x16AD5Cu;
    {
        const bool branch_taken_0x16ad5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AD5Cu;
        // 0x16ad60: 0xa61021  addu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ad5c) {
            ctx->pc = 0x16AD10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ad10;
        }
    }
    ctx->pc = 0x16AD64u;
label_16ad64:
    // 0x16ad64: 0x3e00008  jr          $ra
    ctx->pc = 0x16AD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AD64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AD6Cu;
}

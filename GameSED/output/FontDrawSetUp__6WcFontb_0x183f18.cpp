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

// Function: FontDrawSetUp__6WcFontb
// Address: 0x183f18 - 0x183fb0
void FontDrawSetUp__6WcFontb_0x183f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FontDrawSetUp__6WcFontb_0x183f18");
#endif

    switch (ctx->pc) {
        case 0x183f30u: goto label_183f30;
        case 0x183f70u: goto label_183f70;
        case 0x183f78u: goto label_183f78;
        default: break;
    }

    ctx->pc = 0x183f18u;

    // 0x183f18: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x183f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x183f1c: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x183f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x183f20: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x183F20u;
    {
        const bool branch_taken_0x183f20 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x183F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F20u;
        // 0x183f24: 0x8c830040  lw          $v1, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183f20) {
            ctx->pc = 0x183F4Cu;
            goto label_183f4c;
        }
    }
    ctx->pc = 0x183F28u;
    // 0x183f28: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x183f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x183f2c: 0x0  nop
    ctx->pc = 0x183f2cu;
    // NOP
label_183f30:
    // 0x183f30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x183f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x183f34: 0xa4660004  sh          $a2, 0x4($v1)
    ctx->pc = 0x183f34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x183f38: 0x0  nop
    ctx->pc = 0x183f38u;
    // NOP
    // 0x183f3c: 0x0  nop
    ctx->pc = 0x183f3cu;
    // NOP
    // 0x183f40: 0x0  nop
    ctx->pc = 0x183f40u;
    // NOP
    // 0x183f44: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x183F44u;
    {
        const bool branch_taken_0x183f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F44u;
        // 0x183f48: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183f44) {
            ctx->pc = 0x183F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183f30;
        }
    }
    ctx->pc = 0x183F4Cu;
label_183f4c:
    // 0x183f4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x183f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183f50: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x183F50u;
    {
        const bool branch_taken_0x183f50 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x183f50) {
            ctx->pc = 0x183FA8u;
            goto label_183fa8;
        }
    }
    ctx->pc = 0x183F58u;
    // 0x183f58: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x183f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x183f5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x183f5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183f60: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x183F60u;
    {
        const bool branch_taken_0x183f60 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x183F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F60u;
        // 0x183f64: 0x8c830040  lw          $v1, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183f60) {
            ctx->pc = 0x183FA8u;
            goto label_183fa8;
        }
    }
    ctx->pc = 0x183F68u;
    // 0x183f68: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x183f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x183f6c: 0x0  nop
    ctx->pc = 0x183f6cu;
    // NOP
label_183f70:
    // 0x183f70: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x183F70u;
    {
        const bool branch_taken_0x183f70 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x183F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F70u;
        // 0x183f74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183f70) {
            ctx->pc = 0x183F94u;
            goto label_183f94;
        }
    }
    ctx->pc = 0x183F78u;
label_183f78:
    // 0x183f78: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x183f78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x183f7c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x183f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x183f80: 0xa0600007  sb          $zero, 0x7($v1)
    ctx->pc = 0x183f80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x183f84: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x183f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x183f88: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x183f88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x183f8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x183F8Cu;
    {
        const bool branch_taken_0x183f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F8Cu;
        // 0x183f90: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183f8c) {
            ctx->pc = 0x183F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183f78;
        }
    }
    ctx->pc = 0x183F94u;
label_183f94:
    // 0x183f94: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x183f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x183f98: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x183f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x183f9c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x183f9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x183fa0: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x183FA0u;
    {
        const bool branch_taken_0x183fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x183fa0) {
            ctx->pc = 0x183FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183FA0u;
            // 0x183fa4: 0x8c820030  lw          $v0, 0x30($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183f70;
        }
    }
    ctx->pc = 0x183FA8u;
label_183fa8:
    // 0x183fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x183FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183FB0u;
}

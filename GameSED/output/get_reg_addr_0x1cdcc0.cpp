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

// Function: get_reg_addr
// Address: 0x1cdcc0 - 0x1cdd50
void get_reg_addr_0x1cdcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("get_reg_addr_0x1cdcc0");
#endif

    switch (ctx->pc) {
        case 0x1cdcf0u: goto label_1cdcf0;
        default: break;
    }

    ctx->pc = 0x1cdcc0u;

    // 0x1cdcc0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1cdcc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcc4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1cdcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cdcc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdcc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdccc: 0x24c703f0  addiu       $a3, $a2, 0x3F0
    ctx->pc = 0x1cdcccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1008));
    // 0x1cdcd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdcd4: 0x24a8000c  addiu       $t0, $a1, 0xC
    ctx->pc = 0x1cdcd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x1cdcd8: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x1cdcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1cdcdc: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1cdcdcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cdce0: 0x1464000f  bne         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CDCE0u;
    {
        const bool branch_taken_0x1cdce0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1CDCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCE0u;
        // 0x1cdce4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdce0) {
            ctx->pc = 0x1CDD20u;
            goto label_1cdd20;
        }
    }
    ctx->pc = 0x1CDCE8u;
    // 0x1cdce8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1cdce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcec: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cdcecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cdcf0:
    // 0x1cdcf0: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1cdcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1cdcf4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1cdcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cdcf8: 0xdc430020  ld          $v1, 0x20($v0)
    ctx->pc = 0x1cdcf8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1cdcfc: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1cdcfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1cdd00: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1cdd00u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1cdd04: 0x24c703f0  addiu       $a3, $a2, 0x3F0
    ctx->pc = 0x1cdd04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1008));
    // 0x1cdd08: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x1cdd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1cdd0c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1cdd0cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cdd10: 0x1069fff7  beq         $v1, $t1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CDD10u;
    {
        const bool branch_taken_0x1cdd10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        ctx->pc = 0x1CDD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD10u;
        // 0x1cdd14: 0x1071021  addu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd10) {
            ctx->pc = 0x1CDCF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdcf0;
        }
    }
    ctx->pc = 0x1CDD18u;
    // 0x1cdd18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cdd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdd1c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1cdd1cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1cdd20:
    // 0x1cdd20: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CDD20u;
    {
        const bool branch_taken_0x1cdd20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1CDD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD20u;
        // 0x1cdd24: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd20) {
            ctx->pc = 0x1CDD48u;
            goto label_1cdd48;
        }
    }
    ctx->pc = 0x1CDD28u;
    // 0x1cdd28: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1cdd28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1cdd2c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1cdd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cdd30: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1cdd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1cdd34: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1cdd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1cdd38: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1cdd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1cdd3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDD3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD3Cu;
        // 0x1cdd40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDD44u;
    // 0x1cdd44: 0x0  nop
    ctx->pc = 0x1cdd44u;
    // NOP
label_1cdd48:
    // 0x1cdd48: 0x8073d1a  j           func_1CF468
    ctx->pc = 0x1CDD48u;
    ctx->pc = 0x1CDD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD48u;
    // 0x1cdd4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF468u;
    abort_0x1cf468(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDD50u;
}

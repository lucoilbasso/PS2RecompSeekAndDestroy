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

// Function: _Light_Copy0__7WcWorld
// Address: 0x1ddbf8 - 0x1ddc8c
void ps2__Light_Copy0__7WcWorld_0x1ddbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__Light_Copy0__7WcWorld_0x1ddbf8");
#endif

    switch (ctx->pc) {
        case 0x1ddc28u: goto label_1ddc28;
        case 0x1ddc3cu: goto label_1ddc3c;
        default: break;
    }

    ctx->pc = 0x1ddbf8u;

    // 0x1ddbf8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1ddbf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddbfc: 0x8ce201b8  lw          $v0, 0x1B8($a3)
    ctx->pc = 0x1ddbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x1ddc00: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1DDC00u;
    {
        const bool branch_taken_0x1ddc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddc00) {
            ctx->pc = 0x1DDC84u;
            goto label_1ddc84;
        }
    }
    ctx->pc = 0x1DDC08u;
    // 0x1ddc08: 0x8ce301bc  lw          $v1, 0x1BC($a3)
    ctx->pc = 0x1ddc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
    // 0x1ddc0c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ddc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ddc10: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1ddc10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ddc14: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1DDC14u;
    {
        const bool branch_taken_0x1ddc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC14u;
        // 0x1ddc18: 0x8c690000  lw          $t1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc14) {
            ctx->pc = 0x1DDC84u;
            goto label_1ddc84;
        }
    }
    ctx->pc = 0x1DDC1Cu;
    // 0x1ddc1c: 0x25280250  addiu       $t0, $t1, 0x250
    ctx->pc = 0x1ddc1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 592));
    // 0x1ddc20: 0x8ce201bc  lw          $v0, 0x1BC($a3)
    ctx->pc = 0x1ddc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
    // 0x1ddc24: 0x0  nop
    ctx->pc = 0x1ddc24u;
    // NOP
label_1ddc28:
    // 0x1ddc28: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1ddc28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1ddc2c: 0x25250150  addiu       $a1, $t1, 0x150
    ctx->pc = 0x1ddc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 336));
    // 0x1ddc30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ddc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ddc34: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ddc34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ddc38: 0x24840150  addiu       $a0, $a0, 0x150
    ctx->pc = 0x1ddc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
label_1ddc3c:
    // 0x1ddc3c: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1ddc3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ddc40: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x1ddc40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1ddc44: 0xdcaa0010  ld          $t2, 0x10($a1)
    ctx->pc = 0x1ddc44u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1ddc48: 0xdcab0018  ld          $t3, 0x18($a1)
    ctx->pc = 0x1ddc48u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1ddc4c: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x1ddc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x1ddc50: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x1ddc50u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x1ddc54: 0xfc8a0010  sd          $t2, 0x10($a0)
    ctx->pc = 0x1ddc54u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 10));
    // 0x1ddc58: 0xfc8b0018  sd          $t3, 0x18($a0)
    ctx->pc = 0x1ddc58u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 11));
    // 0x1ddc5c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1ddc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1ddc60: 0x0  nop
    ctx->pc = 0x1ddc60u;
    // NOP
    // 0x1ddc64: 0x0  nop
    ctx->pc = 0x1ddc64u;
    // NOP
    // 0x1ddc68: 0x14a8fff4  bne         $a1, $t0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1DDC68u;
    {
        const bool branch_taken_0x1ddc68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 8));
        ctx->pc = 0x1DDC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC68u;
        // 0x1ddc6c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc68) {
            ctx->pc = 0x1DDC3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ddc3c;
        }
    }
    ctx->pc = 0x1DDC70u;
    // 0x1ddc70: 0x8ce201b8  lw          $v0, 0x1B8($a3)
    ctx->pc = 0x1ddc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x1ddc74: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ddc74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1ddc78: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1ddc78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ddc7c: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1DDC7Cu;
    {
        const bool branch_taken_0x1ddc7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ddc7c) {
            ctx->pc = 0x1DDC80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDC7Cu;
            // 0x1ddc80: 0x8ce201bc  lw          $v0, 0x1BC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ddc28;
        }
    }
    ctx->pc = 0x1DDC84u;
label_1ddc84:
    // 0x1ddc84: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDC8Cu;
}

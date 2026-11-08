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

// Function: BSCDEntGet1EntryPtr__FP15BsSCDEntControl
// Address: 0x1a8eb0 - 0x1a8f50
void BSCDEntGet1EntryPtr__FP15BsSCDEntControl_0x1a8eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BSCDEntGet1EntryPtr__FP15BsSCDEntControl_0x1a8eb0");
#endif

    switch (ctx->pc) {
        case 0x1a8ef8u: goto label_1a8ef8;
        case 0x1a8f28u: goto label_1a8f28;
        default: break;
    }

    ctx->pc = 0x1a8eb0u;

    // 0x1a8eb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a8eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a8eb4: 0x3c027ffe  lui         $v0, 0x7FFE
    ctx->pc = 0x1a8eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32766 << 16));
    // 0x1a8eb8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a8eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a8ebc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a8ebcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8ec0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8ec4: 0x2645001c  addiu       $a1, $s2, 0x1C
    ctx->pc = 0x1a8ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x1a8ec8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a8ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a8ecc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a8eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a8ed0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a8ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a8ed4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a8ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a8ed8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1a8ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a8edc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a8edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1a8ee0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1a8ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1a8ee4: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1a8ee4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a8ee8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8EE8u;
    {
        const bool branch_taken_0x1a8ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8EE8u;
        // 0x1a8eec: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ee8) {
            ctx->pc = 0x1A8F00u;
            goto label_1a8f00;
        }
    }
    ctx->pc = 0x1A8EF0u;
    // 0x1a8ef0: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A8EF0u;
    SET_GPR_U32(ctx, 31, 0x1A8EF8u);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A8EF0u, 0x1A8EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8EF8u;
label_1a8ef8:
    // 0x1a8ef8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8EF8u;
    {
        const bool branch_taken_0x1a8ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8EF8u;
        // 0x1a8efc: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ef8) {
            ctx->pc = 0x1A8F04u;
            goto label_1a8f04;
        }
    }
    ctx->pc = 0x1A8F00u;
label_1a8f00:
    // 0x1a8f00: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a8f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a8f04:
    // 0x1a8f04: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x1a8f04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1a8f08: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1a8f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a8f0c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a8f0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a8f10: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8F10u;
    {
        const bool branch_taken_0x1a8f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F10u;
        // 0x1a8f14: 0x8e440028  lw          $a0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8f10) {
            ctx->pc = 0x1A8F28u;
            goto label_1a8f28;
        }
    }
    ctx->pc = 0x1A8F18u;
    // 0x1a8f18: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a8f18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a8f1c: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1a8f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1a8f20: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A8F20u;
    SET_GPR_U32(ctx, 31, 0x1A8F28u);
    ctx->pc = 0x1A8F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8F20u;
    // 0x1a8f24: 0x24a593c8  addiu       $a1, $a1, -0x6C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A8F20u, 0x1A8F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8F28u;
label_1a8f28:
    // 0x1a8f28: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1a8f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a8f2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8f2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8f30: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1a8f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1a8f34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a8f34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8f38: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a8f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a8f3c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a8f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a8f40: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a8f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a8f44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a8f44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a8f48: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F48u;
        // 0x1a8f4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8F50u;
}

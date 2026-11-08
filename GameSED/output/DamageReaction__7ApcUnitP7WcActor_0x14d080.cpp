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

// Function: DamageReaction__7ApcUnitP7WcActor
// Address: 0x14d080 - 0x14d0e8
void DamageReaction__7ApcUnitP7WcActor_0x14d080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DamageReaction__7ApcUnitP7WcActor_0x14d080");
#endif

    switch (ctx->pc) {
        case 0x14d0dcu: goto label_14d0dc;
        default: break;
    }

    ctx->pc = 0x14d080u;

    // 0x14d080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d084: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x14d084u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d088: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d08c: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x14d08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x14d090: 0x3042c800  andi        $v0, $v0, 0xC800
    ctx->pc = 0x14d090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)51200);
    // 0x14d094: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D094u;
    {
        const bool branch_taken_0x14d094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D094u;
        // 0x14d098: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d094) {
            ctx->pc = 0x14D0ACu;
            goto label_14d0ac;
        }
    }
    ctx->pc = 0x14D09Cu;
    // 0x14d09c: 0x8ce20184  lw          $v0, 0x184($a3)
    ctx->pc = 0x14d09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x14d0a0: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x14d0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x14d0a4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14D0A4u;
    {
        const bool branch_taken_0x14d0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d0a4) {
            ctx->pc = 0x14D0B0u;
            goto label_14d0b0;
        }
    }
    ctx->pc = 0x14D0ACu;
label_14d0ac:
    // 0x14d0ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14d0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14d0b0:
    // 0x14d0b0: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x14D0B0u;
    {
        const bool branch_taken_0x14d0b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D0B0u;
        // 0x14d0b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d0b0) {
            ctx->pc = 0x14D0E0u;
            goto label_14d0e0;
        }
    }
    ctx->pc = 0x14D0B8u;
    // 0x14d0b8: 0x8ce50178  lw          $a1, 0x178($a3)
    ctx->pc = 0x14d0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 376)));
    // 0x14d0bc: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14D0BCu;
    {
        const bool branch_taken_0x14d0bc = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x14d0bc) {
            ctx->pc = 0x14D0E0u;
            goto label_14d0e0;
        }
    }
    ctx->pc = 0x14D0C4u;
    // 0x14d0c4: 0x8ce20174  lw          $v0, 0x174($a3)
    ctx->pc = 0x14d0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
    // 0x14d0c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D0C8u;
    {
        const bool branch_taken_0x14d0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D0C8u;
        // 0x14d0cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d0c8) {
            ctx->pc = 0x14D0E0u;
            goto label_14d0e0;
        }
    }
    ctx->pc = 0x14D0D0u;
    // 0x14d0d0: 0x8ce801b4  lw          $t0, 0x1B4($a3)
    ctx->pc = 0x14d0d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x14d0d4: 0xc041228  jal         func_1048A0
    ctx->pc = 0x14D0D4u;
    SET_GPR_U32(ctx, 31, 0x14D0DCu);
    ctx->pc = 0x14D0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D0D4u;
    // 0x14d0d8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x14D0D4u, 0x14D0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D0DCu;
label_14d0dc:
    // 0x14d0dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14d0e0:
    // 0x14d0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x14D0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D0E0u;
        // 0x14d0e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D0E8u;
}

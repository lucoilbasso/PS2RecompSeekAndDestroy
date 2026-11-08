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

// Function: Cmd_ACTOR_START_Entry__FP15BsSCDEntControl
// Address: 0x138c60 - 0x138cc0
void Cmd_ACTOR_START_Entry__FP15BsSCDEntControl_0x138c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_ACTOR_START_Entry__FP15BsSCDEntControl_0x138c60");
#endif

    switch (ctx->pc) {
        case 0x138cacu: goto label_138cac;
        case 0x138cb4u: goto label_138cb4;
        default: break;
    }

    ctx->pc = 0x138c60u;

    // 0x138c60: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x138c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x138c64: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x138c64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x138c68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138c6c: 0x24040118  addiu       $a0, $zero, 0x118
    ctx->pc = 0x138c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x138c70: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x138c70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x138c74: 0x8c670040  lw          $a3, 0x40($v1)
    ctx->pc = 0x138c74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x138c78: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x138c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x138c7c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x138c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x138c80: 0x1444000a  bne         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x138C80u;
    {
        const bool branch_taken_0x138c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x138c80) {
            ctx->pc = 0x138CACu;
            goto label_138cac;
        }
    }
    ctx->pc = 0x138C88u;
    // 0x138c88: 0x8ce50178  lw          $a1, 0x178($a3)
    ctx->pc = 0x138c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 376)));
    // 0x138c8c: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x138C8Cu;
    {
        const bool branch_taken_0x138c8c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x138c8c) {
            ctx->pc = 0x138CACu;
            goto label_138cac;
        }
    }
    ctx->pc = 0x138C94u;
    // 0x138c94: 0x8ce20174  lw          $v0, 0x174($a3)
    ctx->pc = 0x138c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
    // 0x138c98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x138C98u;
    {
        const bool branch_taken_0x138c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C98u;
        // 0x138c9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c98) {
            ctx->pc = 0x138CACu;
            goto label_138cac;
        }
    }
    ctx->pc = 0x138CA0u;
    // 0x138ca0: 0x8ce801b4  lw          $t0, 0x1B4($a3)
    ctx->pc = 0x138ca0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x138ca4: 0xc041228  jal         func_1048A0
    ctx->pc = 0x138CA4u;
    SET_GPR_U32(ctx, 31, 0x138CACu);
    ctx->pc = 0x138CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138CA4u;
    // 0x138ca8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x138CA4u, 0x138CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138CACu;
label_138cac:
    // 0x138cac: 0xc0417d0  jal         func_105F40
    ctx->pc = 0x138CACu;
    SET_GPR_U32(ctx, 31, 0x138CB4u);
    ctx->pc = 0x105F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F40u, 0x138CACu, 0x138CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138CB4u;
label_138cb4:
    // 0x138cb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x138CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138CB8u;
        // 0x138cbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138CC0u;
}

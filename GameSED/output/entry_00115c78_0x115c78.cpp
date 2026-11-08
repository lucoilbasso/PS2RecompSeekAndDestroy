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

// Function: entry_00115c78
// Address: 0x115c78 - 0x115cb8
void entry_00115c78_0x115c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115c78_0x115c78");
#endif

    switch (ctx->pc) {
        case 0x115c94u: goto label_115c94;
        default: break;
    }

    ctx->pc = 0x115c78u;

label_115c78:
    // 0x115c78: 0x3270ffff  andi        $s0, $s3, 0xFFFF
    ctx->pc = 0x115c78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_115c7c:
    // 0x115c7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x115c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_115c80:
    // 0x115c80: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x115c80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
label_115c84:
    // 0x115c84: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x115c84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_115c88:
    // 0x115c88: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x115c88u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
label_115c8c:
    // 0x115c8c: 0xc045360  jal         func_114D80
label_115c90:
    if (ctx->pc == 0x115C90u) {
        ctx->pc = 0x115C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C8Cu;
        // 0x115c90: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115C94u;
        goto label_115c94;
    }
    ctx->pc = 0x115C8Cu;
    SET_GPR_U32(ctx, 31, 0x115C94u);
    ctx->pc = 0x115C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115C8Cu;
    // 0x115c90: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x115C8Cu, 0x115C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115C94u;
label_115c94:
    // 0x115c94: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x115c94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_115c98:
    // 0x115c98: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_115c9c:
    if (ctx->pc == 0x115C9Cu) {
        ctx->pc = 0x115C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C98u;
        // 0x115c9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115CA0u;
        goto label_115ca0;
    }
    ctx->pc = 0x115C98u;
    {
        const bool branch_taken_0x115c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C98u;
        // 0x115c9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c98) {
            ctx->pc = 0x115D0Cu;
            return;
        }
    }
    ctx->pc = 0x115CA0u;
label_115ca0:
    // 0x115ca0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x115ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_115ca4:
    // 0x115ca4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x115ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_115ca8:
    // 0x115ca8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x115ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_115cac:
    // 0x115cac: 0x8c6344d0  lw          $v1, 0x44D0($v1)
    ctx->pc = 0x115cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17616)));
label_115cb0:
    // 0x115cb0: 0x600008  jr          $v1
label_115cb4:
    if (ctx->pc == 0x115CB4u) {
        ctx->pc = 0x115CB8u;
        goto label_fallthrough_0x115cb0;
    }
    ctx->pc = 0x115CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115CB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x115cb0:
    ctx->pc = 0x115CB8u;
}

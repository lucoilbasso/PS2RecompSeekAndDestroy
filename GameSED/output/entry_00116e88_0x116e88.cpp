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

// Function: entry_00116e88
// Address: 0x116e88 - 0x116ec8
void entry_00116e88_0x116e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116e88_0x116e88");
#endif

    switch (ctx->pc) {
        case 0x116ea0u: goto label_116ea0;
        default: break;
    }

    ctx->pc = 0x116e88u;

label_116e88:
    // 0x116e88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x116e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_116e8c:
    // 0x116e8c: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x116e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
label_116e90:
    // 0x116e90: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x116e90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_116e94:
    // 0x116e94: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x116e94u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
label_116e98:
    // 0x116e98: 0xc045360  jal         func_114D80
label_116e9c:
    if (ctx->pc == 0x116E9Cu) {
        ctx->pc = 0x116E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E98u;
        // 0x116e9c: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116EA0u;
        goto label_116ea0;
    }
    ctx->pc = 0x116E98u;
    SET_GPR_U32(ctx, 31, 0x116EA0u);
    ctx->pc = 0x116E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116E98u;
    // 0x116e9c: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x116E98u, 0x116EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116EA0u;
label_116ea0:
    // 0x116ea0: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x116ea0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_116ea4:
    // 0x116ea4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_116ea8:
    if (ctx->pc == 0x116EA8u) {
        ctx->pc = 0x116EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116EA4u;
        // 0x116ea8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116EACu;
        goto label_116eac;
    }
    ctx->pc = 0x116EA4u;
    {
        const bool branch_taken_0x116ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116EA4u;
        // 0x116ea8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ea4) {
            ctx->pc = 0x116F1Cu;
            return;
        }
    }
    ctx->pc = 0x116EACu;
label_116eac:
    // 0x116eac: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x116eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_116eb0:
    // 0x116eb0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x116eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_116eb4:
    // 0x116eb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x116eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_116eb8:
    // 0x116eb8: 0x8c6345c0  lw          $v1, 0x45C0($v1)
    ctx->pc = 0x116eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17856)));
label_116ebc:
    // 0x116ebc: 0x600008  jr          $v1
label_116ec0:
    if (ctx->pc == 0x116EC0u) {
        ctx->pc = 0x116EC4u;
        goto label_116ec4;
    }
    ctx->pc = 0x116EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116EBCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x116EC4u;
label_116ec4:
    // 0x116ec4: 0x0  nop
    ctx->pc = 0x116ec4u;
    // NOP
    ctx->pc = 0x116ec8u;
}

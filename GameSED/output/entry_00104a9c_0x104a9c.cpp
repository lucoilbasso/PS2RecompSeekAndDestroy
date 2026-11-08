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

// Function: entry_00104a9c
// Address: 0x104a9c - 0x104ae0
void entry_00104a9c_0x104a9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104a9c_0x104a9c");
#endif

    switch (ctx->pc) {
        case 0x104aa4u: goto label_104aa4;
        default: break;
    }

    ctx->pc = 0x104a9cu;

    // 0x104a9c: 0xc068086  jal         func_1A0218
    ctx->pc = 0x104A9Cu;
    SET_GPR_U32(ctx, 31, 0x104AA4u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x104A9Cu, 0x104AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104AA4u;
label_104aa4:
    // 0x104aa4: 0x8f8388a0  lw          $v1, -0x7760($gp)
    ctx->pc = 0x104aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936736)));
    // 0x104aa8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x104aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x104aac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x104aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x104ab0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x104AB0u;
    {
        const bool branch_taken_0x104ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104ab0) {
            ctx->pc = 0x104AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104AB0u;
            // 0x104ab4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104AE0u;
            return;
        }
    }
    ctx->pc = 0x104AB8u;
    // 0x104ab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104abc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104abcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104ac0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x104ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x104ac4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x104ac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x104ac8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x104ac8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104acc: 0x24a52010  addiu       $a1, $a1, 0x2010
    ctx->pc = 0x104accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8208));
    // 0x104ad0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x104ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x104ad4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x104ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x104ad8: 0x8068186  j           func_1A0618
    ctx->pc = 0x104AD8u;
    ctx->pc = 0x104ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104AD8u;
    // 0x104adc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x104AE0u;
}

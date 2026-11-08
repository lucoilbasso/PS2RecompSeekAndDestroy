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

// Function: ApVwEntGetUnitLocalPos__FP15BsSCDEntControlP7WcActor
// Address: 0x112a80 - 0x112aec
void ApVwEntGetUnitLocalPos__FP15BsSCDEntControlP7WcActor_0x112a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApVwEntGetUnitLocalPos__FP15BsSCDEntControlP7WcActor_0x112a80");
#endif

    switch (ctx->pc) {
        case 0x112aacu: goto label_112aac;
        case 0x112ad8u: goto label_112ad8;
        default: break;
    }

    ctx->pc = 0x112a80u;

    // 0x112a80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x112a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x112a84: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x112a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x112a88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x112a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x112a8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x112a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x112a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x112a94: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x112a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x112a98: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x112a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x112a9c: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x112A9Cu;
    {
        const bool branch_taken_0x112a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x112a9c) {
            ctx->pc = 0x112AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112A9Cu;
            // 0x112aa0: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112AC8u;
            goto label_112ac8;
        }
    }
    ctx->pc = 0x112AA4u;
    // 0x112aa4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x112AA4u;
    SET_GPR_U32(ctx, 31, 0x112AACu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x112AA4u, 0x112AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112AACu;
label_112aac:
    // 0x112aac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112ab0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x112ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x112ab4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x112ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112ab8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x112ab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112abc: 0x805328a  j           func_14CA28
    ctx->pc = 0x112ABCu;
    ctx->pc = 0x112AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112ABCu;
    // 0x112ac0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CA28u;
    ApUnitInqOptionPos__FP7ApcUniti_0x14ca28(rdram, ctx, runtime); return;
    ctx->pc = 0x112AC4u;
    // 0x112ac4: 0x0  nop
    ctx->pc = 0x112ac4u;
    // NOP
label_112ac8:
    // 0x112ac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112acc: 0x24a53ea0  addiu       $a1, $a1, 0x3EA0
    ctx->pc = 0x112accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16032));
    // 0x112ad0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x112AD0u;
    SET_GPR_U32(ctx, 31, 0x112AD8u);
    ctx->pc = 0x112AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112AD0u;
    // 0x112ad4: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x112AD0u, 0x112AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112AD8u;
label_112ad8:
    // 0x112ad8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x112ad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112adc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x112adcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112ae0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x112ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x112ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x112AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112AE4u;
        // 0x112ae8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112AECu;
}

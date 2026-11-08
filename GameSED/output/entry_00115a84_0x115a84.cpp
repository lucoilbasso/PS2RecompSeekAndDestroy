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

// Function: entry_00115a84
// Address: 0x115a84 - 0x115ae8
void entry_00115a84_0x115a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115a84_0x115a84");
#endif

    switch (ctx->pc) {
        case 0x115aa4u: goto label_115aa4;
        case 0x115ab8u: goto label_115ab8;
        default: break;
    }

    ctx->pc = 0x115a84u;

    // 0x115a84: 0x118203  sra         $s0, $s1, 8
    ctx->pc = 0x115a84u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 8));
    // 0x115a88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x115a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115a8c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x115a8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x115a90: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x115a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x115a94: 0x2421c0c0  addiu       $at, $at, -0x3F40
    ctx->pc = 0x115a94u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294951104));
    // 0x115a98: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x115a98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x115a9c: 0xc041882  jal         func_106208
    ctx->pc = 0x115A9Cu;
    SET_GPR_U32(ctx, 31, 0x115AA4u);
    ctx->pc = 0x115AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115A9Cu;
    // 0x115aa0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x115A9Cu, 0x115AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115AA4u;
label_115aa4:
    // 0x115aa4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x115aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x115aa8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x115aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x115aac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x115aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x115ab0: 0xc041882  jal         func_106208
    ctx->pc = 0x115AB0u;
    SET_GPR_U32(ctx, 31, 0x115AB8u);
    ctx->pc = 0x115AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115AB0u;
    // 0x115ab4: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x115AB0u, 0x115AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115AB8u;
label_115ab8:
    // 0x115ab8: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x115ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x115abc: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x115abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x115ac0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x115ac0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x115ac4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x115ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x115ac8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x115ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115acc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x115accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x115ad0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x115ad0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x115ad4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x115ad4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115ad8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x115ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115adc: 0xac8200b0  sw          $v0, 0xB0($a0)
    ctx->pc = 0x115adcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 2));
    // 0x115ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x115AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115AE0u;
        // 0x115ae4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115AE8u;
}

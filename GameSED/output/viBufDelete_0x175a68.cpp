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

// Function: viBufDelete
// Address: 0x175a68 - 0x175ac0
void viBufDelete_0x175a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("viBufDelete_0x175a68");
#endif

    switch (ctx->pc) {
        case 0x175a80u: goto label_175a80;
        case 0x175aacu: goto label_175aac;
        default: break;
    }

    ctx->pc = 0x175a68u;

    // 0x175a68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175a6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175a70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a74: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x175a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x175a78: 0xc05d426  jal         func_175098
    ctx->pc = 0x175A78u;
    SET_GPR_U32(ctx, 31, 0x175A80u);
    ctx->pc = 0x175A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175A78u;
    // 0x175a7c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175098u, 0x175A78u, 0x175A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175A80u;
label_175a80:
    // 0x175a80: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x175a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x175a84: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x175a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x175a88: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x175a88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x175a8c: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x175a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x175a90: 0x3442b420  ori         $v0, $v0, 0xB420
    ctx->pc = 0x175a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46112);
    // 0x175a94: 0x3484b430  ori         $a0, $a0, 0xB430
    ctx->pc = 0x175a94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46128);
    // 0x175a98: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x175a98u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0));
    // 0x175a9c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x175a9cu;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 0));
    // 0x175aa0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x175aa0u;
    runtime->Store32(rdram, ctx, 0x1000B430u, GPR_U32(ctx, 0));
    // 0x175aa4: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x175AA4u;
    SET_GPR_U32(ctx, 31, 0x175AACu);
    ctx->pc = 0x175AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175AA4u;
    // 0x175aa8: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x175AA4u, 0x175AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175AACu;
label_175aac:
    // 0x175aac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x175aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175ab0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175ab0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175ab4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x175ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x175AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175AB8u;
        // 0x175abc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175AC0u;
}

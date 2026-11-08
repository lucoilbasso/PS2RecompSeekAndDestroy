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

// Function: entry_00175a20
// Address: 0x175a20 - 0x175a68
void entry_00175a20_0x175a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175a20_0x175a20");
#endif

    switch (ctx->pc) {
        case 0x175a3cu: goto label_175a3c;
        default: break;
    }

    ctx->pc = 0x175a20u;

    // 0x175a20: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x175a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x175a24: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x175a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x175a28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x175a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175a2c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x175a2cu;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 2));
    // 0x175a30: 0xae040044  sw          $a0, 0x44($s0)
    ctx->pc = 0x175a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
    // 0x175a34: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x175A34u;
    SET_GPR_U32(ctx, 31, 0x175A3Cu);
    ctx->pc = 0x175A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175A34u;
    // 0x175a38: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x175A34u, 0x175A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175A3Cu;
label_175a3c:
    // 0x175a3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x175a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175a40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175a40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175a44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x175a44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175a48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x175a48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175a4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x175a4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175a50: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x175a50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175a54: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x175a54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x175a58: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x175a58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x175a5c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x175a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x175a60: 0x3e00008  jr          $ra
    ctx->pc = 0x175A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175A60u;
        // 0x175a64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175A68u;
}

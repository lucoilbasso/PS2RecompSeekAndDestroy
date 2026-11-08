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

// Function: _sceFsIobSemaMK
// Address: 0x1b1f80 - 0x1b1fdc
void _sceFsIobSemaMK_0x1b1f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceFsIobSemaMK_0x1b1f80");
#endif

    switch (ctx->pc) {
        case 0x1b1fb8u: goto label_1b1fb8;
        case 0x1b1fc4u: goto label_1b1fc4;
        default: break;
    }

    ctx->pc = 0x1b1f80u;

    // 0x1b1f80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b1f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b1f84: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b1f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b1f88: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1b1f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1b1f8c: 0x3c100025  lui         $s0, 0x25
    ctx->pc = 0x1b1f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)37 << 16));
    // 0x1b1f90: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b1f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b1f94: 0x8e02aa10  lw          $v0, -0x55F0($s0)
    ctx->pc = 0x1b1f94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x24AA10u));
    // 0x1b1f98: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1B1F98u;
    {
        const bool branch_taken_0x1b1f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B1F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F98u;
        // 0x1b1f9c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f98) {
            ctx->pc = 0x1B1FD0u;
            goto label_1b1fd0;
        }
    }
    ctx->pc = 0x1B1FA0u;
    // 0x1b1fa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1fa4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1b1fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1b1fa8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1b1fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1b1fac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b1facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1fb0: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B1FB0u;
    SET_GPR_U32(ctx, 31, 0x1B1FB8u);
    ctx->pc = 0x1B1FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1FB0u;
    // 0x1b1fb4: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B1FB0u, 0x1B1FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1FB8u;
label_1b1fb8:
    // 0x1b1fb8: 0xae02aa10  sw          $v0, -0x55F0($s0)
    ctx->pc = 0x1b1fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294945296), GPR_U32(ctx, 2));
    // 0x1b1fbc: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B1FBCu;
    SET_GPR_U32(ctx, 31, 0x1B1FC4u);
    ctx->pc = 0x1B1FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1FBCu;
    // 0x1b1fc0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B1FBCu, 0x1B1FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1FC4u;
label_1b1fc4:
    // 0x1b1fc4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1b1fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1b1fc8: 0xac62aa14  sw          $v0, -0x55EC($v1)
    ctx->pc = 0x1b1fc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x24AA14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24AA14u, _value); } while (0);
    // 0x1b1fcc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b1fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b1fd0:
    // 0x1b1fd0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1b1fd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1FD4u;
        // 0x1b1fd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1FDCu;
}

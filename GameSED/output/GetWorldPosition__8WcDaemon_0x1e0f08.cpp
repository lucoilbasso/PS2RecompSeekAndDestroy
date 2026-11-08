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

// Function: GetWorldPosition__8WcDaemon
// Address: 0x1e0f08 - 0x1e0f60
void GetWorldPosition__8WcDaemon_0x1e0f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetWorldPosition__8WcDaemon_0x1e0f08");
#endif

    switch (ctx->pc) {
        case 0x1e0f40u: goto label_1e0f40;
        case 0x1e0f48u: goto label_1e0f48;
        default: break;
    }

    ctx->pc = 0x1e0f08u;

    // 0x1e0f08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e0f0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e0f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e0f10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e0f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e0f14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e0f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e0f18: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1e0f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1e0f1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e0f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e0f20: 0x24700020  addiu       $s0, $v1, 0x20
    ctx->pc = 0x1e0f20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1e0f24: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1e0f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0f28: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x1e0f28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1e0f2c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x1e0f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x1e0f30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0F30u;
    {
        const bool branch_taken_0x1e0f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F30u;
        // 0x1e0f34: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f30) {
            ctx->pc = 0x1E0F40u;
            goto label_1e0f40;
        }
    }
    ctx->pc = 0x1E0F38u;
    // 0x1e0f38: 0xc061920  jal         func_186480
    ctx->pc = 0x1E0F38u;
    SET_GPR_U32(ctx, 31, 0x1E0F40u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x1E0F38u, 0x1E0F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0F40u;
label_1e0f40:
    // 0x1e0f40: 0xc061422  jal         func_185088
    ctx->pc = 0x1E0F40u;
    SET_GPR_U32(ctx, 31, 0x1E0F48u);
    ctx->pc = 0x1E0F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0F40u;
    // 0x1e0f44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1E0F40u, 0x1E0F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0F48u;
label_1e0f48:
    // 0x1e0f48: 0x26220110  addiu       $v0, $s1, 0x110
    ctx->pc = 0x1e0f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1e0f4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e0f4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0f50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e0f50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0f54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0f58: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F58u;
        // 0x1e0f5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0F60u;
}

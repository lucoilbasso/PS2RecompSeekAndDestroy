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

// Function: SetTLBHandler
// Address: 0x1b8050 - 0x1b80b0
void SetTLBHandler_0x1b8050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTLBHandler_0x1b8050");
#endif

    switch (ctx->pc) {
        case 0x1b8080u: goto label_1b8080;
        case 0x1b808cu: goto label_1b808c;
        case 0x1b8098u: goto label_1b8098;
        default: break;
    }

    ctx->pc = 0x1b8050u;

    // 0x1b8050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b8050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b8054: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b8054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1b8058: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b8058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b805c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1b805cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1b8060: 0x3c10001c  lui         $s0, 0x1C
    ctx->pc = 0x1b8060u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28 << 16));
    // 0x1b8064: 0x26108580  addiu       $s0, $s0, -0x7A80
    ctx->pc = 0x1b8064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935936));
    // 0x1b8068: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b8068u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b806c: 0xac51bcf0  sw          $s1, -0x4310($v0)
    ctx->pc = 0x1b806cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x24BCF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24BCF0u, _value); } while (0);
    // 0x1b8070: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b8070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8074: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b8074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b8078: 0xc06bc44  jal         func_1AF110
    ctx->pc = 0x1B8078u;
    SET_GPR_U32(ctx, 31, 0x1B8080u);
    ctx->pc = 0x1B807Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8078u;
    // 0x1b807c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF110u, 0x1B8078u, 0x1B8080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8080u;
label_1b8080:
    // 0x1b8080: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b8080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8084: 0xc06bc44  jal         func_1AF110
    ctx->pc = 0x1B8084u;
    SET_GPR_U32(ctx, 31, 0x1B808Cu);
    ctx->pc = 0x1B8088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8084u;
    // 0x1b8088: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF110u, 0x1B8084u, 0x1B808Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B808Cu;
label_1b808c:
    // 0x1b808c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b808cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8090: 0xc06bc44  jal         func_1AF110
    ctx->pc = 0x1B8090u;
    SET_GPR_U32(ctx, 31, 0x1B8098u);
    ctx->pc = 0x1B8094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8090u;
    // 0x1b8094: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF110u, 0x1B8090u, 0x1B8098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8098u;
label_1b8098:
    // 0x1b8098: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b8098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b809c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b809cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b80a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b80a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b80a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b80a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b80a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B80A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B80ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B80A8u;
        // 0x1b80ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B80A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B80B0u;
}

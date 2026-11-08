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

// Function: Init__7WcModelPc
// Address: 0x17f5b0 - 0x17f60c
void Init__7WcModelPc_0x17f5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__7WcModelPc_0x17f5b0");
#endif

    switch (ctx->pc) {
        case 0x17f5ccu: goto label_17f5cc;
        case 0x17f5f8u: goto label_17f5f8;
        default: break;
    }

    ctx->pc = 0x17f5b0u;

    // 0x17f5b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17f5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17f5b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17f5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f5b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17f5b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f5bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17f5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17f5c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17f5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17f5c4: 0xc05f3b0  jal         func_17CEC0
    ctx->pc = 0x17F5C4u;
    SET_GPR_U32(ctx, 31, 0x17F5CCu);
    ctx->pc = 0x17F5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F5C4u;
    // 0x17f5c8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CEC0u, 0x17F5C4u, 0x17F5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F5CCu;
label_17f5cc:
    // 0x17f5cc: 0x24020305  addiu       $v0, $zero, 0x305
    ctx->pc = 0x17f5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 773));
    // 0x17f5d0: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x17f5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x17f5d4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x17f5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x17f5d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17f5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f5dc: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x17f5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x17f5e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f5e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f5e4: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x17f5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x17f5e8: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x17f5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x17f5ec: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x17f5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x17f5f0: 0xc05fd84  jal         func_17F610
    ctx->pc = 0x17F5F0u;
    SET_GPR_U32(ctx, 31, 0x17F5F8u);
    ctx->pc = 0x17F5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F5F0u;
    // 0x17f5f4: 0xae200034  sw          $zero, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F610u, 0x17F5F0u, 0x17F5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F5F8u;
label_17f5f8:
    // 0x17f5f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17f5f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f5fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17f5fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17f600: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17f600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f604: 0x3e00008  jr          $ra
    ctx->pc = 0x17F604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F604u;
        // 0x17f608: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F60Cu;
}

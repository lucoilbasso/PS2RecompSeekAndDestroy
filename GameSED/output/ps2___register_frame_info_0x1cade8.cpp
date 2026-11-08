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

// Function: __register_frame_info
// Address: 0x1cade8 - 0x1cae50
void ps2___register_frame_info_0x1cade8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___register_frame_info_0x1cade8");
#endif

    switch (ctx->pc) {
        case 0x1cae20u: goto label_1cae20;
        case 0x1cae3cu: goto label_1cae3c;
        default: break;
    }

    ctx->pc = 0x1cade8u;

    // 0x1cade8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cade8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cadec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cadecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cadf0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cadf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cadf4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cadf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cadf8: 0x3c110025  lui         $s1, 0x25
    ctx->pc = 0x1cadf8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)37 << 16));
    // 0x1cadfc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cadfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cae00: 0x2631aa44  addiu       $s1, $s1, -0x55BC
    ctx->pc = 0x1cae00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945348));
    // 0x1cae04: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x1cae04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x1cae08: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cae08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1cae0c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1cae0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1cae10: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1cae10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1cae14: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1cae14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1cae18: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1CAE18u;
    SET_GPR_U32(ctx, 31, 0x1CAE20u);
    ctx->pc = 0x1CAE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE18u;
    // 0x1cae1c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1CAE18u, 0x1CAE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE20u;
label_1cae20:
    // 0x1cae20: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1cae20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1cae24: 0x24630460  addiu       $v1, $v1, 0x460
    ctx->pc = 0x1cae24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1120));
    // 0x1cae28: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1cae28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cae2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x410460u));
    // 0x1cae30: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1cae30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1cae34: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1CAE34u;
    SET_GPR_U32(ctx, 31, 0x1CAE3Cu);
    ctx->pc = 0x1CAE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE34u;
    // 0x1cae38: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1CAE34u, 0x1CAE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE3Cu;
label_1cae3c:
    // 0x1cae3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cae3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cae40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cae40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cae44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cae44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cae48: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE48u;
        // 0x1cae4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAE50u;
}

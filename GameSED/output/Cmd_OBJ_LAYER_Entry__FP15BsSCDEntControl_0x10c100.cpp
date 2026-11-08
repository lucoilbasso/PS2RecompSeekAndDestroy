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

// Function: Cmd_OBJ_LAYER_Entry__FP15BsSCDEntControl
// Address: 0x10c100 - 0x10c14c
void Cmd_OBJ_LAYER_Entry__FP15BsSCDEntControl_0x10c100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_OBJ_LAYER_Entry__FP15BsSCDEntControl_0x10c100");
#endif

    switch (ctx->pc) {
        case 0x10c128u: goto label_10c128;
        case 0x10c134u: goto label_10c134;
        default: break;
    }

    ctx->pc = 0x10c100u;

    // 0x10c100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10c100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10c104: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10c104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c108: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c10c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10c10cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c110: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10c110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10c114: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10c114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c118: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10c11c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10c120: 0xc04110c  jal         func_104430
    ctx->pc = 0x10C120u;
    SET_GPR_U32(ctx, 31, 0x10C128u);
    ctx->pc = 0x10C124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C120u;
    // 0x10c124: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10C120u, 0x10C128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C128u;
label_10c128:
    // 0x10c128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c12c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10C12Cu;
    SET_GPR_U32(ctx, 31, 0x10C134u);
    ctx->pc = 0x10C130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C12Cu;
    // 0x10c130: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10C12Cu, 0x10C134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C134u;
label_10c134:
    // 0x10c134: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x10c134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x10c138: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c13c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10c13cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c140: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c144: 0x3e00008  jr          $ra
    ctx->pc = 0x10C144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C144u;
        // 0x10c148: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C14Cu;
}

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

// Function: WPadHardWarePortOpen__Fv
// Address: 0x177ad8 - 0x177b50
void WPadHardWarePortOpen__Fv_0x177ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WPadHardWarePortOpen__Fv_0x177ad8");
#endif

    switch (ctx->pc) {
        case 0x177b00u: goto label_177b00;
        case 0x177b18u: goto label_177b18;
        case 0x177b28u: goto label_177b28;
        case 0x177b3cu: goto label_177b3c;
        default: break;
    }

    ctx->pc = 0x177ad8u;

    // 0x177ad8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x177ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x177adc: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x177adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x177ae0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177ae4: 0x2450cf80  addiu       $s0, $v0, -0x3080
    ctx->pc = 0x177ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954880));
    // 0x177ae8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x177ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177aec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177af0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x177af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x177af4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x177af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x177af8: 0xc06e316  jal         func_1B8C58
    ctx->pc = 0x177AF8u;
    SET_GPR_U32(ctx, 31, 0x177B00u);
    ctx->pc = 0x177AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177AF8u;
    // 0x177afc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8C58u, 0x177AF8u, 0x177B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177B00u;
label_177b00:
    // 0x177b00: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x177b00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177b04: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x177b04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x177b08: 0x10510003  beq         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x177B08u;
    {
        const bool branch_taken_0x177b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x177B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177B08u;
        // 0x177b0c: 0x24847918  addiu       $a0, $a0, 0x7918 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177b08) {
            ctx->pc = 0x177B18u;
            goto label_177b18;
        }
    }
    ctx->pc = 0x177B10u;
    // 0x177b10: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x177B10u;
    SET_GPR_U32(ctx, 31, 0x177B18u);
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x177B10u, 0x177B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177B18u;
label_177b18:
    // 0x177b18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x177b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177b1c: 0x26060100  addiu       $a2, $s0, 0x100
    ctx->pc = 0x177b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x177b20: 0xc06e316  jal         func_1B8C58
    ctx->pc = 0x177B20u;
    SET_GPR_U32(ctx, 31, 0x177B28u);
    ctx->pc = 0x177B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177B20u;
    // 0x177b24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8C58u, 0x177B20u, 0x177B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177B28u;
label_177b28:
    // 0x177b28: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x177b28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x177b2c: 0x10510003  beq         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x177B2Cu;
    {
        const bool branch_taken_0x177b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x177B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177B2Cu;
        // 0x177b30: 0x24847918  addiu       $a0, $a0, 0x7918 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177b2c) {
            ctx->pc = 0x177B3Cu;
            goto label_177b3c;
        }
    }
    ctx->pc = 0x177B34u;
    // 0x177b34: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x177B34u;
    SET_GPR_U32(ctx, 31, 0x177B3Cu);
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x177B34u, 0x177B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177B3Cu;
label_177b3c:
    // 0x177b3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x177b3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177b40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x177b40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177b44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x177b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177b48: 0x3e00008  jr          $ra
    ctx->pc = 0x177B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177B48u;
        // 0x177b4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177B50u;
}

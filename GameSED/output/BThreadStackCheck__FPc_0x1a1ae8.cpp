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

// Function: BThreadStackCheck__FPc
// Address: 0x1a1ae8 - 0x1a1b70
void BThreadStackCheck__FPc_0x1a1ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BThreadStackCheck__FPc_0x1a1ae8");
#endif

    switch (ctx->pc) {
        case 0x1a1afcu: goto label_1a1afc;
        case 0x1a1b14u: goto label_1a1b14;
        case 0x1a1b4cu: goto label_1a1b4c;
        case 0x1a1b60u: goto label_1a1b60;
        default: break;
    }

    ctx->pc = 0x1a1ae8u;

    // 0x1a1ae8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a1ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a1aec: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1a1aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1a1af0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1a1af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1a1af4: 0xc06bcd4  jal         func_1AF350
    ctx->pc = 0x1A1AF4u;
    SET_GPR_U32(ctx, 31, 0x1A1AFCu);
    ctx->pc = 0x1A1AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1AF4u;
    // 0x1a1af8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF350u, 0x1A1AF4u, 0x1A1AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1AFCu;
label_1a1afc:
    // 0x1a1afc: 0x8f838d08  lw          $v1, -0x72F8($gp)
    ctx->pc = 0x1a1afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937864)));
    // 0x1a1b00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a1b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1b04: 0x10430016  beq         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A1B04u;
    {
        const bool branch_taken_0x1a1b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A1B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B04u;
        // 0x1a1b08: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b04) {
            ctx->pc = 0x1A1B60u;
            goto label_1a1b60;
        }
    }
    ctx->pc = 0x1A1B0Cu;
    // 0x1a1b0c: 0xc06bcd8  jal         func_1AF360
    ctx->pc = 0x1A1B0Cu;
    SET_GPR_U32(ctx, 31, 0x1A1B14u);
    ctx->pc = 0x1AF360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF360u, 0x1A1B0Cu, 0x1A1B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B14u;
label_1a1b14:
    // 0x1a1b14: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a1b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a1b18: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x1a1b18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1a1b1c: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x1a1b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a1b20: 0x1d1020  add         $v0, $zero, $sp
    ctx->pc = 0x1a1b20u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x1a1b24: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a1b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1b28: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x1a1b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x1a1b2c: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1a1b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1a1b30: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a1b30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1b34: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1a1b34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a1b38: 0x24849110  addiu       $a0, $a0, -0x6EF0
    ctx->pc = 0x1a1b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938896));
    // 0x1a1b3c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A1B3Cu;
    {
        const bool branch_taken_0x1a1b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B3Cu;
        // 0x1a1b40: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b3c) {
            ctx->pc = 0x1A1B60u;
            goto label_1a1b60;
        }
    }
    ctx->pc = 0x1A1B44u;
    // 0x1a1b44: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1A1B44u;
    SET_GPR_U32(ctx, 31, 0x1A1B4Cu);
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1A1B44u, 0x1A1B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B4Cu;
label_1a1b4c:
    // 0x1a1b4c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a1b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a1b50: 0x24a59138  addiu       $a1, $a1, -0x6EC8
    ctx->pc = 0x1a1b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938936));
    // 0x1a1b54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a1b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1b58: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A1B58u;
    SET_GPR_U32(ctx, 31, 0x1A1B60u);
    ctx->pc = 0x1A1B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1B58u;
    // 0x1a1b5c: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A1B58u, 0x1A1B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B60u;
label_1a1b60:
    // 0x1a1b60: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1a1b60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a1b64: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1a1b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a1b68: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B68u;
        // 0x1a1b6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1B70u;
}

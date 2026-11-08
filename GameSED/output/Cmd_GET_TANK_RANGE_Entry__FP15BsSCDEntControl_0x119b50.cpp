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

// Function: Cmd_GET_TANK_RANGE_Entry__FP15BsSCDEntControl
// Address: 0x119b50 - 0x119bbc
void Cmd_GET_TANK_RANGE_Entry__FP15BsSCDEntControl_0x119b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_GET_TANK_RANGE_Entry__FP15BsSCDEntControl_0x119b50");
#endif

    switch (ctx->pc) {
        case 0x119b68u: goto label_119b68;
        case 0x119b8cu: goto label_119b8c;
        case 0x119ba8u: goto label_119ba8;
        default: break;
    }

    ctx->pc = 0x119b50u;

    // 0x119b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x119b54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119b58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x119b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x119b5c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x119b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x119b60: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x119B60u;
    SET_GPR_U32(ctx, 31, 0x119B68u);
    ctx->pc = 0x119B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119B60u;
    // 0x119b64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x119B60u, 0x119B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119B68u;
label_119b68:
    // 0x119b68: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x119b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x119b6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x119b6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b70: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x119b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x119b74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b78: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x119b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x119b7c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x119B7Cu;
    {
        const bool branch_taken_0x119b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x119B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119B7Cu;
        // 0x119b80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b7c) {
            ctx->pc = 0x119B90u;
            goto label_119b90;
        }
    }
    ctx->pc = 0x119B84u;
    // 0x119b84: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x119B84u;
    SET_GPR_U32(ctx, 31, 0x119B8Cu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x119B84u, 0x119B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119B8Cu;
label_119b8c:
    // 0x119b8c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x119b8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119b90:
    // 0x119b90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b94: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x119b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b98: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x119b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x119b9c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x119b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x119ba0: 0xc0458a4  jal         func_116290
    ctx->pc = 0x119BA0u;
    SET_GPR_U32(ctx, 31, 0x119BA8u);
    ctx->pc = 0x119BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119BA0u;
    // 0x119ba4: 0xac4000b0  sw          $zero, 0xB0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116290u, 0x119BA0u, 0x119BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119BA8u;
label_119ba8:
    // 0x119ba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119bac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x119bacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x119bb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x119bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x119BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119BB4u;
        // 0x119bb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119BBCu;
}

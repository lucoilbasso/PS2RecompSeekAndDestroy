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

// Function: Cmd_GET_TANK_STATUS_Entry__FP15BsSCDEntControl
// Address: 0x116bf0 - 0x116c90
void Cmd_GET_TANK_STATUS_Entry__FP15BsSCDEntControl_0x116bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_GET_TANK_STATUS_Entry__FP15BsSCDEntControl_0x116bf0");
#endif

    switch (ctx->pc) {
        case 0x116c0cu: goto label_116c0c;
        case 0x116c18u: goto label_116c18;
        case 0x116c50u: goto label_116c50;
        case 0x116c64u: goto label_116c64;
        default: break;
    }

    ctx->pc = 0x116bf0u;

    // 0x116bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x116bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x116bf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x116bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x116bf8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x116bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x116bfc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x116bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x116c00: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x116c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x116c04: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x116C04u;
    SET_GPR_U32(ctx, 31, 0x116C0Cu);
    ctx->pc = 0x116C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116C04u;
    // 0x116c08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x116C04u, 0x116C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C0Cu;
label_116c0c:
    // 0x116c0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c10: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x116C10u;
    SET_GPR_U32(ctx, 31, 0x116C18u);
    ctx->pc = 0x116C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116C10u;
    // 0x116c14: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x116C10u, 0x116C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C18u;
label_116c18:
    // 0x116c18: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x116c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x116c1c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x116c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x116c20: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x116c20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c24: 0x240224d0  addiu       $v0, $zero, 0x24D0
    ctx->pc = 0x116c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x116c28: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x116c28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x116c2c: 0x2223818  mult        $a3, $s1, $v0
    ctx->pc = 0x116c2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x116c30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x116c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x116c34: 0x14460004  bne         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x116C34u;
    {
        const bool branch_taken_0x116c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x116C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C34u;
        // 0x116c38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c34) {
            ctx->pc = 0x116C48u;
            goto label_116c48;
        }
    }
    ctx->pc = 0x116C3Cu;
    // 0x116c3c: 0x3c11001f  lui         $s1, 0x1F
    ctx->pc = 0x116c3cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)31 << 16));
    // 0x116c40: 0x2278821  addu        $s1, $s1, $a3
    ctx->pc = 0x116c40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x116c44: 0x8e31d528  lw          $s1, -0x2AD8($s1)
    ctx->pc = 0x116c44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956328)));
label_116c48:
    // 0x116c48: 0xc041882  jal         func_106208
    ctx->pc = 0x116C48u;
    SET_GPR_U32(ctx, 31, 0x116C50u);
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x116C48u, 0x116C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C50u;
label_116c50:
    // 0x116c50: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x116c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x116c54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x116c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x116c58: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x116c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x116c5c: 0xc041882  jal         func_106208
    ctx->pc = 0x116C5Cu;
    SET_GPR_U32(ctx, 31, 0x116C64u);
    ctx->pc = 0x116C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116C5Cu;
    // 0x116c60: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x116C5Cu, 0x116C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C64u;
label_116c64:
    // 0x116c64: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x116c64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x116c68: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x116c68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x116c6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x116c6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116c70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x116c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x116c74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116c74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116c78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x116c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x116c7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x116c7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x116c80: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x116c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x116c84: 0xac8200b0  sw          $v0, 0xB0($a0)
    ctx->pc = 0x116c84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 2));
    // 0x116c88: 0x3e00008  jr          $ra
    ctx->pc = 0x116C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C88u;
        // 0x116c8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116C90u;
}

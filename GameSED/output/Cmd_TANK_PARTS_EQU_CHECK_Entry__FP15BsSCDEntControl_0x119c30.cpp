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

// Function: Cmd_TANK_PARTS_EQU_CHECK_Entry__FP15BsSCDEntControl
// Address: 0x119c30 - 0x119c8c
void Cmd_TANK_PARTS_EQU_CHECK_Entry__FP15BsSCDEntControl_0x119c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_TANK_PARTS_EQU_CHECK_Entry__FP15BsSCDEntControl_0x119c30");
#endif

    switch (ctx->pc) {
        case 0x119c48u: goto label_119c48;
        case 0x119c54u: goto label_119c54;
        case 0x119c70u: goto label_119c70;
        default: break;
    }

    ctx->pc = 0x119c30u;

    // 0x119c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x119c34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x119c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x119c38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119c3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x119c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x119c40: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x119C40u;
    SET_GPR_U32(ctx, 31, 0x119C48u);
    ctx->pc = 0x119C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119C40u;
    // 0x119c44: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x119C40u, 0x119C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119C48u;
label_119c48:
    // 0x119c48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c4c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x119C4Cu;
    SET_GPR_U32(ctx, 31, 0x119C54u);
    ctx->pc = 0x119C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119C4Cu;
    // 0x119c50: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x119C4Cu, 0x119C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119C54u;
label_119c54:
    // 0x119c54: 0x240324d0  addiu       $v1, $zero, 0x24D0
    ctx->pc = 0x119c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x119c58: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x119c58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x119c5c: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x119c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x119c60: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x119c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x119c64: 0x8c84d528  lw          $a0, -0x2AD8($a0)
    ctx->pc = 0x119c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294956328)));
    // 0x119c68: 0xc0458fc  jal         func_1163F0
    ctx->pc = 0x119C68u;
    SET_GPR_U32(ctx, 31, 0x119C70u);
    ctx->pc = 0x119C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119C68u;
    // 0x119c6c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1163F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1163F0u, 0x119C68u, 0x119C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119C70u;
label_119c70:
    // 0x119c70: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x119c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x119c74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119c74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119c78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x119c78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x119c7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x119c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119c80: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x119c80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2400B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2400B0u, _value); } while (0);
    // 0x119c84: 0x3e00008  jr          $ra
    ctx->pc = 0x119C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119C84u;
        // 0x119c88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119C8Cu;
}

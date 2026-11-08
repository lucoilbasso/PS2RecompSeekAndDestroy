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

// Function: _sdrCBThread
// Address: 0x1c4ce8 - 0x1c4d4c
void _sdrCBThread_0x1c4ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sdrCBThread_0x1c4ce8");
#endif

    switch (ctx->pc) {
        case 0x1c4cf8u: goto label_1c4cf8;
        case 0x1c4d00u: goto label_1c4d00;
        case 0x1c4d0cu: goto label_1c4d0c;
        case 0x1c4d38u: goto label_1c4d38;
        case 0x1c4d40u: goto label_1c4d40;
        default: break;
    }

    ctx->pc = 0x1c4ce8u;

    // 0x1c4ce8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1c4ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1c4cec: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1c4cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1c4cf0: 0xc06c408  jal         func_1B1020
    ctx->pc = 0x1C4CF0u;
    SET_GPR_U32(ctx, 31, 0x1C4CF8u);
    ctx->pc = 0x1C4CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4CF0u;
    // 0x1c4cf4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1020u, 0x1C4CF0u, 0x1C4CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4CF8u;
label_1c4cf8:
    // 0x1c4cf8: 0xc06bcd4  jal         func_1AF350
    ctx->pc = 0x1C4CF8u;
    SET_GPR_U32(ctx, 31, 0x1C4D00u);
    ctx->pc = 0x1AF350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF350u, 0x1C4CF8u, 0x1C4D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4D00u;
label_1c4d00:
    // 0x1c4d00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c4d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4d04: 0xc06c6a4  jal         func_1B1A90
    ctx->pc = 0x1C4D04u;
    SET_GPR_U32(ctx, 31, 0x1C4D0Cu);
    ctx->pc = 0x1C4D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4D04u;
    // 0x1c4d08: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1A90u, 0x1C4D04u, 0x1C4D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4D0Cu;
label_1c4d0c:
    // 0x1c4d0c: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1c4d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1c4d10: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x1c4d10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x1c4d14: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1c4d14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1c4d18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c4d18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4d1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c4d1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4d20: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x1c4d20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4d24: 0x24c64d50  addiu       $a2, $a2, 0x4D50
    ctx->pc = 0x1c4d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19792));
    // 0x1c4d28: 0x24e7ee00  addiu       $a3, $a3, -0x1200
    ctx->pc = 0x1c4d28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962688));
    // 0x1c4d2c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c4d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c4d30: 0xc06c6ca  jal         func_1B1B28
    ctx->pc = 0x1C4D30u;
    SET_GPR_U32(ctx, 31, 0x1C4D38u);
    ctx->pc = 0x1C4D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4D30u;
    // 0x1c4d34: 0x34a50704  ori         $a1, $a1, 0x704 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1796);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1B28u, 0x1C4D30u, 0x1C4D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4D38u;
label_1c4d38:
    // 0x1c4d38: 0xc06c7d0  jal         func_1B1F40
    ctx->pc = 0x1C4D38u;
    SET_GPR_U32(ctx, 31, 0x1C4D40u);
    ctx->pc = 0x1C4D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4D38u;
    // 0x1c4d3c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1F40u, 0x1C4D38u, 0x1C4D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4D40u;
label_1c4d40:
    // 0x1c4d40: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1c4d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c4d44: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D44u;
        // 0x1c4d48: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4D4Cu;
}

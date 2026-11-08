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

// Function: caseD_1e
// Address: 0x165f28 - 0x165f68
void caseD_1e_0x165f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1e_0x165f28");
#endif

    switch (ctx->pc) {
        case 0x165f3cu: goto label_165f3c;
        case 0x165f58u: goto label_165f58;
        default: break;
    }

    ctx->pc = 0x165f28u;

    // 0x165f28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165f2c: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x165f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x165f30: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x165f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x165f34: 0xc0596d8  jal         func_165B60
    ctx->pc = 0x165F34u;
    SET_GPR_U32(ctx, 31, 0x165F3Cu);
    ctx->pc = 0x165F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165F34u;
    // 0x165f38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165B60u, 0x165F34u, 0x165F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165F3Cu;
label_165f3c:
    // 0x165f3c: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x165f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
    // 0x165f40: 0x544000bb  bnel        $v0, $zero, . + 4 + (0xBB << 2)
    ctx->pc = 0x165F40u;
    {
        const bool branch_taken_0x165f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165f40) {
            ctx->pc = 0x165F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165F40u;
            // 0x165f44: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x166230u;
            return;
        }
    }
    ctx->pc = 0x165F48u;
    // 0x165f48: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x165f48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x165f4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x165f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165f50: 0xc068584  jal         func_1A1610
    ctx->pc = 0x165F50u;
    SET_GPR_U32(ctx, 31, 0x165F58u);
    ctx->pc = 0x165F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165F50u;
    // 0x165f54: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x165F50u, 0x165F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165F58u;
label_165f58:
    // 0x165f58: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x165f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
    // 0x165f5c: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x165F5Cu;
    {
        const bool branch_taken_0x165f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F5Cu;
        // 0x165f60: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165f5c) {
            ctx->pc = 0x166230u;
            return;
        }
    }
    ctx->pc = 0x165F64u;
    // 0x165f64: 0x0  nop
    ctx->pc = 0x165f64u;
    // NOP
    ctx->pc = 0x165f68u;
}

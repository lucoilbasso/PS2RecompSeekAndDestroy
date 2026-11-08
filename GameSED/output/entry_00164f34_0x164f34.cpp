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

// Function: entry_00164f34
// Address: 0x164f34 - 0x164f68
void entry_00164f34_0x164f34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164f34_0x164f34");
#endif

    ctx->pc = 0x164f34u;

    // 0x164f34: 0x0  nop
    ctx->pc = 0x164f34u;
    // NOP
    // 0x164f38: 0x0  nop
    ctx->pc = 0x164f38u;
    // NOP
    // 0x164f3c: 0x481fff8  bgez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x164F3Cu;
    {
        const bool branch_taken_0x164f3c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x164F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F3Cu;
        // 0x164f40: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164f3c) {
            ctx->pc = 0x164F20u;
            return;
        }
    }
    ctx->pc = 0x164F44u;
    // 0x164f44: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x164f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
    // 0x164f48: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x164f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x164f4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x164f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x164f50: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x164F50u;
    {
        const bool branch_taken_0x164f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F50u;
        // 0x164f54: 0xae020c04  sw          $v0, 0xC04($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3076), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164f50) {
            ctx->pc = 0x164F68u;
            return;
        }
    }
    ctx->pc = 0x164F58u;
    // 0x164f58: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x164f58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x164f5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x164f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164f60: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x164F60u;
    SET_GPR_U32(ctx, 31, 0x164F68u);
    ctx->pc = 0x164F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164F60u;
    // 0x164f64: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x164F60u, 0x164F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164F68u;
}

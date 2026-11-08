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

// Function: entry_0014bd20
// Address: 0x14bd20 - 0x14bd68
void entry_0014bd20_0x14bd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bd20_0x14bd20");
#endif

    switch (ctx->pc) {
        case 0x14bd38u: goto label_14bd38;
        case 0x14bd44u: goto label_14bd44;
        case 0x14bd5cu: goto label_14bd5c;
        default: break;
    }

    ctx->pc = 0x14bd20u;

    // 0x14bd20: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x14bd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x14bd24: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x14bd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14bd28: 0x5043000f  beql        $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x14BD28u;
    {
        const bool branch_taken_0x14bd28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14bd28) {
            ctx->pc = 0x14BD2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BD28u;
            // 0x14bd2c: 0x30a3ffff  andi        $v1, $a1, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BD68u;
            return;
        }
    }
    ctx->pc = 0x14BD30u;
    // 0x14bd30: 0xc06852e  jal         func_1A14B8
    ctx->pc = 0x14BD30u;
    SET_GPR_U32(ctx, 31, 0x14BD38u);
    ctx->pc = 0x1A14B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A14B8u, 0x14BD30u, 0x14BD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BD38u;
label_14bd38:
    // 0x14bd38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14bd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bd3c: 0xc06852e  jal         func_1A14B8
    ctx->pc = 0x14BD3Cu;
    SET_GPR_U32(ctx, 31, 0x14BD44u);
    ctx->pc = 0x14BD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BD3Cu;
    // 0x14bd40: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A14B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A14B8u, 0x14BD3Cu, 0x14BD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BD44u;
label_14bd44:
    // 0x14bd44: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x14bd44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x14bd48: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14bd48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bd4c: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x14bd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x14bd50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14bd50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bd54: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x14BD54u;
    SET_GPR_U32(ctx, 31, 0x14BD5Cu);
    ctx->pc = 0x14BD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BD54u;
    // 0x14bd58: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x14BD54u, 0x14BD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BD5Cu;
label_14bd5c:
    // 0x14bd5c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x14BD5Cu;
    {
        const bool branch_taken_0x14bd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD5Cu;
        // 0x14bd60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd5c) {
            ctx->pc = 0x14BE74u;
            return;
        }
    }
    ctx->pc = 0x14BD64u;
    // 0x14bd64: 0x0  nop
    ctx->pc = 0x14bd64u;
    // NOP
    ctx->pc = 0x14bd68u;
}

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

// Function: entry_0016dc5c
// Address: 0x16dc5c - 0x16dcbc
void entry_0016dc5c_0x16dc5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016dc5c_0x16dc5c");
#endif

    switch (ctx->pc) {
        case 0x16dc68u: goto label_16dc68;
        case 0x16dc80u: goto label_16dc80;
        default: break;
    }

    ctx->pc = 0x16dc5cu;

    // 0x16dc5c: 0xae0202c4  sw          $v0, 0x2C4($s0)
    ctx->pc = 0x16dc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 2));
    // 0x16dc60: 0xc05b58c  jal         func_16D630
    ctx->pc = 0x16DC60u;
    SET_GPR_U32(ctx, 31, 0x16DC68u);
    ctx->pc = 0x16DC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DC60u;
    // 0x16dc64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D630u, 0x16DC60u, 0x16DC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DC68u;
label_16dc68:
    // 0x16dc68: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x16dc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x16dc6c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x16dc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x16dc70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16dc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dc74: 0x34a50102  ori         $a1, $a1, 0x102
    ctx->pc = 0x16dc74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
    // 0x16dc78: 0xc06164c  jal         func_185930
    ctx->pc = 0x16DC78u;
    SET_GPR_U32(ctx, 31, 0x16DC80u);
    ctx->pc = 0x16DC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DC78u;
    // 0x16dc7c: 0x2451ed50  addiu       $s1, $v0, -0x12B0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x16DC78u, 0x16DC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DC80u;
label_16dc80:
    // 0x16dc80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16dc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dc84: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x16dc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x16dc88: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x16DC88u;
    {
        const bool branch_taken_0x16dc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16dc88) {
            ctx->pc = 0x16DC8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16DC88u;
            // 0x16dc8c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16DCBCu;
            return;
        }
    }
    ctx->pc = 0x16DC90u;
    // 0x16dc90: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x16dc90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16dc94: 0x11102b  sltu        $v0, $zero, $s1
    ctx->pc = 0x16dc94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x16dc98: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x16dc98u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x16dc9c: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x16dc9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x16dca0: 0xac910018  sw          $s1, 0x18($a0)
    ctx->pc = 0x16dca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 17));
    // 0x16dca4: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x16dca4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x16dca8: 0xac90001c  sw          $s0, 0x1C($a0)
    ctx->pc = 0x16dca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 16));
    // 0x16dcac: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x16dcacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x16dcb0: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x16dcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x16dcb4: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x16dcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x16dcb8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x16dcb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16dcbcu;
}

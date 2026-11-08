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

// Function: entry_001656e8
// Address: 0x1656e8 - 0x165718
void entry_001656e8_0x1656e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001656e8_0x1656e8");
#endif

    switch (ctx->pc) {
        case 0x1656f0u: goto label_1656f0;
        case 0x165710u: goto label_165710;
        default: break;
    }

    ctx->pc = 0x1656e8u;

    // 0x1656e8: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1656E8u;
    SET_GPR_U32(ctx, 31, 0x1656F0u);
    ctx->pc = 0x1656ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1656E8u;
    // 0x1656ec: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1656E8u, 0x1656F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1656F0u;
label_1656f0:
    // 0x1656f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1656f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1656f4: 0x54a00008  bnel        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1656F4u;
    {
        const bool branch_taken_0x1656f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1656f4) {
            ctx->pc = 0x1656F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1656F4u;
            // 0x1656f8: 0xaca003f0  sw          $zero, 0x3F0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 1008), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165718u;
            return;
        }
    }
    ctx->pc = 0x1656FCu;
    // 0x1656fc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1656fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x165700: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x165700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165704: 0x24a57120  addiu       $a1, $a1, 0x7120
    ctx->pc = 0x165704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28960));
    // 0x165708: 0xc068186  jal         func_1A0618
    ctx->pc = 0x165708u;
    SET_GPR_U32(ctx, 31, 0x165710u);
    ctx->pc = 0x16570Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165708u;
    // 0x16570c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x165708u, 0x165710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165710u;
label_165710:
    // 0x165710: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x165710u;
    {
        const bool branch_taken_0x165710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165710u;
        // 0x165714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165710) {
            ctx->pc = 0x165770u;
            return;
        }
    }
    ctx->pc = 0x165718u;
}

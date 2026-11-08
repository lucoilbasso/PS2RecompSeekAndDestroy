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

// Function: entry_00165c28
// Address: 0x165c28 - 0x165c64
void entry_00165c28_0x165c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165c28_0x165c28");
#endif

    switch (ctx->pc) {
        case 0x165c30u: goto label_165c30;
        case 0x165c38u: goto label_165c38;
        default: break;
    }

    ctx->pc = 0x165c28u;

    // 0x165c28: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x165C28u;
    SET_GPR_U32(ctx, 31, 0x165C30u);
    ctx->pc = 0x165C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C28u;
    // 0x165c2c: 0x24042118  addiu       $a0, $zero, 0x2118 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x165C28u, 0x165C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165C30u;
label_165c30:
    // 0x165c30: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x165C30u;
    SET_GPR_U32(ctx, 31, 0x165C38u);
    ctx->pc = 0x165C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C30u;
    // 0x165c34: 0x24040290  addiu       $a0, $zero, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x165C30u, 0x165C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165C38u;
label_165c38:
    // 0x165c38: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x165c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x165c3c: 0x2463f0d0  addiu       $v1, $v1, -0xF30
    ctx->pc = 0x165c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963408));
    // 0x165c40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x165c40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c44: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x165c44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x165c48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x165c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c4c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x165c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c50: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x165c50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c54: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x165c54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x165c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c5c: 0xc055bb0  jal         func_156EC0
    ctx->pc = 0x165C5Cu;
    SET_GPR_U32(ctx, 31, 0x165C64u);
    ctx->pc = 0x165C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C5Cu;
    // 0x165c60: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156EC0u, 0x165C5Cu, 0x165C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165C64u;
}

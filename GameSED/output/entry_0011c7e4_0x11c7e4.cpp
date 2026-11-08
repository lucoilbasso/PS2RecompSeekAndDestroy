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

// Function: entry_0011c7e4
// Address: 0x11c7e4 - 0x11c818
void entry_0011c7e4_0x11c7e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c7e4_0x11c7e4");
#endif

    switch (ctx->pc) {
        case 0x11c7f4u: goto label_11c7f4;
        case 0x11c7fcu: goto label_11c7fc;
        default: break;
    }

    ctx->pc = 0x11c7e4u;

    // 0x11c7e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11c7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11c7e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11c7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11c7ec: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x11C7ECu;
    SET_GPR_U32(ctx, 31, 0x11C7F4u);
    ctx->pc = 0x11C7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C7ECu;
    // 0x11c7f0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x11C7ECu, 0x11C7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C7F4u;
label_11c7f4:
    // 0x11c7f4: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x11C7F4u;
    SET_GPR_U32(ctx, 31, 0x11C7FCu);
    ctx->pc = 0x11C7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C7F4u;
    // 0x11c7f8: 0x3404e2c0  ori         $a0, $zero, 0xE2C0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x11C7F4u, 0x11C7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C7FCu;
label_11c7fc:
    // 0x11c7fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11c7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c800: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11c800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c804: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11c804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11c808: 0x2442e900  addiu       $v0, $v0, -0x1700
    ctx->pc = 0x11c808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961408));
    // 0x11c80c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c810: 0xc047210  jal         func_11C840
    ctx->pc = 0x11C810u;
    SET_GPR_U32(ctx, 31, 0x11C818u);
    ctx->pc = 0x11C814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C810u;
    // 0x11c814: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C840u, 0x11C810u, 0x11C818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C818u;
}

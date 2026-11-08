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

// Function: entry_001901c8
// Address: 0x1901c8 - 0x190210
void entry_001901c8_0x1901c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001901c8_0x1901c8");
#endif

    switch (ctx->pc) {
        case 0x1901dcu: goto label_1901dc;
        case 0x1901e4u: goto label_1901e4;
        case 0x190204u: goto label_190204;
        default: break;
    }

    ctx->pc = 0x1901c8u;

    // 0x1901c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1901c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1901cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1901ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1901d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1901d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1901d4: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1901D4u;
    SET_GPR_U32(ctx, 31, 0x1901DCu);
    ctx->pc = 0x1901D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1901D4u;
    // 0x1901d8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1901D4u, 0x1901DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1901DCu;
label_1901dc:
    // 0x1901dc: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1901DCu;
    SET_GPR_U32(ctx, 31, 0x1901E4u);
    ctx->pc = 0x1901E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1901DCu;
    // 0x1901e0: 0x240401e0  addiu       $a0, $zero, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1901DCu, 0x1901E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1901E4u;
label_1901e4:
    // 0x1901e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1901e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1901e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1901e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1901ec: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1901ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1901f0: 0x244203d0  addiu       $v0, $v0, 0x3D0
    ctx->pc = 0x1901f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 976));
    // 0x1901f4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1901f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1901f8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1901f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1901fc: 0xc06408c  jal         func_190230
    ctx->pc = 0x1901FCu;
    SET_GPR_U32(ctx, 31, 0x190204u);
    ctx->pc = 0x190200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1901FCu;
    // 0x190200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190230u, 0x1901FCu, 0x190204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190204u;
label_190204:
    // 0x190204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x190204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190208: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x190208u;
    SET_GPR_U32(ctx, 31, 0x190210u);
    ctx->pc = 0x19020Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190208u;
    // 0x19020c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x190208u, 0x190210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190210u;
}

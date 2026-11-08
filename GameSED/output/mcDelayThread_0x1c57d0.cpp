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

// Function: mcDelayThread
// Address: 0x1c57d0 - 0x1c5814
void mcDelayThread_0x1c57d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcDelayThread_0x1c57d0");
#endif

    switch (ctx->pc) {
        case 0x1c57f0u: goto label_1c57f0;
        case 0x1c5800u: goto label_1c5800;
        default: break;
    }

    ctx->pc = 0x1c57d0u;

    // 0x1c57d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c57d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c57d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c57d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c57d8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1c57d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1c57dc: 0x3c10001c  lui         $s0, 0x1C
    ctx->pc = 0x1c57dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28 << 16));
    // 0x1c57e0: 0x3091ffff  andi        $s1, $a0, 0xFFFF
    ctx->pc = 0x1c57e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1c57e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c57e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c57e8: 0xc06bcd4  jal         func_1AF350
    ctx->pc = 0x1C57E8u;
    SET_GPR_U32(ctx, 31, 0x1C57F0u);
    ctx->pc = 0x1C57ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C57E8u;
    // 0x1c57ec: 0x261057a8  addiu       $s0, $s0, 0x57A8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF350u, 0x1C57E8u, 0x1C57F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C57F0u;
label_1c57f0:
    // 0x1c57f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c57f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c57f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c57f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c57f8: 0xc06bc78  jal         func_1AF1E0
    ctx->pc = 0x1C57F8u;
    SET_GPR_U32(ctx, 31, 0x1C5800u);
    ctx->pc = 0x1C57FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C57F8u;
    // 0x1c57fc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF1E0u, 0x1C57F8u, 0x1C5800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5800u;
label_1c5800:
    // 0x1c5800: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c5800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c5804: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c5804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5808: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c5808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c580c: 0x806bce0  j           func_1AF380
    ctx->pc = 0x1C580Cu;
    ctx->pc = 0x1C5810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C580Cu;
    // 0x1c5810: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF380u;
    SleepThread_0x1af380(rdram, ctx, runtime); return;
    ctx->pc = 0x1C5814u;
}

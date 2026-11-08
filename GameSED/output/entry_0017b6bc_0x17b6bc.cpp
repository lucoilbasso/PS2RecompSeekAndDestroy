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

// Function: entry_0017b6bc
// Address: 0x17b6bc - 0x17b6ec
void entry_0017b6bc_0x17b6bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b6bc_0x17b6bc");
#endif

    switch (ctx->pc) {
        case 0x17b6ccu: goto label_17b6cc;
        case 0x17b6d4u: goto label_17b6d4;
        default: break;
    }

    ctx->pc = 0x17b6bcu;

    // 0x17b6bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b6c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17b6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17b6c4: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x17B6C4u;
    SET_GPR_U32(ctx, 31, 0x17B6CCu);
    ctx->pc = 0x17B6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B6C4u;
    // 0x17b6c8: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x17B6C4u, 0x17B6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B6CCu;
label_17b6cc:
    // 0x17b6cc: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x17B6CCu;
    SET_GPR_U32(ctx, 31, 0x17B6D4u);
    ctx->pc = 0x17B6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B6CCu;
    // 0x17b6d0: 0x24041810  addiu       $a0, $zero, 0x1810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x17B6CCu, 0x17B6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B6D4u;
label_17b6d4:
    // 0x17b6d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17b6d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b6d8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x17b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x17b6dc: 0x2442fad0  addiu       $v0, $v0, -0x530
    ctx->pc = 0x17b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965968));
    // 0x17b6e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b6e4: 0xc05edc4  jal         func_17B710
    ctx->pc = 0x17B6E4u;
    SET_GPR_U32(ctx, 31, 0x17B6ECu);
    ctx->pc = 0x17B6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B6E4u;
    // 0x17b6e8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B710u, 0x17B6E4u, 0x17B6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B6ECu;
}

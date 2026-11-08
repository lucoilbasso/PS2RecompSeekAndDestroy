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

// Function: entry_0019a5b4
// Address: 0x19a5b4 - 0x19a5e4
void entry_0019a5b4_0x19a5b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a5b4_0x19a5b4");
#endif

    switch (ctx->pc) {
        case 0x19a5c4u: goto label_19a5c4;
        case 0x19a5ccu: goto label_19a5cc;
        default: break;
    }

    ctx->pc = 0x19a5b4u;

    // 0x19a5b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19a5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a5b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19a5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19a5bc: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x19A5BCu;
    SET_GPR_U32(ctx, 31, 0x19A5C4u);
    ctx->pc = 0x19A5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A5BCu;
    // 0x19a5c0: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x19A5BCu, 0x19A5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A5C4u;
label_19a5c4:
    // 0x19a5c4: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x19A5C4u;
    SET_GPR_U32(ctx, 31, 0x19A5CCu);
    ctx->pc = 0x19A5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A5C4u;
    // 0x19a5c8: 0x24040170  addiu       $a0, $zero, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x19A5C4u, 0x19A5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A5CCu;
label_19a5cc:
    // 0x19a5cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19a5ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a5d0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x19a5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x19a5d4: 0x24420b50  addiu       $v0, $v0, 0xB50
    ctx->pc = 0x19a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2896));
    // 0x19a5d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a5dc: 0xc066868  jal         func_19A1A0
    ctx->pc = 0x19A5DCu;
    SET_GPR_U32(ctx, 31, 0x19A5E4u);
    ctx->pc = 0x19A5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A5DCu;
    // 0x19a5e0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A1A0u, 0x19A5DCu, 0x19A5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A5E4u;
}

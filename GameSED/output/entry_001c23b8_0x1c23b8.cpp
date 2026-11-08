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

// Function: entry_001c23b8
// Address: 0x1c23b8 - 0x1c23e4
void entry_001c23b8_0x1c23b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c23b8_0x1c23b8");
#endif

    switch (ctx->pc) {
        case 0x1c23c0u: goto label_1c23c0;
        case 0x1c23c8u: goto label_1c23c8;
        default: break;
    }

    ctx->pc = 0x1c23b8u;

    // 0x1c23b8: 0xc0709c0  jal         func_1C2700
    ctx->pc = 0x1C23B8u;
    SET_GPR_U32(ctx, 31, 0x1C23C0u);
    ctx->pc = 0x1C23BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C23B8u;
    // 0x1c23bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2700u, 0x1C23B8u, 0x1C23C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C23C0u;
label_1c23c0:
    // 0x1c23c0: 0xc0708fa  jal         func_1C23E8
    ctx->pc = 0x1C23C0u;
    SET_GPR_U32(ctx, 31, 0x1C23C8u);
    ctx->pc = 0x1C23C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C23C0u;
    // 0x1c23c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C23E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C23E8u, 0x1C23C0u, 0x1C23C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C23C8u;
label_1c23c8:
    // 0x1c23c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c23c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c23ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c23d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c23d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c23d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c23d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c23d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c23dc: 0x80709d2  j           func_1C2748
    ctx->pc = 0x1C23DCu;
    ctx->pc = 0x1C23E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C23DCu;
    // 0x1c23e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2748u;
    _updateTempTackData_0x1c2748(rdram, ctx, runtime); return;
    ctx->pc = 0x1C23E4u;
}

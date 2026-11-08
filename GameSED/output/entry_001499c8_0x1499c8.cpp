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

// Function: entry_001499c8
// Address: 0x1499c8 - 0x1499f8
void entry_001499c8_0x1499c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001499c8_0x1499c8");
#endif

    switch (ctx->pc) {
        case 0x1499f4u: goto label_1499f4;
        default: break;
    }

    ctx->pc = 0x1499c8u;

    // 0x1499c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1499c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1499cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1499ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1499d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1499d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1499d4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1499d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1499d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1499d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1499dc: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1499DCu;
    {
        const bool branch_taken_0x1499dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1499E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1499DCu;
        // 0x1499e0: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1499dc) {
            ctx->pc = 0x1499F8u;
            return;
        }
    }
    ctx->pc = 0x1499E4u;
    // 0x1499e4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1499e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1499e8: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x1499e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1499ec: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1499ECu;
    SET_GPR_U32(ctx, 31, 0x1499F4u);
    ctx->pc = 0x1499F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1499ECu;
    // 0x1499f0: 0x24a56b68  addiu       $a1, $a1, 0x6B68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1499ECu, 0x1499F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1499F4u;
label_1499f4:
    // 0x1499f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1499f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1499f8u;
}

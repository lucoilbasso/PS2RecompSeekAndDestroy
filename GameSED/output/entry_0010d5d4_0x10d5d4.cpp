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

// Function: entry_0010d5d4
// Address: 0x10d5d4 - 0x10d608
void entry_0010d5d4_0x10d5d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d5d4_0x10d5d4");
#endif

    switch (ctx->pc) {
        case 0x10d5ecu: goto label_10d5ec;
        default: break;
    }

    ctx->pc = 0x10d5d4u;

    // 0x10d5d4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10d5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10d5d8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10d5dc: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x10d5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x10d5e0: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x10d5e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d5e4: 0xc04110c  jal         func_104430
    ctx->pc = 0x10D5E4u;
    SET_GPR_U32(ctx, 31, 0x10D5ECu);
    ctx->pc = 0x10D5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D5E4u;
    // 0x10d5e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10D5E4u, 0x10D5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D5ECu;
label_10d5ec:
    // 0x10d5ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10d5ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d5f0: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x10d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x10d5f4: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x10d5f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d5f8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D5F8u;
    {
        const bool branch_taken_0x10d5f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10D5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D5F8u;
        // 0x10d5fc: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d5f8) {
            ctx->pc = 0x10D608u;
            return;
        }
    }
    ctx->pc = 0x10D600u;
    // 0x10d600: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10D600u;
    {
        const bool branch_taken_0x10d600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D600u;
        // 0x10d604: 0x8e1001c0  lw          $s0, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d600) {
            ctx->pc = 0x10D630u;
            return;
        }
    }
    ctx->pc = 0x10D608u;
}

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

// Function: entry_0010ba58
// Address: 0x10ba58 - 0x10ba84
void entry_0010ba58_0x10ba58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ba58_0x10ba58");
#endif

    switch (ctx->pc) {
        case 0x10ba68u: goto label_10ba68;
        default: break;
    }

    ctx->pc = 0x10ba58u;

    // 0x10ba58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10ba58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10ba5c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10ba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10ba60: 0xc04110c  jal         func_104430
    ctx->pc = 0x10BA60u;
    SET_GPR_U32(ctx, 31, 0x10BA68u);
    ctx->pc = 0x10BA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BA60u;
    // 0x10ba64: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10BA60u, 0x10BA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BA68u;
label_10ba68:
    // 0x10ba68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10ba68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba6c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10BA6Cu;
    {
        const bool branch_taken_0x10ba6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA6Cu;
        // 0x10ba70: 0x24030166  addiu       $v1, $zero, 0x166 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ba6c) {
            ctx->pc = 0x10BA84u;
            return;
        }
    }
    ctx->pc = 0x10BA74u;
    // 0x10ba74: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10ba74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10ba78: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10ba78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10ba7c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BA7Cu;
    {
        const bool branch_taken_0x10ba7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x10BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA7Cu;
        // 0x10ba80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ba7c) {
            ctx->pc = 0x10BA8Cu;
            return;
        }
    }
    ctx->pc = 0x10BA84u;
}

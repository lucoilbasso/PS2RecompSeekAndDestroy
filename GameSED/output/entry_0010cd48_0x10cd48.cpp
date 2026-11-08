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

// Function: entry_0010cd48
// Address: 0x10cd48 - 0x10cd78
void entry_0010cd48_0x10cd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cd48_0x10cd48");
#endif

    switch (ctx->pc) {
        case 0x10cd58u: goto label_10cd58;
        default: break;
    }

    ctx->pc = 0x10cd48u;

    // 0x10cd48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10cd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10cd4c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10cd50: 0xc04110c  jal         func_104430
    ctx->pc = 0x10CD50u;
    SET_GPR_U32(ctx, 31, 0x10CD58u);
    ctx->pc = 0x10CD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CD50u;
    // 0x10cd54: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10CD50u, 0x10CD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CD58u;
label_10cd58:
    // 0x10cd58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd5c: 0x24030166  addiu       $v1, $zero, 0x166
    ctx->pc = 0x10cd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x10cd60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10CD60u;
    {
        const bool branch_taken_0x10cd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CD60u;
        // 0x10cd64: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cd60) {
            ctx->pc = 0x10CD78u;
            return;
        }
    }
    ctx->pc = 0x10CD68u;
    // 0x10cd68: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10cd6c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10cd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10cd70: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10CD70u;
    {
        const bool branch_taken_0x10cd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10cd70) {
            ctx->pc = 0x10CD7Cu;
            return;
        }
    }
    ctx->pc = 0x10CD78u;
}

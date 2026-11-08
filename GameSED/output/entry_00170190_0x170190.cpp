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

// Function: entry_00170190
// Address: 0x170190 - 0x1701bc
void entry_00170190_0x170190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170190_0x170190");
#endif

    switch (ctx->pc) {
        case 0x17019cu: goto label_17019c;
        default: break;
    }

    ctx->pc = 0x170190u;

    // 0x170190: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170194: 0xc06e3ea  jal         func_1B8FA8
    ctx->pc = 0x170194u;
    SET_GPR_U32(ctx, 31, 0x17019Cu);
    ctx->pc = 0x170198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170194u;
    // 0x170198: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8FA8u, 0x170194u, 0x17019Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17019Cu;
label_17019c:
    // 0x17019c: 0x58400007  blezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17019Cu;
    {
        const bool branch_taken_0x17019c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x17019c) {
            ctx->pc = 0x1701A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17019Cu;
            // 0x1701a0: 0xaf8091b0  sw          $zero, -0x6E50($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294939056), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1701BCu;
            return;
        }
    }
    ctx->pc = 0x1701A4u;
    // 0x1701a4: 0x93a20002  lbu         $v0, 0x2($sp)
    ctx->pc = 0x1701a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x1701a8: 0x93a30003  lbu         $v1, 0x3($sp)
    ctx->pc = 0x1701a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x1701ac: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1701acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1701b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1701b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1701b4: 0x3842ffff  xori        $v0, $v0, 0xFFFF
    ctx->pc = 0x1701b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)65535);
    // 0x1701b8: 0xaf8291b0  sw          $v0, -0x6E50($gp)
    ctx->pc = 0x1701b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939056), GPR_U32(ctx, 2));
    ctx->pc = 0x1701bcu;
}

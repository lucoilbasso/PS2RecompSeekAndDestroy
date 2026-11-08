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

// Function: entry_0010b580
// Address: 0x10b580 - 0x10b5b8
void entry_0010b580_0x10b580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b580_0x10b580");
#endif

    switch (ctx->pc) {
        case 0x10b598u: goto label_10b598;
        default: break;
    }

    ctx->pc = 0x10b580u;

    // 0x10b580: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x10b580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x10b584: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x10b584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x10b588: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x10b588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x10b58c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10b590: 0xc04110c  jal         func_104430
    ctx->pc = 0x10B590u;
    SET_GPR_U32(ctx, 31, 0x10B598u);
    ctx->pc = 0x10B594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B590u;
    // 0x10b594: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10B590u, 0x10B598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B598u;
label_10b598:
    // 0x10b598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b59c: 0x24050166  addiu       $a1, $zero, 0x166
    ctx->pc = 0x10b59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x10b5a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B5A0u;
    {
        const bool branch_taken_0x10b5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B5A0u;
        // 0x10b5a4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b5a0) {
            ctx->pc = 0x10B5B8u;
            return;
        }
    }
    ctx->pc = 0x10B5A8u;
    // 0x10b5a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10b5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10b5ac: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10b5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10b5b0: 0x10450002  beq         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10B5B0u;
    {
        const bool branch_taken_0x10b5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x10b5b0) {
            ctx->pc = 0x10B5BCu;
            return;
        }
    }
    ctx->pc = 0x10B5B8u;
}

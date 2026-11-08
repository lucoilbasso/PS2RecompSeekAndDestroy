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

// Function: entry_0010b490
// Address: 0x10b490 - 0x10b4c8
void entry_0010b490_0x10b490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b490_0x10b490");
#endif

    switch (ctx->pc) {
        case 0x10b4a8u: goto label_10b4a8;
        default: break;
    }

    ctx->pc = 0x10b490u;

    // 0x10b490: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10b490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10b494: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10b494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10b498: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10b498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10b49c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10b49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10b4a0: 0xc04110c  jal         func_104430
    ctx->pc = 0x10B4A0u;
    SET_GPR_U32(ctx, 31, 0x10B4A8u);
    ctx->pc = 0x10B4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B4A0u;
    // 0x10b4a4: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10B4A0u, 0x10B4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B4A8u;
label_10b4a8:
    // 0x10b4a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b4ac: 0x24030166  addiu       $v1, $zero, 0x166
    ctx->pc = 0x10b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x10b4b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B4B0u;
    {
        const bool branch_taken_0x10b4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B4B0u;
        // 0x10b4b4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b4b0) {
            ctx->pc = 0x10B4C8u;
            return;
        }
    }
    ctx->pc = 0x10B4B8u;
    // 0x10b4b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10b4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10b4bc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10b4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10b4c0: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10B4C0u;
    {
        const bool branch_taken_0x10b4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10b4c0) {
            ctx->pc = 0x10B4CCu;
            return;
        }
    }
    ctx->pc = 0x10B4C8u;
}

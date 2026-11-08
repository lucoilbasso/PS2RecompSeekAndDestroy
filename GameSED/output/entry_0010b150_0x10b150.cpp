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

// Function: entry_0010b150
// Address: 0x10b150 - 0x10b184
void entry_0010b150_0x10b150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b150_0x10b150");
#endif

    switch (ctx->pc) {
        case 0x10b168u: goto label_10b168;
        default: break;
    }

    ctx->pc = 0x10b150u;

    // 0x10b150: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x10b150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x10b154: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x10b154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x10b158: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10b158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10b15c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10b160: 0xc04110c  jal         func_104430
    ctx->pc = 0x10B160u;
    SET_GPR_U32(ctx, 31, 0x10B168u);
    ctx->pc = 0x10B164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B160u;
    // 0x10b164: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10B160u, 0x10B168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B168u;
label_10b168:
    // 0x10b168: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10b168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b16c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B16Cu;
    {
        const bool branch_taken_0x10b16c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B16Cu;
        // 0x10b170: 0x24030166  addiu       $v1, $zero, 0x166 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b16c) {
            ctx->pc = 0x10B184u;
            return;
        }
    }
    ctx->pc = 0x10B174u;
    // 0x10b174: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10b174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10b178: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10b178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10b17c: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10B17Cu;
    {
        const bool branch_taken_0x10b17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x10B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B17Cu;
        // 0x10b180: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b17c) {
            ctx->pc = 0x10B188u;
            return;
        }
    }
    ctx->pc = 0x10B184u;
}

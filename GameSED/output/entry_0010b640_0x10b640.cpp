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

// Function: entry_0010b640
// Address: 0x10b640 - 0x10b674
void entry_0010b640_0x10b640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b640_0x10b640");
#endif

    switch (ctx->pc) {
        case 0x10b658u: goto label_10b658;
        default: break;
    }

    ctx->pc = 0x10b640u;

    // 0x10b640: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x10b640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x10b644: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x10b644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x10b648: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x10b648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x10b64c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10b650: 0xc04110c  jal         func_104430
    ctx->pc = 0x10B650u;
    SET_GPR_U32(ctx, 31, 0x10B658u);
    ctx->pc = 0x10B654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B650u;
    // 0x10b654: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10B650u, 0x10B658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B658u;
label_10b658:
    // 0x10b658: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10b658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b65c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B65Cu;
    {
        const bool branch_taken_0x10b65c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B65Cu;
        // 0x10b660: 0x24030166  addiu       $v1, $zero, 0x166 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b65c) {
            ctx->pc = 0x10B674u;
            return;
        }
    }
    ctx->pc = 0x10B664u;
    // 0x10b664: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10b664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10b668: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10b668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10b66c: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10B66Cu;
    {
        const bool branch_taken_0x10b66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x10B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B66Cu;
        // 0x10b670: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b66c) {
            ctx->pc = 0x10B678u;
            return;
        }
    }
    ctx->pc = 0x10B674u;
}

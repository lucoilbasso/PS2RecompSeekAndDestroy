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

// Function: entry_0012f624
// Address: 0x12f624 - 0x12f670
void entry_0012f624_0x12f624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f624_0x12f624");
#endif

    switch (ctx->pc) {
        case 0x12f640u: goto label_12f640;
        default: break;
    }

    ctx->pc = 0x12f624u;

    // 0x12f624: 0x8e65007c  lw          $a1, 0x7C($s3)
    ctx->pc = 0x12f624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x12f628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f62c: 0x96670066  lhu         $a3, 0x66($s3)
    ctx->pc = 0x12f62cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 102)));
    // 0x12f630: 0x2666006c  addiu       $a2, $s3, 0x6C
    ctx->pc = 0x12f630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x12f634: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x12f634u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f638: 0xc04b7d6  jal         func_12DF58
    ctx->pc = 0x12F638u;
    SET_GPR_U32(ctx, 31, 0x12F640u);
    ctx->pc = 0x12F63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F638u;
    // 0x12f63c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DF58u, 0x12F638u, 0x12F640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F640u;
label_12f640:
    // 0x12f640: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12f640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f644: 0x506001af  beql        $v1, $zero, . + 4 + (0x1AF << 2)
    ctx->pc = 0x12F644u;
    {
        const bool branch_taken_0x12f644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f644) {
            ctx->pc = 0x12F648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F644u;
            // 0x12f648: 0x8e62010c  lw          $v0, 0x10C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FD04u;
            return;
        }
    }
    ctx->pc = 0x12F64Cu;
    // 0x12f64c: 0x8e620078  lw          $v0, 0x78($s3)
    ctx->pc = 0x12f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x12f650: 0x504001ac  beql        $v0, $zero, . + 4 + (0x1AC << 2)
    ctx->pc = 0x12F650u;
    {
        const bool branch_taken_0x12f650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f650) {
            ctx->pc = 0x12F654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F650u;
            // 0x12f654: 0x8e62010c  lw          $v0, 0x10C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FD04u;
            return;
        }
    }
    ctx->pc = 0x12F658u;
    // 0x12f658: 0x106001a9  beqz        $v1, . + 4 + (0x1A9 << 2)
    ctx->pc = 0x12F658u;
    {
        const bool branch_taken_0x12f658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F658u;
        // 0x12f65c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f658) {
            ctx->pc = 0x12FD00u;
            return;
        }
    }
    ctx->pc = 0x12F660u;
    // 0x12f660: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12f660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x12f664: 0x24560790  addiu       $s6, $v0, 0x790
    ctx->pc = 0x12f664u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
    // 0x12f668: 0x8e7100c8  lw          $s1, 0xC8($s3)
    ctx->pc = 0x12f668u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
    // 0x12f66c: 0x0  nop
    ctx->pc = 0x12f66cu;
    // NOP
    ctx->pc = 0x12f670u;
}

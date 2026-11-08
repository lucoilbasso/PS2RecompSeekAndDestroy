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

// Function: entry_0010a200
// Address: 0x10a200 - 0x10a244
void entry_0010a200_0x10a200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a200_0x10a200");
#endif

    switch (ctx->pc) {
        case 0x10a210u: goto label_10a210;
        case 0x10a224u: goto label_10a224;
        default: break;
    }

    ctx->pc = 0x10a200u;

    // 0x10a200: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10a200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10a204: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10a204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10a208: 0xc04110c  jal         func_104430
    ctx->pc = 0x10A208u;
    SET_GPR_U32(ctx, 31, 0x10A210u);
    ctx->pc = 0x10A20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A208u;
    // 0x10a20c: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10A208u, 0x10A210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A210u;
label_10a210:
    // 0x10a210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a214: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10a214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a218: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x10a218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10a21c: 0xc06a2fe  jal         func_1A8BF8
    ctx->pc = 0x10A21Cu;
    SET_GPR_U32(ctx, 31, 0x10A224u);
    ctx->pc = 0x10A220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A21Cu;
    // 0x10a220: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x10A21Cu, 0x10A224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A224u;
label_10a224:
    // 0x10a224: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x10a224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a228: 0x26290150  addiu       $t1, $s1, 0x150
    ctx->pc = 0x10a228u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x10a22c: 0x96220204  lhu         $v0, 0x204($s1)
    ctx->pc = 0x10a22cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x10a230: 0x96250206  lhu         $a1, 0x206($s1)
    ctx->pc = 0x10a230u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 518)));
    // 0x10a234: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A234u;
    {
        const bool branch_taken_0x10a234 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A234u;
        // 0x10a238: 0x8faa0004  lw          $t2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a234) {
            ctx->pc = 0x10A244u;
            return;
        }
    }
    ctx->pc = 0x10A23Cu;
    // 0x10a23c: 0x862201a0  lh          $v0, 0x1A0($s1)
    ctx->pc = 0x10a23cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x10a240: 0x862401a4  lh          $a0, 0x1A4($s1)
    ctx->pc = 0x10a240u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 420)));
    ctx->pc = 0x10a244u;
}

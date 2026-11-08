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

// Function: entry_001555e8
// Address: 0x1555e8 - 0x155638
void entry_001555e8_0x1555e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001555e8_0x1555e8");
#endif

    switch (ctx->pc) {
        case 0x155600u: goto label_155600;
        case 0x15560cu: goto label_15560c;
        default: break;
    }

    ctx->pc = 0x1555e8u;

    // 0x1555e8: 0x8e4308a4  lw          $v1, 0x8A4($s2)
    ctx->pc = 0x1555e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2212)));
    // 0x1555ec: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1555ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1555f0: 0x14430025  bne         $v0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1555F0u;
    {
        const bool branch_taken_0x1555f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1555f0) {
            ctx->pc = 0x155688u;
            return;
        }
    }
    ctx->pc = 0x1555F8u;
    // 0x1555f8: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x1555F8u;
    SET_GPR_U32(ctx, 31, 0x155600u);
    ctx->pc = 0x1555FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1555F8u;
    // 0x1555fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x1555F8u, 0x155600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155600u;
label_155600:
    // 0x155600: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x155600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155604: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x155604u;
    SET_GPR_U32(ctx, 31, 0x15560Cu);
    ctx->pc = 0x155608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155604u;
    // 0x155608: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x155604u, 0x15560Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15560Cu;
label_15560c:
    // 0x15560c: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x15560cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x155610: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x155610u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x155614: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x155614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x155618: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x155618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x15561c: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x15561cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x155620: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x155620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x155624: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x155624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x155628: 0x5046000c  beql        $v0, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x155628u;
    {
        const bool branch_taken_0x155628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x155628) {
            ctx->pc = 0x15562Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155628u;
            // 0x15562c: 0x8e4208a0  lw          $v0, 0x8A0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15565Cu;
            return;
        }
    }
    ctx->pc = 0x155630u;
    // 0x155630: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x155630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x155634: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x155634u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    ctx->pc = 0x155638u;
}

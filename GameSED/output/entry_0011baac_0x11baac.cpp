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

// Function: entry_0011baac
// Address: 0x11baac - 0x11baf4
void entry_0011baac_0x11baac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011baac_0x11baac");
#endif

    switch (ctx->pc) {
        case 0x11bac8u: goto label_11bac8;
        case 0x11bae0u: goto label_11bae0;
        case 0x11baecu: goto label_11baec;
        default: break;
    }

    ctx->pc = 0x11baacu;

    // 0x11baac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11baacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11bab0: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x11bab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11bab4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11bab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11bab8: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x11BAB8u;
    {
        const bool branch_taken_0x11bab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BAB8u;
        // 0x11babc: 0x8c900170  lw          $s0, 0x170($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bab8) {
            ctx->pc = 0x11BB04u;
            return;
        }
    }
    ctx->pc = 0x11BAC0u;
    // 0x11bac0: 0xc05f39a  jal         func_17CE68
    ctx->pc = 0x11BAC0u;
    SET_GPR_U32(ctx, 31, 0x11BAC8u);
    ctx->pc = 0x17CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CE68u, 0x11BAC0u, 0x11BAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BAC8u;
label_11bac8:
    // 0x11bac8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x11bac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11bacc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11baccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bad0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11bad0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bad8: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x11BAD8u;
    SET_GPR_U32(ctx, 31, 0x11BAE0u);
    ctx->pc = 0x11BADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BAD8u;
    // 0x11badc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x11BAD8u, 0x11BAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BAE0u;
label_11bae0:
    // 0x11bae0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x11bae0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11bae4: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x11BAE4u;
    SET_GPR_U32(ctx, 31, 0x11BAECu);
    ctx->pc = 0x11BAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BAE4u;
    // 0x11bae8: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x11BAE4u, 0x11BAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BAECu;
label_11baec:
    // 0x11baec: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x11BAECu;
    SET_GPR_U32(ctx, 31, 0x11BAF4u);
    ctx->pc = 0x11BAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BAECu;
    // 0x11baf0: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x11BAECu, 0x11BAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BAF4u;
}

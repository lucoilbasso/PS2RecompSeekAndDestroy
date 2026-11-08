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

// Function: entry_0010e660
// Address: 0x10e660 - 0x10e6bc
void entry_0010e660_0x10e660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e660_0x10e660");
#endif

    switch (ctx->pc) {
        case 0x10e684u: goto label_10e684;
        case 0x10e6a0u: goto label_10e6a0;
        case 0x10e6b8u: goto label_10e6b8;
        default: break;
    }

    ctx->pc = 0x10e660u;

    // 0x10e660: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10e660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10e664: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x10e664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x10e668: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x10e668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x10e66c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x10e66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x10e670: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10e670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10e674: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10e674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10e678: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x10e678u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x10e67c: 0xc04110c  jal         func_104430
    ctx->pc = 0x10E67Cu;
    SET_GPR_U32(ctx, 31, 0x10E684u);
    ctx->pc = 0x10E680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E67Cu;
    // 0x10e680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10E67Cu, 0x10E684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E684u;
label_10e684:
    // 0x10e684: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x10e684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x10e688: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10e688u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e68c: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x10e68cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10e690: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x10E690u;
    {
        const bool branch_taken_0x10e690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10e690) {
            ctx->pc = 0x10E694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E690u;
            // 0x10e694: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E6BCu;
            return;
        }
    }
    ctx->pc = 0x10E698u;
    // 0x10e698: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x10E698u;
    SET_GPR_U32(ctx, 31, 0x10E6A0u);
    ctx->pc = 0x10E69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E698u;
    // 0x10e69c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x10E698u, 0x10E6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E6A0u;
label_10e6a0:
    // 0x10e6a0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10e6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10e6a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10e6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e6a8: 0x24a53c98  addiu       $a1, $a1, 0x3C98
    ctx->pc = 0x10e6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15512));
    // 0x10e6ac: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10e6acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10e6b0: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10E6B0u;
    SET_GPR_U32(ctx, 31, 0x10E6B8u);
    ctx->pc = 0x10E6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E6B0u;
    // 0x10e6b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10E6B0u, 0x10E6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E6B8u;
label_10e6b8:
    // 0x10e6b8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x10e6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->pc = 0x10e6bcu;
}

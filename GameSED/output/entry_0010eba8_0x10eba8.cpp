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

// Function: entry_0010eba8
// Address: 0x10eba8 - 0x10ec00
void entry_0010eba8_0x10eba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010eba8_0x10eba8");
#endif

    switch (ctx->pc) {
        case 0x10ebc8u: goto label_10ebc8;
        case 0x10ebe4u: goto label_10ebe4;
        case 0x10ebfcu: goto label_10ebfc;
        default: break;
    }

    ctx->pc = 0x10eba8u;

    // 0x10eba8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10eba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ebac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10ebacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10ebb0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x10ebb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x10ebb4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x10ebb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x10ebb8: 0x8e340024  lw          $s4, 0x24($s1)
    ctx->pc = 0x10ebb8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10ebbc: 0x8e900044  lw          $s0, 0x44($s4)
    ctx->pc = 0x10ebbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
    // 0x10ebc0: 0xc04110c  jal         func_104430
    ctx->pc = 0x10EBC0u;
    SET_GPR_U32(ctx, 31, 0x10EBC8u);
    ctx->pc = 0x10EBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EBC0u;
    // 0x10ebc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10EBC0u, 0x10EBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EBC8u;
label_10ebc8:
    // 0x10ebc8: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x10ebc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x10ebcc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10ebccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ebd0: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x10ebd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10ebd4: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x10EBD4u;
    {
        const bool branch_taken_0x10ebd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10ebd4) {
            ctx->pc = 0x10EBD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EBD4u;
            // 0x10ebd8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EC00u;
            return;
        }
    }
    ctx->pc = 0x10EBDCu;
    // 0x10ebdc: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x10EBDCu;
    SET_GPR_U32(ctx, 31, 0x10EBE4u);
    ctx->pc = 0x10EBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EBDCu;
    // 0x10ebe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x10EBDCu, 0x10EBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EBE4u;
label_10ebe4:
    // 0x10ebe4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10ebe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10ebe8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10ebe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ebec: 0x24a53c98  addiu       $a1, $a1, 0x3C98
    ctx->pc = 0x10ebecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15512));
    // 0x10ebf0: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10ebf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10ebf4: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10EBF4u;
    SET_GPR_U32(ctx, 31, 0x10EBFCu);
    ctx->pc = 0x10EBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EBF4u;
    // 0x10ebf8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10EBF4u, 0x10EBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EBFCu;
label_10ebfc:
    // 0x10ebfc: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x10ebfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10ec00u;
}

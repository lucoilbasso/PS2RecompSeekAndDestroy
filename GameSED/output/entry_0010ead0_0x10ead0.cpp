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

// Function: entry_0010ead0
// Address: 0x10ead0 - 0x10eb20
void entry_0010ead0_0x10ead0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ead0_0x10ead0");
#endif

    switch (ctx->pc) {
        case 0x10eaecu: goto label_10eaec;
        case 0x10eb08u: goto label_10eb08;
        default: break;
    }

    ctx->pc = 0x10ead0u;

    // 0x10ead0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ead0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ead4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10ead4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10ead8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x10ead8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10eadc: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10eadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10eae0: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x10eae0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x10eae4: 0xc04110c  jal         func_104430
    ctx->pc = 0x10EAE4u;
    SET_GPR_U32(ctx, 31, 0x10EAECu);
    ctx->pc = 0x10EAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EAE4u;
    // 0x10eae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10EAE4u, 0x10EAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EAECu;
label_10eaec:
    // 0x10eaec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10eaecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eaf0: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x10eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x10eaf4: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x10eaf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10eaf8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10EAF8u;
    {
        const bool branch_taken_0x10eaf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10EAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EAF8u;
        // 0x10eafc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eaf8) {
            ctx->pc = 0x10EB20u;
            return;
        }
    }
    ctx->pc = 0x10EB00u;
    // 0x10eb00: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x10EB00u;
    SET_GPR_U32(ctx, 31, 0x10EB08u);
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x10EB00u, 0x10EB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EB08u;
label_10eb08:
    // 0x10eb08: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10eb08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10eb0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10eb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eb10: 0x24a53c98  addiu       $a1, $a1, 0x3C98
    ctx->pc = 0x10eb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15512));
    // 0x10eb14: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10eb14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10eb18: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10EB18u;
    SET_GPR_U32(ctx, 31, 0x10EB20u);
    ctx->pc = 0x10EB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EB18u;
    // 0x10eb1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10EB18u, 0x10EB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EB20u;
}

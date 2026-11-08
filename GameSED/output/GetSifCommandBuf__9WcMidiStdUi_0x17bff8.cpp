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

// Function: GetSifCommandBuf__9WcMidiStdUi
// Address: 0x17bff8 - 0x17c060
void GetSifCommandBuf__9WcMidiStdUi_0x17bff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSifCommandBuf__9WcMidiStdUi_0x17bff8");
#endif

    switch (ctx->pc) {
        case 0x17c018u: goto label_17c018;
        case 0x17c02cu: goto label_17c02c;
        default: break;
    }

    ctx->pc = 0x17bff8u;

    // 0x17bff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17bff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17bffc: 0x24860058  addiu       $a2, $a0, 0x58
    ctx->pc = 0x17bffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x17c000: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17c000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17c004: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17c004u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c008: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17c008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17c00c: 0x24900010  addiu       $s0, $a0, 0x10
    ctx->pc = 0x17c00cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x17c010: 0x24830250  addiu       $v1, $a0, 0x250
    ctx->pc = 0x17c010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 592));
    // 0x17c014: 0x0  nop
    ctx->pc = 0x17c014u;
    // NOP
label_17c018:
    // 0x17c018: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17c018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c01c: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17C01Cu;
    {
        const bool branch_taken_0x17c01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x17C020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C01Cu;
        // 0x17c020: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c01c) {
            ctx->pc = 0x17C038u;
            goto label_17c038;
        }
    }
    ctx->pc = 0x17C024u;
    // 0x17c024: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17C024u;
    SET_GPR_U32(ctx, 31, 0x17C02Cu);
    ctx->pc = 0x17C028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C024u;
    // 0x17c028: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17C024u, 0x17C02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C02Cu;
label_17c02c:
    // 0x17c02c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17C02Cu;
    {
        const bool branch_taken_0x17c02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C02Cu;
        // 0x17c030: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c02c) {
            ctx->pc = 0x17C050u;
            goto label_17c050;
        }
    }
    ctx->pc = 0x17C034u;
    // 0x17c034: 0x0  nop
    ctx->pc = 0x17c034u;
    // NOP
label_17c038:
    // 0x17c038: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x17c038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x17c03c: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x17c03cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x17c040: 0x28e20006  slti        $v0, $a3, 0x6
    ctx->pc = 0x17c040u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17c044: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x17C044u;
    {
        const bool branch_taken_0x17c044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C044u;
        // 0x17c048: 0x24c60060  addiu       $a2, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c044) {
            ctx->pc = 0x17C018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c018;
        }
    }
    ctx->pc = 0x17C04Cu;
    // 0x17c04c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17c04cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17c050:
    // 0x17c050: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17c050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c054: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17c054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17c058: 0x3e00008  jr          $ra
    ctx->pc = 0x17C058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C058u;
        // 0x17c05c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C060u;
}

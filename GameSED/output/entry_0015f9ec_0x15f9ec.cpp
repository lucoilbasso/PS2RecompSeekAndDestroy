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

// Function: entry_0015f9ec
// Address: 0x15f9ec - 0x15fa30
void entry_0015f9ec_0x15f9ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f9ec_0x15f9ec");
#endif

    switch (ctx->pc) {
        case 0x15fa04u: goto label_15fa04;
        case 0x15fa28u: goto label_15fa28;
        default: break;
    }

    ctx->pc = 0x15f9ecu;

label_15f9ec:
    // 0x15f9ec: 0x8e220f38  lw          $v0, 0xF38($s1)
    ctx->pc = 0x15f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3896)));
label_15f9f0:
    // 0x15f9f0: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
label_15f9f4:
    if (ctx->pc == 0x15F9F4u) {
        ctx->pc = 0x15F9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F9F0u;
        // 0x15f9f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F9F8u;
        goto label_15f9f8;
    }
    ctx->pc = 0x15F9F0u;
    {
        const bool branch_taken_0x15f9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f9f0) {
            ctx->pc = 0x15F9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F9F0u;
            // 0x15f9f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FA68u;
            return;
        }
    }
    ctx->pc = 0x15F9F8u;
label_15f9f8:
    // 0x15f9f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15f9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f9fc:
    // 0x15f9fc: 0xc05bedc  jal         func_16FB70
label_15fa00:
    if (ctx->pc == 0x15FA00u) {
        ctx->pc = 0x15FA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F9FCu;
        // 0x15fa00: 0x26300f3c  addiu       $s0, $s1, 0xF3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3900));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FA04u;
        goto label_15fa04;
    }
    ctx->pc = 0x15F9FCu;
    SET_GPR_U32(ctx, 31, 0x15FA04u);
    ctx->pc = 0x15FA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F9FCu;
    // 0x15fa00: 0x26300f3c  addiu       $s0, $s1, 0xF3C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3900));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x15F9FCu, 0x15FA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FA04u;
label_15fa04:
    // 0x15fa04: 0x8e260f38  lw          $a2, 0xF38($s1)
    ctx->pc = 0x15fa04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3896)));
label_15fa08:
    // 0x15fa08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15fa08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15fa0c:
    // 0x15fa0c: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x15fa0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_15fa10:
    // 0x15fa10: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15fa14:
    // 0x15fa14: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15fa18:
    // 0x15fa18: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15fa18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15fa1c:
    // 0x15fa1c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15fa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15fa20:
    // 0x15fa20: 0x60f809  jalr        $v1
label_15fa24:
    if (ctx->pc == 0x15FA24u) {
        ctx->pc = 0x15FA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA20u;
        // 0x15fa24: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FA28u;
        goto label_15fa28;
    }
    ctx->pc = 0x15FA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15FA28u);
        ctx->pc = 0x15FA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA20u;
        // 0x15fa24: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FA20u, 0x15FA28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FA28u;
label_15fa28:
    // 0x15fa28: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15fa28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15fa2c:
    // 0x15fa2c: 0x0  nop
    ctx->pc = 0x15fa2cu;
    // NOP
    ctx->pc = 0x15fa30u;
}

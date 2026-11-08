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

// Function: ClearLink__5BcObj
// Address: 0x1a0d90 - 0x1a0df0
void ClearLink__5BcObj_0x1a0d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearLink__5BcObj_0x1a0d90");
#endif

    switch (ctx->pc) {
        case 0x1a0d90u: goto label_1a0d90;
        case 0x1a0d94u: goto label_1a0d94;
        case 0x1a0d98u: goto label_1a0d98;
        case 0x1a0d9cu: goto label_1a0d9c;
        case 0x1a0da0u: goto label_1a0da0;
        case 0x1a0da4u: goto label_1a0da4;
        case 0x1a0da8u: goto label_1a0da8;
        case 0x1a0dacu: goto label_1a0dac;
        case 0x1a0db0u: goto label_1a0db0;
        case 0x1a0db4u: goto label_1a0db4;
        case 0x1a0db8u: goto label_1a0db8;
        case 0x1a0dbcu: goto label_1a0dbc;
        case 0x1a0dc0u: goto label_1a0dc0;
        case 0x1a0dc4u: goto label_1a0dc4;
        case 0x1a0dc8u: goto label_1a0dc8;
        case 0x1a0dccu: goto label_1a0dcc;
        case 0x1a0dd0u: goto label_1a0dd0;
        case 0x1a0dd4u: goto label_1a0dd4;
        case 0x1a0dd8u: goto label_1a0dd8;
        case 0x1a0ddcu: goto label_1a0ddc;
        case 0x1a0de0u: goto label_1a0de0;
        case 0x1a0de4u: goto label_1a0de4;
        case 0x1a0de8u: goto label_1a0de8;
        case 0x1a0decu: goto label_1a0dec;
        default: break;
    }

    ctx->pc = 0x1a0d90u;

label_1a0d90:
    // 0x1a0d90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a0d94:
    // 0x1a0d94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a0d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a0d98:
    // 0x1a0d98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a0d98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a0d9c:
    // 0x1a0d9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a0d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a0da0:
    // 0x1a0da0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a0da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a0da4:
    // 0x1a0da4: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1a0da4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1a0da8:
    // 0x1a0da8: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
label_1a0dac:
    if (ctx->pc == 0x1A0DACu) {
        ctx->pc = 0x1A0DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0DA8u;
        // 0x1a0dac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0DB0u;
        goto label_1a0db0;
    }
    ctx->pc = 0x1A0DA8u;
    {
        const bool branch_taken_0x1a0da8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0da8) {
            ctx->pc = 0x1A0DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0DA8u;
            // 0x1a0dac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0DE0u;
            goto label_1a0de0;
        }
    }
    ctx->pc = 0x1A0DB0u;
label_1a0db0:
    // 0x1a0db0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1a0db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1a0db4:
    // 0x1a0db4: 0x0  nop
    ctx->pc = 0x1a0db4u;
    // NOP
label_1a0db8:
    // 0x1a0db8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1a0db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a0dbc:
    // 0x1a0dbc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1a0dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1a0dc0:
    // 0x1a0dc0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1a0dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a0dc4:
    // 0x1a0dc4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1a0dc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1a0dc8:
    // 0x1a0dc8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1a0dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a0dcc:
    // 0x1a0dcc: 0x60f809  jalr        $v1
label_1a0dd0:
    if (ctx->pc == 0x1A0DD0u) {
        ctx->pc = 0x1A0DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0DCCu;
        // 0x1a0dd0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0DD4u;
        goto label_1a0dd4;
    }
    ctx->pc = 0x1A0DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A0DD4u);
        ctx->pc = 0x1A0DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0DCCu;
        // 0x1a0dd0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0DCCu, 0x1A0DD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0DD4u;
label_1a0dd4:
    // 0x1a0dd4: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
label_1a0dd8:
    if (ctx->pc == 0x1A0DD8u) {
        ctx->pc = 0x1A0DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0DD4u;
        // 0x1a0dd8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0DDCu;
        goto label_1a0ddc;
    }
    ctx->pc = 0x1A0DD4u;
    {
        const bool branch_taken_0x1a0dd4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0dd4) {
            ctx->pc = 0x1A0DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0DD4u;
            // 0x1a0dd8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0db8;
        }
    }
    ctx->pc = 0x1A0DDCu;
label_1a0ddc:
    // 0x1a0ddc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0ddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a0de0:
    // 0x1a0de0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a0de0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a0de4:
    // 0x1a0de4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a0de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a0de8:
    // 0x1a0de8: 0x3e00008  jr          $ra
label_1a0dec:
    if (ctx->pc == 0x1A0DECu) {
        ctx->pc = 0x1A0DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0DE8u;
        // 0x1a0dec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0DF0u;
        goto label_fallthrough_0x1a0de8;
    }
    ctx->pc = 0x1A0DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0DE8u;
        // 0x1a0dec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a0de8:
    ctx->pc = 0x1A0DF0u;
}

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

// Function: Cmd_ACTOR_CLEAN_Entry__FP15BsSCDEntControl
// Address: 0x132c50 - 0x132d34
void Cmd_ACTOR_CLEAN_Entry__FP15BsSCDEntControl_0x132c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_ACTOR_CLEAN_Entry__FP15BsSCDEntControl_0x132c50");
#endif

    switch (ctx->pc) {
        case 0x132c50u: goto label_132c50;
        case 0x132c54u: goto label_132c54;
        case 0x132c58u: goto label_132c58;
        case 0x132c5cu: goto label_132c5c;
        case 0x132c60u: goto label_132c60;
        case 0x132c64u: goto label_132c64;
        case 0x132c68u: goto label_132c68;
        case 0x132c6cu: goto label_132c6c;
        case 0x132c70u: goto label_132c70;
        case 0x132c74u: goto label_132c74;
        case 0x132c78u: goto label_132c78;
        case 0x132c7cu: goto label_132c7c;
        case 0x132c80u: goto label_132c80;
        case 0x132c84u: goto label_132c84;
        case 0x132c88u: goto label_132c88;
        case 0x132c8cu: goto label_132c8c;
        case 0x132c90u: goto label_132c90;
        case 0x132c94u: goto label_132c94;
        case 0x132c98u: goto label_132c98;
        case 0x132c9cu: goto label_132c9c;
        case 0x132ca0u: goto label_132ca0;
        case 0x132ca4u: goto label_132ca4;
        case 0x132ca8u: goto label_132ca8;
        case 0x132cacu: goto label_132cac;
        case 0x132cb0u: goto label_132cb0;
        case 0x132cb4u: goto label_132cb4;
        case 0x132cb8u: goto label_132cb8;
        case 0x132cbcu: goto label_132cbc;
        case 0x132cc0u: goto label_132cc0;
        case 0x132cc4u: goto label_132cc4;
        case 0x132cc8u: goto label_132cc8;
        case 0x132cccu: goto label_132ccc;
        case 0x132cd0u: goto label_132cd0;
        case 0x132cd4u: goto label_132cd4;
        case 0x132cd8u: goto label_132cd8;
        case 0x132cdcu: goto label_132cdc;
        case 0x132ce0u: goto label_132ce0;
        case 0x132ce4u: goto label_132ce4;
        case 0x132ce8u: goto label_132ce8;
        case 0x132cecu: goto label_132cec;
        case 0x132cf0u: goto label_132cf0;
        case 0x132cf4u: goto label_132cf4;
        case 0x132cf8u: goto label_132cf8;
        case 0x132cfcu: goto label_132cfc;
        case 0x132d00u: goto label_132d00;
        case 0x132d04u: goto label_132d04;
        case 0x132d08u: goto label_132d08;
        case 0x132d0cu: goto label_132d0c;
        case 0x132d10u: goto label_132d10;
        case 0x132d14u: goto label_132d14;
        case 0x132d18u: goto label_132d18;
        case 0x132d1cu: goto label_132d1c;
        case 0x132d20u: goto label_132d20;
        case 0x132d24u: goto label_132d24;
        case 0x132d28u: goto label_132d28;
        case 0x132d2cu: goto label_132d2c;
        case 0x132d30u: goto label_132d30;
        default: break;
    }

    ctx->pc = 0x132c50u;

label_132c50:
    // 0x132c50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_132c54:
    // 0x132c54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x132c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_132c58:
    // 0x132c58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x132c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_132c5c:
    // 0x132c5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x132c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_132c60:
    // 0x132c60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x132c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_132c64:
    // 0x132c64: 0xc06a26e  jal         func_1A89B8
label_132c68:
    if (ctx->pc == 0x132C68u) {
        ctx->pc = 0x132C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C64u;
        // 0x132c68: 0x8e110024  lw          $s1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132C6Cu;
        goto label_132c6c;
    }
    ctx->pc = 0x132C64u;
    SET_GPR_U32(ctx, 31, 0x132C6Cu);
    ctx->pc = 0x132C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132C64u;
    // 0x132c68: 0x8e110024  lw          $s1, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x132C64u, 0x132C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132C6Cu;
label_132c6c:
    // 0x132c6c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x132c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_132c70:
    // 0x132c70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x132c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132c74:
    // 0x132c74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_132c78:
    // 0x132c78: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_132c7c:
    if (ctx->pc == 0x132C7Cu) {
        ctx->pc = 0x132C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C78u;
        // 0x132c7c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132C80u;
        goto label_132c80;
    }
    ctx->pc = 0x132C78u;
    {
        const bool branch_taken_0x132c78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x132C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C78u;
        // 0x132c7c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132c78) {
            ctx->pc = 0x132CC0u;
            goto label_132cc0;
        }
    }
    ctx->pc = 0x132C80u;
label_132c80:
    // 0x132c80: 0xc04ca86  jal         func_132A18
label_132c84:
    if (ctx->pc == 0x132C84u) {
        ctx->pc = 0x132C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C80u;
        // 0x132c84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132C88u;
        goto label_132c88;
    }
    ctx->pc = 0x132C80u;
    SET_GPR_U32(ctx, 31, 0x132C88u);
    ctx->pc = 0x132C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132C80u;
    // 0x132c84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132A18u, 0x132C80u, 0x132C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132C88u;
label_132c88:
    // 0x132c88: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x132c88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_132c8c:
    // 0x132c8c: 0x10c00024  beqz        $a2, . + 4 + (0x24 << 2)
label_132c90:
    if (ctx->pc == 0x132C90u) {
        ctx->pc = 0x132C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C8Cu;
        // 0x132c90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132C94u;
        goto label_132c94;
    }
    ctx->pc = 0x132C8Cu;
    {
        const bool branch_taken_0x132c8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x132C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C8Cu;
        // 0x132c90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132c8c) {
            ctx->pc = 0x132D20u;
            goto label_132d20;
        }
    }
    ctx->pc = 0x132C94u;
label_132c94:
    // 0x132c94: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x132c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_132c98:
    // 0x132c98: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x132c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_132c9c:
    // 0x132c9c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x132c9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_132ca0:
    // 0x132ca0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x132ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_132ca4:
    // 0x132ca4: 0x60f809  jalr        $v1
label_132ca8:
    if (ctx->pc == 0x132CA8u) {
        ctx->pc = 0x132CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132CA4u;
        // 0x132ca8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132CACu;
        goto label_132cac;
    }
    ctx->pc = 0x132CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x132CACu);
        ctx->pc = 0x132CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132CA4u;
        // 0x132ca8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132CA4u, 0x132CACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x132CACu;
label_132cac:
    // 0x132cac: 0x1000001d  b           . + 4 + (0x1D << 2)
label_132cb0:
    if (ctx->pc == 0x132CB0u) {
        ctx->pc = 0x132CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132CACu;
        // 0x132cb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132CB4u;
        goto label_132cb4;
    }
    ctx->pc = 0x132CACu;
    {
        const bool branch_taken_0x132cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132CACu;
        // 0x132cb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132cac) {
            ctx->pc = 0x132D24u;
            goto label_132d24;
        }
    }
    ctx->pc = 0x132CB4u;
label_132cb4:
    // 0x132cb4: 0x0  nop
    ctx->pc = 0x132cb4u;
    // NOP
label_132cb8:
    // 0x132cb8: 0x10000017  b           . + 4 + (0x17 << 2)
label_132cbc:
    if (ctx->pc == 0x132CBCu) {
        ctx->pc = 0x132CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132CB8u;
        // 0x132cbc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132CC0u;
        goto label_132cc0;
    }
    ctx->pc = 0x132CB8u;
    {
        const bool branch_taken_0x132cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132CB8u;
        // 0x132cbc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132cb8) {
            ctx->pc = 0x132D18u;
            goto label_132d18;
        }
    }
    ctx->pc = 0x132CC0u;
label_132cc0:
    // 0x132cc0: 0x14a20013  bne         $a1, $v0, . + 4 + (0x13 << 2)
label_132cc4:
    if (ctx->pc == 0x132CC4u) {
        ctx->pc = 0x132CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132CC0u;
        // 0x132cc4: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132CC8u;
        goto label_132cc8;
    }
    ctx->pc = 0x132CC0u;
    {
        const bool branch_taken_0x132cc0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x132CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132CC0u;
        // 0x132cc4: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132cc0) {
            ctx->pc = 0x132D10u;
            goto label_132d10;
        }
    }
    ctx->pc = 0x132CC8u;
label_132cc8:
    // 0x132cc8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x132cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_132ccc:
    // 0x132ccc: 0x8c44b830  lw          $a0, -0x47D0($v0)
    ctx->pc = 0x132cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_132cd0:
    // 0x132cd0: 0x2463c060  addiu       $v1, $v1, -0x3FA0
    ctx->pc = 0x132cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951008));
label_132cd4:
    // 0x132cd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x132cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132cd8:
    // 0x132cd8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x132cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_132cdc:
    // 0x132cdc: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x132cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_132ce0:
    // 0x132ce0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x132ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_132ce4:
    // 0x132ce4: 0x1044fff4  beq         $v0, $a0, . + 4 + (-0xC << 2)
label_132ce8:
    if (ctx->pc == 0x132CE8u) {
        ctx->pc = 0x132CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132CE4u;
        // 0x132ce8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132CECu;
        goto label_132cec;
    }
    ctx->pc = 0x132CE4u;
    {
        const bool branch_taken_0x132ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x132CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132CE4u;
        // 0x132ce8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132ce4) {
            ctx->pc = 0x132CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132cb8;
        }
    }
    ctx->pc = 0x132CECu;
label_132cec:
    // 0x132cec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x132cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_132cf0:
    // 0x132cf0: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x132cf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
label_132cf4:
    // 0x132cf4: 0x0  nop
    ctx->pc = 0x132cf4u;
    // NOP
label_132cf8:
    // 0x132cf8: 0x0  nop
    ctx->pc = 0x132cf8u;
    // NOP
label_132cfc:
    // 0x132cfc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_132d00:
    if (ctx->pc == 0x132D00u) {
        ctx->pc = 0x132D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132CFCu;
        // 0x132d00: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132D04u;
        goto label_132d04;
    }
    ctx->pc = 0x132CFCu;
    {
        const bool branch_taken_0x132cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x132D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132CFCu;
        // 0x132d00: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132cfc) {
            ctx->pc = 0x132CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132ce0;
        }
    }
    ctx->pc = 0x132D04u;
label_132d04:
    // 0x132d04: 0x10000004  b           . + 4 + (0x4 << 2)
label_132d08:
    if (ctx->pc == 0x132D08u) {
        ctx->pc = 0x132D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132D04u;
        // 0x132d08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132D0Cu;
        goto label_132d0c;
    }
    ctx->pc = 0x132D04u;
    {
        const bool branch_taken_0x132d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132D04u;
        // 0x132d08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132d04) {
            ctx->pc = 0x132D18u;
            goto label_132d18;
        }
    }
    ctx->pc = 0x132D0Cu;
label_132d0c:
    // 0x132d0c: 0x0  nop
    ctx->pc = 0x132d0cu;
    // NOP
label_132d10:
    // 0x132d10: 0xc04ca86  jal         func_132A18
label_132d14:
    if (ctx->pc == 0x132D14u) {
        ctx->pc = 0x132D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132D10u;
        // 0x132d14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132D18u;
        goto label_132d18;
    }
    ctx->pc = 0x132D10u;
    SET_GPR_U32(ctx, 31, 0x132D18u);
    ctx->pc = 0x132D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132D10u;
    // 0x132d14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132A18u, 0x132D10u, 0x132D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D18u;
label_132d18:
    // 0x132d18: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_132d1c:
    if (ctx->pc == 0x132D1Cu) {
        ctx->pc = 0x132D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132D18u;
        // 0x132d1c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132D20u;
        goto label_132d20;
    }
    ctx->pc = 0x132D18u;
    {
        const bool branch_taken_0x132d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132d18) {
            ctx->pc = 0x132D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132D18u;
            // 0x132d1c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132D20u;
            goto label_132d20;
        }
    }
    ctx->pc = 0x132D20u;
label_132d20:
    // 0x132d20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x132d20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_132d24:
    // 0x132d24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x132d24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_132d28:
    // 0x132d28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x132d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_132d2c:
    // 0x132d2c: 0x3e00008  jr          $ra
label_132d30:
    if (ctx->pc == 0x132D30u) {
        ctx->pc = 0x132D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132D2Cu;
        // 0x132d30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132D34u;
        goto label_fallthrough_0x132d2c;
    }
    ctx->pc = 0x132D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132D2Cu;
        // 0x132d30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x132d2c:
    ctx->pc = 0x132D34u;
}

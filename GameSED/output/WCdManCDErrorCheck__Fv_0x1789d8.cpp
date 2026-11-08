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

// Function: WCdManCDErrorCheck__Fv
// Address: 0x1789d8 - 0x178aa4
void WCdManCDErrorCheck__Fv_0x1789d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WCdManCDErrorCheck__Fv_0x1789d8");
#endif

    switch (ctx->pc) {
        case 0x1789f8u: goto label_1789f8;
        case 0x178a58u: goto label_178a58;
        case 0x178a60u: goto label_178a60;
        default: break;
    }

    ctx->pc = 0x1789d8u;

    // 0x1789d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1789d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1789dc: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1789dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1789e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1789e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1789e4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1789e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1789e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1789e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1789ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1789ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1789f0: 0xc06ecac  jal         func_1BB2B0
    ctx->pc = 0x1789F0u;
    SET_GPR_U32(ctx, 31, 0x1789F8u);
    ctx->pc = 0x1789F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1789F0u;
    // 0x1789f4: 0x8c500024  lw          $s0, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB2B0u, 0x1789F0u, 0x1789F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1789F8u;
label_1789f8:
    // 0x1789f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1789f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1789fc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1789fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x178a00: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x178A00u;
    {
        const bool branch_taken_0x178a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x178A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A00u;
        // 0x178a04: 0x28620031  slti        $v0, $v1, 0x31 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)49) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a00) {
            ctx->pc = 0x178A78u;
            goto label_178a78;
        }
    }
    ctx->pc = 0x178A08u;
    // 0x178a08: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x178A08u;
    {
        const bool branch_taken_0x178a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A08u;
        // 0x178a0c: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a08) {
            ctx->pc = 0x178A30u;
            goto label_178a30;
        }
    }
    ctx->pc = 0x178A10u;
    // 0x178a10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x178a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x178a14: 0x50620019  beql        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x178A14u;
    {
        const bool branch_taken_0x178a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x178a14) {
            ctx->pc = 0x178A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178A14u;
            // 0x178a18: 0x8e021040  lw          $v0, 0x1040($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178A7Cu;
            goto label_178a7c;
        }
    }
    ctx->pc = 0x178A1Cu;
    // 0x178a1c: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x178A1Cu;
    {
        const bool branch_taken_0x178a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x178a1c) {
            ctx->pc = 0x178A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178A1Cu;
            // 0x178a20: 0x8e031040  lw          $v1, 0x1040($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178A40u;
            goto label_178a40;
        }
    }
    ctx->pc = 0x178A24u;
    // 0x178a24: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x178A24u;
    {
        const bool branch_taken_0x178a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A24u;
        // 0x178a28: 0x8e021040  lw          $v0, 0x1040($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a24) {
            ctx->pc = 0x178A7Cu;
            goto label_178a7c;
        }
    }
    ctx->pc = 0x178A2Cu;
    // 0x178a2c: 0x0  nop
    ctx->pc = 0x178a2cu;
    // NOP
label_178a30:
    // 0x178a30: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x178A30u;
    {
        const bool branch_taken_0x178a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x178A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A30u;
        // 0x178a34: 0x3c11e000  lui         $s1, 0xE000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57344 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a30) {
            ctx->pc = 0x178A58u;
            goto label_178a58;
        }
    }
    ctx->pc = 0x178A38u;
    // 0x178a38: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x178A38u;
    {
        const bool branch_taken_0x178a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A38u;
        // 0x178a3c: 0x8e021040  lw          $v0, 0x1040($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a38) {
            ctx->pc = 0x178A7Cu;
            goto label_178a7c;
        }
    }
    ctx->pc = 0x178A40u;
label_178a40:
    // 0x178a40: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x178a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x178a44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x178a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x178a48: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x178a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x178a4c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x178A4Cu;
    {
        const bool branch_taken_0x178a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A4Cu;
        // 0x178a50: 0xae031040  sw          $v1, 0x1040($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a4c) {
            ctx->pc = 0x178A8Cu;
            goto label_178a8c;
        }
    }
    ctx->pc = 0x178A54u;
    // 0x178a54: 0x0  nop
    ctx->pc = 0x178a54u;
    // NOP
label_178a58:
    // 0x178a58: 0xc05e2e6  jal         func_178B98
    ctx->pc = 0x178A58u;
    SET_GPR_U32(ctx, 31, 0x178A60u);
    ctx->pc = 0x178B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178B98u, 0x178A58u, 0x178A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178A60u;
label_178a60:
    // 0x178a60: 0x8e021040  lw          $v0, 0x1040($s0)
    ctx->pc = 0x178a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4160)));
    // 0x178a64: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x178a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x178a68: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x178A68u;
    {
        const bool branch_taken_0x178a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178a68) {
            ctx->pc = 0x178A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178a58;
        }
    }
    ctx->pc = 0x178A70u;
    // 0x178a70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x178A70u;
    {
        const bool branch_taken_0x178a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A70u;
        // 0x178a74: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a70) {
            ctx->pc = 0x178A8Cu;
            goto label_178a8c;
        }
    }
    ctx->pc = 0x178A78u;
label_178a78:
    // 0x178a78: 0x8e021040  lw          $v0, 0x1040($s0)
    ctx->pc = 0x178a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4160)));
label_178a7c:
    // 0x178a7c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x178a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x178a80: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x178a80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x178a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x178a88: 0xae021040  sw          $v0, 0x1040($s0)
    ctx->pc = 0x178a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4160), GPR_U32(ctx, 2));
label_178a8c:
    // 0x178a8c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x178a8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178a90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178a94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178a94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178a98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x178a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x178A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A9Cu;
        // 0x178aa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178AA4u;
}

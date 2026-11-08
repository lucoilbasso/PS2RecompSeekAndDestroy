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

// Function: _Cdvd_cbLoop
// Address: 0x1b9e08 - 0x1b9ec4
void ps2__Cdvd_cbLoop_0x1b9e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__Cdvd_cbLoop_0x1b9e08");
#endif

    switch (ctx->pc) {
        case 0x1b9e08u: goto label_1b9e08;
        case 0x1b9e0cu: goto label_1b9e0c;
        case 0x1b9e10u: goto label_1b9e10;
        case 0x1b9e14u: goto label_1b9e14;
        case 0x1b9e18u: goto label_1b9e18;
        case 0x1b9e1cu: goto label_1b9e1c;
        case 0x1b9e20u: goto label_1b9e20;
        case 0x1b9e24u: goto label_1b9e24;
        case 0x1b9e28u: goto label_1b9e28;
        case 0x1b9e2cu: goto label_1b9e2c;
        case 0x1b9e30u: goto label_1b9e30;
        case 0x1b9e34u: goto label_1b9e34;
        case 0x1b9e38u: goto label_1b9e38;
        case 0x1b9e3cu: goto label_1b9e3c;
        case 0x1b9e40u: goto label_1b9e40;
        case 0x1b9e44u: goto label_1b9e44;
        case 0x1b9e48u: goto label_1b9e48;
        case 0x1b9e4cu: goto label_1b9e4c;
        case 0x1b9e50u: goto label_1b9e50;
        case 0x1b9e54u: goto label_1b9e54;
        case 0x1b9e58u: goto label_1b9e58;
        case 0x1b9e5cu: goto label_1b9e5c;
        case 0x1b9e60u: goto label_1b9e60;
        case 0x1b9e64u: goto label_1b9e64;
        case 0x1b9e68u: goto label_1b9e68;
        case 0x1b9e6cu: goto label_1b9e6c;
        case 0x1b9e70u: goto label_1b9e70;
        case 0x1b9e74u: goto label_1b9e74;
        case 0x1b9e78u: goto label_1b9e78;
        case 0x1b9e7cu: goto label_1b9e7c;
        case 0x1b9e80u: goto label_1b9e80;
        case 0x1b9e84u: goto label_1b9e84;
        case 0x1b9e88u: goto label_1b9e88;
        case 0x1b9e8cu: goto label_1b9e8c;
        case 0x1b9e90u: goto label_1b9e90;
        case 0x1b9e94u: goto label_1b9e94;
        case 0x1b9e98u: goto label_1b9e98;
        case 0x1b9e9cu: goto label_1b9e9c;
        case 0x1b9ea0u: goto label_1b9ea0;
        case 0x1b9ea4u: goto label_1b9ea4;
        case 0x1b9ea8u: goto label_1b9ea8;
        case 0x1b9eacu: goto label_1b9eac;
        case 0x1b9eb0u: goto label_1b9eb0;
        case 0x1b9eb4u: goto label_1b9eb4;
        case 0x1b9eb8u: goto label_1b9eb8;
        case 0x1b9ebcu: goto label_1b9ebc;
        case 0x1b9ec0u: goto label_1b9ec0;
        default: break;
    }

    ctx->pc = 0x1b9e08u;

label_1b9e08:
    // 0x1b9e08: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b9e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1b9e0c:
    // 0x1b9e0c: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x1b9e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_1b9e10:
    // 0x1b9e10: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x1b9e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_1b9e14:
    // 0x1b9e14: 0x3c1e0025  lui         $fp, 0x25
    ctx->pc = 0x1b9e14u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)37 << 16));
label_1b9e18:
    // 0x1b9e18: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1b9e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_1b9e1c:
    // 0x1b9e1c: 0x3c170025  lui         $s7, 0x25
    ctx->pc = 0x1b9e1cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)37 << 16));
label_1b9e20:
    // 0x1b9e20: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1b9e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_1b9e24:
    // 0x1b9e24: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x1b9e24u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
label_1b9e28:
    // 0x1b9e28: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1b9e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1b9e2c:
    // 0x1b9e2c: 0x3c150025  lui         $s5, 0x25
    ctx->pc = 0x1b9e2cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)37 << 16));
label_1b9e30:
    // 0x1b9e30: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1b9e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1b9e34:
    // 0x1b9e34: 0x3c140026  lui         $s4, 0x26
    ctx->pc = 0x1b9e34u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)38 << 16));
label_1b9e38:
    // 0x1b9e38: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b9e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1b9e3c:
    // 0x1b9e3c: 0x3c130025  lui         $s3, 0x25
    ctx->pc = 0x1b9e3cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)37 << 16));
label_1b9e40:
    // 0x1b9e40: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1b9e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1b9e44:
    // 0x1b9e44: 0x3c120025  lui         $s2, 0x25
    ctx->pc = 0x1b9e44u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)37 << 16));
label_1b9e48:
    // 0x1b9e48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b9e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b9e4c:
    // 0x1b9e4c: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x1b9e4cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
label_1b9e50:
    // 0x1b9e50: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1b9e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1b9e54:
    // 0x1b9e54: 0x3c100025  lui         $s0, 0x25
    ctx->pc = 0x1b9e54u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)37 << 16));
label_1b9e58:
    // 0x1b9e58: 0xc06bd28  jal         func_1AF4A0
label_1b9e5c:
    if (ctx->pc == 0x1B9E5Cu) {
        ctx->pc = 0x1B9E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E58u;
        // 0x1b9e5c: 0x8fc4c0a0  lw          $a0, -0x3F60($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294951072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9E60u;
        goto label_1b9e60;
    }
    ctx->pc = 0x1B9E58u;
    SET_GPR_U32(ctx, 31, 0x1B9E60u);
    ctx->pc = 0x1B9E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9E58u;
    // 0x1b9e5c: 0x8fc4c0a0  lw          $a0, -0x3F60($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294951072)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B9E58u, 0x1B9E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9E60u;
label_1b9e60:
    // 0x1b9e60: 0x8e63c0d4  lw          $v1, -0x3F2C($s3)
    ctx->pc = 0x1b9e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951124)));
label_1b9e64:
    // 0x1b9e64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b9e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b9e68:
    // 0x1b9e68: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1b9e6c:
    if (ctx->pc == 0x1B9E6Cu) {
        ctx->pc = 0x1B9E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E68u;
        // 0x1b9e6c: 0x8ea2c090  lw          $v0, -0x3F70($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294951056)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9E70u;
        goto label_1b9e70;
    }
    ctx->pc = 0x1B9E68u;
    {
        const bool branch_taken_0x1b9e68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B9E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E68u;
        // 0x1b9e6c: 0x8ea2c090  lw          $v0, -0x3F70($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294951056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9e68) {
            ctx->pc = 0x1B9E88u;
            goto label_1b9e88;
        }
    }
    ctx->pc = 0x1B9E70u;
label_1b9e70:
    // 0x1b9e70: 0xae40c0b0  sw          $zero, -0x3F50($s2)
    ctx->pc = 0x1b9e70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294951088), GPR_U32(ctx, 0));
label_1b9e74:
    // 0x1b9e74: 0xae60c0d4  sw          $zero, -0x3F2C($s3)
    ctx->pc = 0x1b9e74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294951124), GPR_U32(ctx, 0));
label_1b9e78:
    // 0x1b9e78: 0xaee0c094  sw          $zero, -0x3F6C($s7)
    ctx->pc = 0x1b9e78u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294951060), GPR_U32(ctx, 0));
label_1b9e7c:
    // 0x1b9e7c: 0xc06bca8  jal         func_1AF2A0
label_1b9e80:
    if (ctx->pc == 0x1B9E80u) {
        ctx->pc = 0x1B9E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E7Cu;
        // 0x1b9e80: 0xaec0d68c  sw          $zero, -0x2974($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294956684), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9E84u;
        goto label_1b9e84;
    }
    ctx->pc = 0x1B9E7Cu;
    SET_GPR_U32(ctx, 31, 0x1B9E84u);
    ctx->pc = 0x1B9E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9E7Cu;
    // 0x1b9e80: 0xaec0d68c  sw          $zero, -0x2974($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294956684), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF2A0u, 0x1B9E7Cu, 0x1B9E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9E84u;
label_1b9e84:
    // 0x1b9e84: 0x8ea2c090  lw          $v0, -0x3F70($s5)
    ctx->pc = 0x1b9e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294951056)));
label_1b9e88:
    // 0x1b9e88: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1b9e8c:
    if (ctx->pc == 0x1B9E8Cu) {
        ctx->pc = 0x1B9E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E88u;
        // 0x1b9e8c: 0x2684aed8  addiu       $a0, $s4, -0x5128 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9E90u;
        goto label_1b9e90;
    }
    ctx->pc = 0x1B9E88u;
    {
        const bool branch_taken_0x1b9e88 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B9E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E88u;
        // 0x1b9e8c: 0x2684aed8  addiu       $a0, $s4, -0x5128 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9e88) {
            ctx->pc = 0x1B9E9Cu;
            goto label_1b9e9c;
        }
    }
    ctx->pc = 0x1B9E90u;
label_1b9e90:
    // 0x1b9e90: 0x8e25d680  lw          $a1, -0x2980($s1)
    ctx->pc = 0x1b9e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956672)));
label_1b9e94:
    // 0x1b9e94: 0xc06c3f0  jal         func_1B0FC0
label_1b9e98:
    if (ctx->pc == 0x1B9E98u) {
        ctx->pc = 0x1B9E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E94u;
        // 0x1b9e98: 0x8e06c0d8  lw          $a2, -0x3F28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9E9Cu;
        goto label_1b9e9c;
    }
    ctx->pc = 0x1B9E94u;
    SET_GPR_U32(ctx, 31, 0x1B9E9Cu);
    ctx->pc = 0x1B9E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9E94u;
    // 0x1b9e98: 0x8e06c0d8  lw          $a2, -0x3F28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1B9E94u, 0x1B9E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9E9Cu;
label_1b9e9c:
    // 0x1b9e9c: 0x8e23d680  lw          $v1, -0x2980($s1)
    ctx->pc = 0x1b9e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956672)));
label_1b9ea0:
    // 0x1b9ea0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1b9ea4:
    if (ctx->pc == 0x1B9EA4u) {
        ctx->pc = 0x1B9EA8u;
        goto label_1b9ea8;
    }
    ctx->pc = 0x1B9EA0u;
    {
        const bool branch_taken_0x1b9ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9ea0) {
            ctx->pc = 0x1B9EBCu;
            goto label_1b9ebc;
        }
    }
    ctx->pc = 0x1B9EA8u;
label_1b9ea8:
    // 0x1b9ea8: 0x8e02c0d8  lw          $v0, -0x3F28($s0)
    ctx->pc = 0x1b9ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951128)));
label_1b9eac:
    // 0x1b9eac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b9eb0:
    if (ctx->pc == 0x1B9EB0u) {
        ctx->pc = 0x1B9EB4u;
        goto label_1b9eb4;
    }
    ctx->pc = 0x1B9EACu;
    {
        const bool branch_taken_0x1b9eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9eac) {
            ctx->pc = 0x1B9EBCu;
            goto label_1b9ebc;
        }
    }
    ctx->pc = 0x1B9EB4u;
label_1b9eb4:
    // 0x1b9eb4: 0x60f809  jalr        $v1
label_1b9eb8:
    if (ctx->pc == 0x1B9EB8u) {
        ctx->pc = 0x1B9EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9EB4u;
        // 0x1b9eb8: 0x8e04c0d8  lw          $a0, -0x3F28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9EBCu;
        goto label_1b9ebc;
    }
    ctx->pc = 0x1B9EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B9EBCu);
        ctx->pc = 0x1B9EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9EB4u;
        // 0x1b9eb8: 0x8e04c0d8  lw          $a0, -0x3F28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951128)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9EB4u, 0x1B9EBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9EBCu;
label_1b9ebc:
    // 0x1b9ebc: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
label_1b9ec0:
    if (ctx->pc == 0x1B9EC0u) {
        ctx->pc = 0x1B9EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9EBCu;
        // 0x1b9ec0: 0xae40c0b0  sw          $zero, -0x3F50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294951088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9EC4u;
        goto label_fallthrough_0x1b9ebc;
    }
    ctx->pc = 0x1B9EBCu;
    {
        const bool branch_taken_0x1b9ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9EBCu;
        // 0x1b9ec0: 0xae40c0b0  sw          $zero, -0x3F50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294951088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9ebc) {
            ctx->pc = 0x1B9E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9e58;
        }
    }
label_fallthrough_0x1b9ebc:
    ctx->pc = 0x1B9EC4u;
}

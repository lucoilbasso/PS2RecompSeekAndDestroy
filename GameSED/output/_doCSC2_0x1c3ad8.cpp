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

// Function: _doCSC2
// Address: 0x1c3ad8 - 0x1c3c98
void _doCSC2_0x1c3ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_doCSC2_0x1c3ad8");
#endif

    switch (ctx->pc) {
        case 0x1c3b48u: goto label_1c3b48;
        case 0x1c3b78u: goto label_1c3b78;
        case 0x1c3b94u: goto label_1c3b94;
        case 0x1c3b9cu: goto label_1c3b9c;
        case 0x1c3be4u: goto label_1c3be4;
        case 0x1c3c0cu: goto label_1c3c0c;
        case 0x1c3c18u: goto label_1c3c18;
        case 0x1c3c48u: goto label_1c3c48;
        case 0x1c3c50u: goto label_1c3c50;
        case 0x1c3c74u: goto label_1c3c74;
        case 0x1c3c80u: goto label_1c3c80;
        default: break;
    }

    ctx->pc = 0x1c3ad8u;

    // 0x1c3ad8: 0x240703ff  addiu       $a3, $zero, 0x3FF
    ctx->pc = 0x1c3ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1c3adc: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1c3adcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1c3ae0: 0xc7001a  div         $zero, $a2, $a3
    ctx->pc = 0x1c3ae0u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c3ae4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1c3ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1c3ae8: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x1c3ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x1c3aec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c3aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3af0: 0x3442fc00  ori         $v0, $v0, 0xFC00
    ctx->pc = 0x1c3af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64512);
    // 0x1c3af4: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1c3af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1c3af8: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1c3af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1c3afc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c3afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c3b00: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1c3b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1c3b04: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1c3b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1c3b08: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1c3b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1c3b0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c3b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c3b10: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C3B10u;
    {
        const bool branch_taken_0x1c3b10 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3b10) {
            ctx->pc = 0x1C3B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3B10u;
            // 0x1c3b14: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3B18u;
            goto label_1c3b18;
        }
    }
    ctx->pc = 0x1C3B18u;
label_1c3b18:
    // 0x1c3b18: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c3b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3b1c: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x1c3b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x1c3b20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c3b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3b24: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1c3b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1c3b28: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x1c3b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c3b2c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1c3b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1c3b30: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1c3b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1c3b34: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1c3b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1c3b38: 0x4012  mflo        $t0
    ctx->pc = 0x1c3b38u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x1c3b3c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1c3b3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1c3b40: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x1c3b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x1c3b44: 0x0  nop
    ctx->pc = 0x1c3b44u;
    // NOP
label_1c3b48:
    // 0x1c3b48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c3b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c3b4c: 0x0  nop
    ctx->pc = 0x1c3b4cu;
    // NOP
    // 0x1c3b50: 0x0  nop
    ctx->pc = 0x1c3b50u;
    // NOP
    // 0x1c3b54: 0x0  nop
    ctx->pc = 0x1c3b54u;
    // NOP
    // 0x1c3b58: 0x0  nop
    ctx->pc = 0x1c3b58u;
    // NOP
    // 0x1c3b5c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C3B5Cu;
    {
        const bool branch_taken_0x1c3b5c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c3b5c) {
            ctx->pc = 0x1C3B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3b48;
        }
    }
    ctx->pc = 0x1C3B64u;
    // 0x1c3b64: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1c3b64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x1c3b68: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c3b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3b6c: 0x24a53998  addiu       $a1, $a1, 0x3998
    ctx->pc = 0x1c3b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14744));
    // 0x1c3b70: 0xc06bc60  jal         func_1AF180
    ctx->pc = 0x1C3B70u;
    SET_GPR_U32(ctx, 31, 0x1C3B78u);
    ctx->pc = 0x1C3B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3B70u;
    // 0x1c3b74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF180u, 0x1C3B70u, 0x1C3B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3B78u;
label_1c3b78:
    // 0x1c3b78: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c3b78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3b7c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1c3b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c3b80: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c3b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3b84: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c3b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3b88: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x1c3b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x1c3b8c: 0xc06c01e  jal         func_1B0078
    ctx->pc = 0x1C3B8Cu;
    SET_GPR_U32(ctx, 31, 0x1C3B94u);
    ctx->pc = 0x1C3B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3B8Cu;
    // 0x1c3b90: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0078u, 0x1C3B8Cu, 0x1C3B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3B94u;
label_1c3b94:
    // 0x1c3b94: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1C3B94u;
    SET_GPR_U32(ctx, 31, 0x1C3B9Cu);
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1C3B94u, 0x1C3B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3B9Cu;
label_1c3b9c:
    // 0x1c3b9c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1c3b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1c3ba0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c3ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3ba4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c3ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c3ba8: 0x3484b010  ori         $a0, $a0, 0xB010
    ctx->pc = 0x1c3ba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45072);
    // 0x1c3bac: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x1c3bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x1c3bb0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1c3bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3bb4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1c3bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1c3bb8: 0x34a5b020  ori         $a1, $a1, 0xB020
    ctx->pc = 0x1c3bb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45088);
    // 0x1c3bbc: 0x3403ffc0  ori         $v1, $zero, 0xFFC0
    ctx->pc = 0x1c3bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1c3bc0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c3bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3bc4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1c3bc4u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 3));
    // 0x1c3bc8: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x1c3bc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x1c3bcc: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1c3bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c3bd0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1c3bd0u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 3));
    // 0x1c3bd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3BD4u;
    {
        const bool branch_taken_0x1c3bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3BD4u;
        // 0x1c3bd8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3bd4) {
            ctx->pc = 0x1C3BE8u;
            goto label_1c3be8;
        }
    }
    ctx->pc = 0x1C3BDCu;
    // 0x1c3bdc: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1C3BDCu;
    SET_GPR_U32(ctx, 31, 0x1C3BE4u);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1C3BDCu, 0x1C3BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3BE4u;
label_1c3be4:
    // 0x1c3be4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c3be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1c3be8:
    // 0x1c3be8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1c3be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1c3bec: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1c3becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1c3bf0: 0x346303ff  ori         $v1, $v1, 0x3FF
    ctx->pc = 0x1c3bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1023);
    // 0x1c3bf4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c3bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1c3bf8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1c3bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c3bfc: 0x8e240858  lw          $a0, 0x858($s1)
    ctx->pc = 0x1c3bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x1c3c00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c3c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3c04: 0xc06f684  jal         func_1BDA10
    ctx->pc = 0x1C3C04u;
    SET_GPR_U32(ctx, 31, 0x1C3C0Cu);
    ctx->pc = 0x1C3C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3C04u;
    // 0x1c3c08: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA10u, 0x1C3C04u, 0x1C3C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3C0Cu;
label_1c3c0c:
    // 0x1c3c0c: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1c3c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1c3c10: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1c3c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3c14: 0x0  nop
    ctx->pc = 0x1c3c14u;
    // NOP
label_1c3c18:
    // 0x1c3c18: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c3c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3c1c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1c3c1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c3c20: 0x0  nop
    ctx->pc = 0x1c3c20u;
    // NOP
    // 0x1c3c24: 0x0  nop
    ctx->pc = 0x1c3c24u;
    // NOP
    // 0x1c3c28: 0x0  nop
    ctx->pc = 0x1c3c28u;
    // NOP
    // 0x1c3c2c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C3C2Cu;
    {
        const bool branch_taken_0x1c3c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3c2c) {
            ctx->pc = 0x1C3C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3c18;
        }
    }
    ctx->pc = 0x1C3C34u;
    // 0x1c3c34: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3C34u;
    {
        const bool branch_taken_0x1c3c34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C34u;
        // 0x1c3c38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3c34) {
            ctx->pc = 0x1C3C48u;
            goto label_1c3c48;
        }
    }
    ctx->pc = 0x1C3C3Cu;
    // 0x1c3c3c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1c3c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1c3c40: 0xc06f8a0  jal         func_1BE280
    ctx->pc = 0x1C3C40u;
    SET_GPR_U32(ctx, 31, 0x1C3C48u);
    ctx->pc = 0x1C3C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3C40u;
    // 0x1c3c44: 0x24a5b718  addiu       $a1, $a1, -0x48E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE280u, 0x1C3C40u, 0x1C3C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3C48u;
label_1c3c48:
    // 0x1c3c48: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c3c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3c4c: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1c3c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_1c3c50:
    // 0x1c3c50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c3c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c3c54: 0x0  nop
    ctx->pc = 0x1c3c54u;
    // NOP
    // 0x1c3c58: 0x0  nop
    ctx->pc = 0x1c3c58u;
    // NOP
    // 0x1c3c5c: 0x0  nop
    ctx->pc = 0x1c3c5cu;
    // NOP
    // 0x1c3c60: 0x0  nop
    ctx->pc = 0x1c3c60u;
    // NOP
    // 0x1c3c64: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C3C64u;
    {
        const bool branch_taken_0x1c3c64 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c3c64) {
            ctx->pc = 0x1C3C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3c50;
        }
    }
    ctx->pc = 0x1C3C6Cu;
    // 0x1c3c6c: 0xc06c004  jal         func_1B0010
    ctx->pc = 0x1C3C6Cu;
    SET_GPR_U32(ctx, 31, 0x1C3C74u);
    ctx->pc = 0x1C3C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3C6Cu;
    // 0x1c3c70: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0010u, 0x1C3C6Cu, 0x1C3C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3C74u;
label_1c3c74:
    // 0x1c3c74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c3c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3c78: 0xc06bc64  jal         func_1AF190
    ctx->pc = 0x1C3C78u;
    SET_GPR_U32(ctx, 31, 0x1C3C80u);
    ctx->pc = 0x1C3C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3C78u;
    // 0x1c3c7c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF190u, 0x1C3C78u, 0x1C3C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3C80u;
label_1c3c80:
    // 0x1c3c80: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1c3c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c3c84: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1c3c84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c3c88: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1c3c88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c3c8c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1c3c8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c3c90: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C90u;
        // 0x1c3c94: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3C98u;
}

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

// Function: _strtol_r
// Address: 0x1d0ee8 - 0x1d1120
void _strtol_r_0x1d0ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_strtol_r_0x1d0ee8");
#endif

    switch (ctx->pc) {
        case 0x1d0f30u: goto label_1d0f30;
        case 0x1d0ff4u: goto label_1d0ff4;
        case 0x1d1008u: goto label_1d1008;
        case 0x1d1018u: goto label_1d1018;
        case 0x1d1058u: goto label_1d1058;
        default: break;
    }

    ctx->pc = 0x1d0ee8u;

    // 0x1d0ee8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d0ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d0eec: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1d0eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1d0ef0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1d0ef0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ef4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d0ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d0ef8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1d0ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1d0efc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1d0efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1d0f00: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1d0f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1d0f04: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1d0f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1d0f08: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1d0f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1d0f0c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1d0f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1d0f10: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x1d0f10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0f14: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1d0f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1d0f18: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1d0f18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0f1c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1d0f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1d0f20: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1d0f20u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0f24: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1d0f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1d0f28: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1d0f28u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0f2c: 0x0  nop
    ctx->pc = 0x1d0f2cu;
    // NOP
label_1d0f30:
    // 0x1d0f30: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x1d0f30u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d0f34: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d0f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1d0f38: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1d0f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d0f3c: 0x9042c2a9  lbu         $v0, -0x3D57($v0)
    ctx->pc = 0x1d0f3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294951593)));
    // 0x1d0f40: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1d0f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1d0f44: 0x0  nop
    ctx->pc = 0x1d0f44u;
    // NOP
    // 0x1d0f48: 0x0  nop
    ctx->pc = 0x1d0f48u;
    // NOP
    // 0x1d0f4c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D0F4Cu;
    {
        const bool branch_taken_0x1d0f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F4Cu;
        // 0x1d0f50: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0f4c) {
            ctx->pc = 0x1D0F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0f30;
        }
    }
    ctx->pc = 0x1D0F54u;
    // 0x1d0f54: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x1d0f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1d0f58: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0F58u;
    {
        const bool branch_taken_0x1d0f58 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D0F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F58u;
        // 0x1d0f5c: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0f58) {
            ctx->pc = 0x1D0F70u;
            goto label_1d0f70;
        }
    }
    ctx->pc = 0x1D0F60u;
    // 0x1d0f60: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x1d0f60u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d0f64: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d0f64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d0f68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0F68u;
    {
        const bool branch_taken_0x1d0f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F68u;
        // 0x1d0f6c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0f68) {
            ctx->pc = 0x1D0F80u;
            goto label_1d0f80;
        }
    }
    ctx->pc = 0x1D0F70u;
label_1d0f70:
    // 0x1d0f70: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0F70u;
    {
        const bool branch_taken_0x1d0f70 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0f70) {
            ctx->pc = 0x1D0F80u;
            goto label_1d0f80;
        }
    }
    ctx->pc = 0x1D0F78u;
    // 0x1d0f78: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x1d0f78u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d0f7c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d0f7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1d0f80:
    // 0x1d0f80: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0F80u;
    {
        const bool branch_taken_0x1d0f80 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F80u;
        // 0x1d0f84: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0f80) {
            ctx->pc = 0x1D0F90u;
            goto label_1d0f90;
        }
    }
    ctx->pc = 0x1D0F88u;
    // 0x1d0f88: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D0F88u;
    {
        const bool branch_taken_0x1d0f88 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0f88) {
            ctx->pc = 0x1D0FBCu;
            goto label_1d0fbc;
        }
    }
    ctx->pc = 0x1D0F90u;
label_1d0f90:
    // 0x1d0f90: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1d0f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1d0f94: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D0F94u;
    {
        const bool branch_taken_0x1d0f94 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D0F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F94u;
        // 0x1d0f98: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0f94) {
            ctx->pc = 0x1D0FBCu;
            goto label_1d0fbc;
        }
    }
    ctx->pc = 0x1D0F9Cu;
    // 0x1d0f9c: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x1d0f9cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d0fa0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0FA0u;
    {
        const bool branch_taken_0x1d0fa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D0FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0FA0u;
        // 0x1d0fa4: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0fa0) {
            ctx->pc = 0x1D0FB0u;
            goto label_1d0fb0;
        }
    }
    ctx->pc = 0x1D0FA8u;
    // 0x1d0fa8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0FA8u;
    {
        const bool branch_taken_0x1d0fa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0fa8) {
            ctx->pc = 0x1D0FBCu;
            goto label_1d0fbc;
        }
    }
    ctx->pc = 0x1D0FB0u;
label_1d0fb0:
    // 0x1d0fb0: 0x82510001  lb          $s1, 0x1($s2)
    ctx->pc = 0x1d0fb0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x1d0fb4: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x1d0fb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x1d0fb8: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x1d0fb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d0fbc:
    // 0x1d0fbc: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0FBCu;
    {
        const bool branch_taken_0x1d0fbc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0FBCu;
        // 0x1d0fc0: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0fbc) {
            ctx->pc = 0x1D0FD0u;
            goto label_1d0fd0;
        }
    }
    ctx->pc = 0x1D0FC4u;
    // 0x1d0fc4: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x1d0fc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d0fc8: 0x3a220030  xori        $v0, $s1, 0x30
    ctx->pc = 0x1d0fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)48);
    // 0x1d0fcc: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x1d0fccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_1d0fd0:
    // 0x1d0fd0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d0fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d0fd4: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x1d0fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x1d0fd8: 0x34148000  ori         $s4, $zero, 0x8000
    ctx->pc = 0x1d0fd8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d0fdc: 0x14a43c  dsll32      $s4, $s4, 16
    ctx->pc = 0x1d0fdcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 16));
    // 0x1d0fe0: 0x57a00a  movz        $s4, $v0, $s7
    ctx->pc = 0x1d0fe0u;
    if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
    // 0x1d0fe4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1d0fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0fe8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d0fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0fec: 0xc072536  jal         func_1C94D8
    ctx->pc = 0x1D0FECu;
    SET_GPR_U32(ctx, 31, 0x1D0FF4u);
    ctx->pc = 0x1D0FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0FECu;
    // 0x1d0ff0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C94D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C94D8u, 0x1D0FECu, 0x1D0FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0FF4u;
label_1d0ff4:
    // 0x1d0ff4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d0ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ff8: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x1d0ff8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d0ffc: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x1d0ffcu;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x1d1000: 0xc0723d6  jal         func_1C8F58
    ctx->pc = 0x1D1000u;
    SET_GPR_U32(ctx, 31, 0x1D1008u);
    ctx->pc = 0x1D1004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1000u;
    // 0x1d1004: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8F58u, 0x1D1000u, 0x1D1008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1008u;
label_1d1008:
    // 0x1d1008: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d1008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d100c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d100cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1010: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1D1010u;
    {
        const bool branch_taken_0x1d1010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1010u;
        // 0x1d1014: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1010) {
            ctx->pc = 0x1D1068u;
            goto label_1d1068;
        }
    }
    ctx->pc = 0x1D1018u;
label_1d1018:
    // 0x1d1018: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x1d1018u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1d101c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1D101Cu;
    {
        const bool branch_taken_0x1d101c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d101c) {
            ctx->pc = 0x1D10A8u;
            goto label_1d10a8;
        }
    }
    ctx->pc = 0x1D1024u;
    // 0x1d1024: 0x4c00008  bltz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1024u;
    {
        const bool branch_taken_0x1d1024 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1D1028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1024u;
        // 0x1d1028: 0x285102b  sltu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1024) {
            ctx->pc = 0x1D1048u;
            goto label_1d1048;
        }
    }
    ctx->pc = 0x1D102Cu;
    // 0x1d102c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1D102Cu;
    {
        const bool branch_taken_0x1d102c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d102c) {
            ctx->pc = 0x1D1030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D102Cu;
            // 0x1d1030: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1060u;
            goto label_1d1060;
        }
    }
    ctx->pc = 0x1D1034u;
    // 0x1d1034: 0x14b40006  bne         $a1, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D1034u;
    {
        const bool branch_taken_0x1d1034 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 20));
        ctx->pc = 0x1D1038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1034u;
        // 0x1d1038: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1034) {
            ctx->pc = 0x1D1050u;
            goto label_1d1050;
        }
    }
    ctx->pc = 0x1D103Cu;
    // 0x1d103c: 0x2d1102a  slt         $v0, $s6, $s1
    ctx->pc = 0x1d103cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1d1040: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1040u;
    {
        const bool branch_taken_0x1d1040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1040) {
            ctx->pc = 0x1D1050u;
            goto label_1d1050;
        }
    }
    ctx->pc = 0x1D1048u;
label_1d1048:
    // 0x1d1048: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1048u;
    {
        const bool branch_taken_0x1d1048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1048u;
        // 0x1d104c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1048) {
            ctx->pc = 0x1D1060u;
            goto label_1d1060;
        }
    }
    ctx->pc = 0x1D1050u;
label_1d1050:
    // 0x1d1050: 0xc07206e  jal         func_1C81B8
    ctx->pc = 0x1D1050u;
    SET_GPR_U32(ctx, 31, 0x1D1058u);
    ctx->pc = 0x1D1054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1050u;
    // 0x1d1054: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C81B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C81B8u, 0x1D1050u, 0x1D1058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1058u;
label_1d1058:
    // 0x1d1058: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d1058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d105c: 0x222282d  daddu       $a1, $s1, $v0
    ctx->pc = 0x1d105cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_1d1060:
    // 0x1d1060: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x1d1060u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d1064: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d1064u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1d1068:
    // 0x1d1068: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1d1068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1d106c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1d106cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1d1070: 0x9084c2a9  lbu         $a0, -0x3D57($a0)
    ctx->pc = 0x1d1070u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294951593)));
    // 0x1d1074: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x1d1074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x1d1078: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1078u;
    {
        const bool branch_taken_0x1d1078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1078u;
        // 0x1d107c: 0x30820003  andi        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1078) {
            ctx->pc = 0x1D1088u;
            goto label_1d1088;
        }
    }
    ctx->pc = 0x1D1080u;
    // 0x1d1080: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x1D1080u;
    {
        const bool branch_taken_0x1d1080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1080u;
        // 0x1d1084: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1080) {
            ctx->pc = 0x1D1018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1018;
        }
    }
    ctx->pc = 0x1D1088u;
label_1d1088:
    // 0x1d1088: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1088u;
    {
        const bool branch_taken_0x1d1088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1088u;
        // 0x1d108c: 0x2622ffc9  addiu       $v0, $s1, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1088) {
            ctx->pc = 0x1D10A8u;
            goto label_1d10a8;
        }
    }
    ctx->pc = 0x1D1090u;
    // 0x1d1090: 0x2623ffa9  addiu       $v1, $s1, -0x57
    ctx->pc = 0x1d1090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967209));
    // 0x1d1094: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x1d1094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1d1098: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d1098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d109c: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x1D109Cu;
    {
        const bool branch_taken_0x1d109c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D10A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D109Cu;
        // 0x1d10a0: 0x64880a  movz        $s1, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d109c) {
            ctx->pc = 0x1D1018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1018;
        }
    }
    ctx->pc = 0x1D10A4u;
    // 0x1d10a4: 0x0  nop
    ctx->pc = 0x1d10a4u;
    // NOP
label_1d10a8:
    // 0x1d10a8: 0x4c1000b  bgez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1D10A8u;
    {
        const bool branch_taken_0x1d10a8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1D10ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D10A8u;
        // 0x1d10ac: 0x5102f  dsubu       $v0, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d10a8) {
            ctx->pc = 0x1D10D8u;
            goto label_1d10d8;
        }
    }
    ctx->pc = 0x1D10B0u;
    // 0x1d10b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d10b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d10b4: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x1d10b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
    // 0x1d10b8: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1d10b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d10bc: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x1d10bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1d10c0: 0x77280a  movz        $a1, $v1, $s7
    ctx->pc = 0x1d10c0u;
    if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x1d10c4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1d10c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d10c8: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x1d10c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1d10cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D10CCu;
    {
        const bool branch_taken_0x1d10cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D10D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D10CCu;
        // 0x1d10d0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d10cc) {
            ctx->pc = 0x1D10DCu;
            goto label_1d10dc;
        }
    }
    ctx->pc = 0x1D10D4u;
    // 0x1d10d4: 0x0  nop
    ctx->pc = 0x1d10d4u;
    // NOP
label_1d10d8:
    // 0x1d10d8: 0x57280b  movn        $a1, $v0, $s7
    ctx->pc = 0x1d10d8u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_1d10dc:
    // 0x1d10dc: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D10DCu;
    {
        const bool branch_taken_0x1d10dc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D10E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D10DCu;
        // 0x1d10e0: 0x2642ffff  addiu       $v0, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d10dc) {
            ctx->pc = 0x1D10ECu;
            goto label_1d10ec;
        }
    }
    ctx->pc = 0x1D10E4u;
    // 0x1d10e4: 0x46a80b  movn        $s5, $v0, $a2
    ctx->pc = 0x1d10e4u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
    // 0x1d10e8: 0xafd50000  sw          $s5, 0x0($fp)
    ctx->pc = 0x1d10e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 21));
label_1d10ec:
    // 0x1d10ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d10ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d10f0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1d10f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d10f4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1d10f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d10f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1d10f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d10fc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1d10fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d1100: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1d1100u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d1104: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1d1104u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d1108: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1d1108u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d110c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1d110cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d1110: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1d1110u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d1114: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1d1114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1118: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1118u;
        // 0x1d111c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1120u;
}

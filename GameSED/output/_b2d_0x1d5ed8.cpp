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

// Function: _b2d
// Address: 0x1d5ed8 - 0x1d6070
void _b2d_0x1d5ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_b2d_0x1d5ed8");
#endif

    switch (ctx->pc) {
        case 0x1d5f18u: goto label_1d5f18;
        default: break;
    }

    ctx->pc = 0x1d5ed8u;

    // 0x1d5ed8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d5ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d5edc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5ee0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d5ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ee4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d5ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d5ee8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d5ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d5eec: 0x24940014  addiu       $s4, $a0, 0x14
    ctx->pc = 0x1d5eecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x1d5ef0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d5ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d5ef4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d5ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d5ef8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1d5ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1d5efc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1d5efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d5f00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d5f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d5f04: 0x2829021  addu        $s2, $s4, $v0
    ctx->pc = 0x1d5f04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1d5f08: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x1d5f08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x1d5f0c: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x1d5f0cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d5f10: 0xc07558c  jal         func_1D5630
    ctx->pc = 0x1D5F10u;
    SET_GPR_U32(ctx, 31, 0x1D5F18u);
    ctx->pc = 0x1D5F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F10u;
    // 0x1d5f14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5630u, 0x1D5F10u, 0x1D5F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5F18u;
label_1d5f18:
    // 0x1d5f18: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d5f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f1c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1d5f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d5f20: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1d5f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d5f24: 0x28c3000b  slti        $v1, $a2, 0xB
    ctx->pc = 0x1d5f24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1d5f28: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D5F28u;
    {
        const bool branch_taken_0x1d5f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F28u;
        // 0x1d5f2c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f28) {
            ctx->pc = 0x1D5F98u;
            goto label_1d5f98;
        }
    }
    ctx->pc = 0x1D5F30u;
    // 0x1d5f30: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1d5f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1d5f34: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x1d5f34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x1d5f38: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1d5f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d5f3c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1d5f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1d5f40: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1d5f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1d5f44: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x1d5f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d5f48: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x1d5f48u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x1d5f4c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d5f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d5f50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d5f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f54: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d5f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d5f58: 0x292182b  sltu        $v1, $s4, $s2
    ctx->pc = 0x1d5f58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1d5f5c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D5F5Cu;
    {
        const bool branch_taken_0x1d5f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F5Cu;
        // 0x1d5f60: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f5c) {
            ctx->pc = 0x1D5F68u;
            goto label_1d5f68;
        }
    }
    ctx->pc = 0x1D5F64u;
    // 0x1d5f64: 0x8e44fffc  lw          $a0, -0x4($s2)
    ctx->pc = 0x1d5f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_1d5f68:
    // 0x1d5f68: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1d5f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1d5f6c: 0x24c30015  addiu       $v1, $a2, 0x15
    ctx->pc = 0x1d5f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 21));
    // 0x1d5f70: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1d5f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d5f74: 0x731804  sllv        $v1, $s3, $v1
    ctx->pc = 0x1d5f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
    // 0x1d5f78: 0x441006  srlv        $v0, $a0, $v0
    ctx->pc = 0x1d5f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d5f7c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1d5f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5f80: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1d5f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1d5f84: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d5f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d5f88: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x1d5f88u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x1d5f8c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d5f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d5f90: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1D5F90u;
    {
        const bool branch_taken_0x1d5f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F90u;
        // 0x1d5f94: 0x3183e  dsrl32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f90) {
            ctx->pc = 0x1D6048u;
            goto label_1d6048;
        }
    }
    ctx->pc = 0x1D5F98u;
label_1d5f98:
    // 0x1d5f98: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x1d5f98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1d5f9c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5F9Cu;
    {
        const bool branch_taken_0x1d5f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5f9c) {
            ctx->pc = 0x1D5FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5F9Cu;
            // 0x1d5fa0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5FACu;
            goto label_1d5fac;
        }
    }
    ctx->pc = 0x1D5FA4u;
    // 0x1d5fa4: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x1d5fa4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x1d5fa8: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x1d5fa8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d5fac:
    // 0x1d5fac: 0x24c6fff5  addiu       $a2, $a2, -0xB
    ctx->pc = 0x1d5facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967285));
    // 0x1d5fb0: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D5FB0u;
    {
        const bool branch_taken_0x1d5fb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FB0u;
        // 0x1d5fb4: 0x61823  negu        $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5fb0) {
            ctx->pc = 0x1D6018u;
            goto label_1d6018;
        }
    }
    ctx->pc = 0x1D5FB8u;
    // 0x1d5fb8: 0xd31004  sllv        $v0, $s3, $a2
    ctx->pc = 0x1d5fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 6) & 0x1F));
    // 0x1d5fbc: 0x671806  srlv        $v1, $a3, $v1
    ctx->pc = 0x1d5fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x1d5fc0: 0x3c053ff0  lui         $a1, 0x3FF0
    ctx->pc = 0x1d5fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16368 << 16));
    // 0x1d5fc4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d5fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d5fc8: 0x292182b  sltu        $v1, $s4, $s2
    ctx->pc = 0x1d5fc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1d5fcc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1d5fccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1d5fd0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1d5fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1d5fd4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1d5fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1d5fd8: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x1d5fd8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x1d5fdc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d5fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d5fe0: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x1d5fe0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1d5fe4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D5FE4u;
    {
        const bool branch_taken_0x1d5fe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FE4u;
        // 0x1d5fe8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5fe4) {
            ctx->pc = 0x1D5FF0u;
            goto label_1d5ff0;
        }
    }
    ctx->pc = 0x1D5FECu;
    // 0x1d5fec: 0x8e53fffc  lw          $s3, -0x4($s2)
    ctx->pc = 0x1d5fecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_1d5ff0:
    // 0x1d5ff0: 0x61023  negu        $v0, $a2
    ctx->pc = 0x1d5ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x1d5ff4: 0xc71804  sllv        $v1, $a3, $a2
    ctx->pc = 0x1d5ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x1d5ff8: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x1d5ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d5ffc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1d5ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d6000: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1d6000u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1d6004: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d6004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d6008: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x1d6008u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x1d600c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d600cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d6010: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D6010u;
    {
        const bool branch_taken_0x1d6010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6010u;
        // 0x1d6014: 0x3183e  dsrl32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6010) {
            ctx->pc = 0x1D6048u;
            goto label_1d6048;
        }
    }
    ctx->pc = 0x1D6018u;
label_1d6018:
    // 0x1d6018: 0x3c023ff0  lui         $v0, 0x3FF0
    ctx->pc = 0x1d6018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
    // 0x1d601c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1d601cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1d6020: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1d6020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1d6024: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x1d6024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1d6028: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x1d6028u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x1d602c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d602cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d6030: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1d6030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d6034: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1d6034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1d6038: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x1d6038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1d603c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x1d603cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1d6040: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1d6040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1d6044: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x1d6044u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
label_1d6048:
    // 0x1d6048: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x1d6048u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x1d604c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d604cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6050: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d6050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6054: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d6054u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d6058: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d6058u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d605c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d605cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d6060: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d6060u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6064: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1d6064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d6068: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6068u;
        // 0x1d606c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6070u;
}

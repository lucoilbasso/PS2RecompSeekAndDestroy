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

// Function: _csc_storeRefImage
// Address: 0x1c3d68 - 0x1c3ff0
void _csc_storeRefImage_0x1c3d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_csc_storeRefImage_0x1c3d68");
#endif

    switch (ctx->pc) {
        case 0x1c3db0u: goto label_1c3db0;
        case 0x1c3de0u: goto label_1c3de0;
        case 0x1c3e08u: goto label_1c3e08;
        case 0x1c3e18u: goto label_1c3e18;
        case 0x1c3e74u: goto label_1c3e74;
        case 0x1c3e90u: goto label_1c3e90;
        case 0x1c3e98u: goto label_1c3e98;
        case 0x1c3ed4u: goto label_1c3ed4;
        case 0x1c3f0cu: goto label_1c3f0c;
        case 0x1c3f24u: goto label_1c3f24;
        case 0x1c3f2cu: goto label_1c3f2c;
        case 0x1c3f38u: goto label_1c3f38;
        case 0x1c3f48u: goto label_1c3f48;
        case 0x1c3f88u: goto label_1c3f88;
        case 0x1c3fa0u: goto label_1c3fa0;
        case 0x1c3fb8u: goto label_1c3fb8;
        case 0x1c3fccu: goto label_1c3fcc;
        default: break;
    }

    ctx->pc = 0x1c3d68u;

    // 0x1c3d68: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1c3d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1c3d6c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c3d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3d70: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x1c3d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x1c3d74: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1c3d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1c3d78: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1c3d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1c3d7c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c3d7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d80: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1c3d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1c3d84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c3d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d88: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x1c3d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x1c3d8c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c3d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d90: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x1c3d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x1c3d94: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x1c3d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x1c3d98: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1c3d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1c3d9c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1c3d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1c3da0: 0x8e040858  lw          $a0, 0x858($s0)
    ctx->pc = 0x1c3da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x1c3da4: 0x629818  mult        $s3, $v1, $v0
    ctx->pc = 0x1c3da4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x1c3da8: 0xc06f684  jal         func_1BDA10
    ctx->pc = 0x1C3DA8u;
    SET_GPR_U32(ctx, 31, 0x1C3DB0u);
    ctx->pc = 0x1C3DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3DA8u;
    // 0x1c3dac: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA10u, 0x1C3DA8u, 0x1C3DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3DB0u;
label_1c3db0:
    // 0x1c3db0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c3db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3db4: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1c3db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1c3db8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c3db8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x1c3dbc: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1c3dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1c3dc0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3DC0u;
    {
        const bool branch_taken_0x1c3dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3DC0u;
        // 0x1c3dc4: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3dc0) {
            ctx->pc = 0x1C3DD0u;
            goto label_1c3dd0;
        }
    }
    ctx->pc = 0x1C3DC8u;
    // 0x1c3dc8: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1c3dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3dcc: 0xac222010  sw          $v0, 0x2010($at)
    ctx->pc = 0x1c3dccu;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 2));
label_1c3dd0:
    // 0x1c3dd0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c3dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3dd4: 0x2a750400  slti        $s5, $s3, 0x400
    ctx->pc = 0x1c3dd4u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1c3dd8: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1c3dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1c3ddc: 0x0  nop
    ctx->pc = 0x1c3ddcu;
    // NOP
label_1c3de0:
    // 0x1c3de0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c3de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c3de4: 0x0  nop
    ctx->pc = 0x1c3de4u;
    // NOP
    // 0x1c3de8: 0x0  nop
    ctx->pc = 0x1c3de8u;
    // NOP
    // 0x1c3dec: 0x0  nop
    ctx->pc = 0x1c3decu;
    // NOP
    // 0x1c3df0: 0x0  nop
    ctx->pc = 0x1c3df0u;
    // NOP
    // 0x1c3df4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C3DF4u;
    {
        const bool branch_taken_0x1c3df4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c3df4) {
            ctx->pc = 0x1C3DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3de0;
        }
    }
    ctx->pc = 0x1C3DFCu;
    // 0x1c3dfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e00: 0xc0706b8  jal         func_1C1AE0
    ctx->pc = 0x1C3E00u;
    SET_GPR_U32(ctx, 31, 0x1C3E08u);
    ctx->pc = 0x1C3E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3E00u;
    // 0x1c3e04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1AE0u, 0x1C3E00u, 0x1C3E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E08u;
label_1c3e08:
    // 0x1c3e08: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c3e08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3e0c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1c3e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c3e10: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x1c3e10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x1c3e14: 0x0  nop
    ctx->pc = 0x1c3e14u;
    // NOP
label_1c3e18:
    // 0x1c3e18: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c3e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c3e1c: 0x0  nop
    ctx->pc = 0x1c3e1cu;
    // NOP
    // 0x1c3e20: 0x0  nop
    ctx->pc = 0x1c3e20u;
    // NOP
    // 0x1c3e24: 0x0  nop
    ctx->pc = 0x1c3e24u;
    // NOP
    // 0x1c3e28: 0x0  nop
    ctx->pc = 0x1c3e28u;
    // NOP
    // 0x1c3e2c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C3E2Cu;
    {
        const bool branch_taken_0x1c3e2c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c3e2c) {
            ctx->pc = 0x1C3E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3e18;
        }
    }
    ctx->pc = 0x1C3E34u;
    // 0x1c3e34: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1c3e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1c3e38: 0x3c110fff  lui         $s1, 0xFFF
    ctx->pc = 0x1c3e38u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4095 << 16));
    // 0x1c3e3c: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x1c3e3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c3e40: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x1c3e40u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x1c3e44: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x1c3e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x1c3e48: 0x3414ffff  ori         $s4, $zero, 0xFFFF
    ctx->pc = 0x1c3e48u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1c3e4c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x1c3e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x1c3e50: 0x282202b  sltu        $a0, $s4, $v0
    ctx->pc = 0x1c3e50u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c3e54: 0x1080003a  beqz        $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1C3E54u;
    {
        const bool branch_taken_0x1c3e54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E54u;
        // 0x1c3e58: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3e54) {
            ctx->pc = 0x1C3F40u;
            goto label_1c3f40;
        }
    }
    ctx->pc = 0x1C3E5Cu;
    // 0x1c3e5c: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1c3e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x1c3e60: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1c3e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c3e64: 0x24a53c98  addiu       $a1, $a1, 0x3C98
    ctx->pc = 0x1c3e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15512));
    // 0x1c3e68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c3e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e6c: 0xc06bc60  jal         func_1AF180
    ctx->pc = 0x1C3E6Cu;
    SET_GPR_U32(ctx, 31, 0x1C3E74u);
    ctx->pc = 0x1C3E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3E6Cu;
    // 0x1c3e70: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF180u, 0x1C3E6Cu, 0x1C3E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E74u;
label_1c3e74:
    // 0x1c3e74: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c3e74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e78: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1c3e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c3e7c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c3e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3e80: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1c3e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c3e84: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x1c3e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x1c3e88: 0xc06c01e  jal         func_1B0078
    ctx->pc = 0x1C3E88u;
    SET_GPR_U32(ctx, 31, 0x1C3E90u);
    ctx->pc = 0x1C3E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3E88u;
    // 0x1c3e8c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0078u, 0x1C3E88u, 0x1C3E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E90u;
label_1c3e90:
    // 0x1c3e90: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1C3E90u;
    SET_GPR_U32(ctx, 31, 0x1C3E98u);
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1C3E90u, 0x1C3E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E98u;
label_1c3e98:
    // 0x1c3e98: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x1c3e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1c3e9c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c3e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3ea0: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x1c3ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x1c3ea4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c3ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3ea8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1c3ea8u;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 5));
    // 0x1c3eac: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x1c3eacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x1c3eb0: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x1c3eb0u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 20));
    // 0x1c3eb4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c3eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3eb8: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x1c3eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x1c3ebc: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x1c3ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1c3ec0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1c3ec0u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 4));
    // 0x1c3ec4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3EC4u;
    {
        const bool branch_taken_0x1c3ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3EC4u;
        // 0x1c3ec8: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ec4) {
            ctx->pc = 0x1C3ED8u;
            goto label_1c3ed8;
        }
    }
    ctx->pc = 0x1C3ECCu;
    // 0x1c3ecc: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1C3ECCu;
    SET_GPR_U32(ctx, 31, 0x1C3ED4u);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1C3ECCu, 0x1C3ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3ED4u;
label_1c3ed4:
    // 0x1c3ed4: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1c3ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1c3ed8:
    // 0x1c3ed8: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x1c3ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x1c3edc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1c3edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3ee0: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x1c3ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x1c3ee4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c3ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c3ee8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x1c3ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x1c3eec: 0x942023  subu        $a0, $a0, $s4
    ctx->pc = 0x1c3eecu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x1c3ef0: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1c3ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x1c3ef4: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C3EF4u;
    {
        const bool branch_taken_0x1c3ef4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3EF4u;
        // 0x1c3ef8: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ef4) {
            ctx->pc = 0x1C3F14u;
            goto label_1c3f14;
        }
    }
    ctx->pc = 0x1C3EFCu;
    // 0x1c3efc: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x1c3efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1c3f00: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c3f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f04: 0xc070e1c  jal         func_1C3870
    ctx->pc = 0x1C3F04u;
    SET_GPR_U32(ctx, 31, 0x1C3F0Cu);
    ctx->pc = 0x1C3F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3F04u;
    // 0x1c3f08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3870u, 0x1C3F04u, 0x1C3F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3F0Cu;
label_1c3f0c:
    // 0x1c3f0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C3F0Cu;
    {
        const bool branch_taken_0x1c3f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3f0c) {
            ctx->pc = 0x1C3F24u;
            goto label_1c3f24;
        }
    }
    ctx->pc = 0x1C3F14u;
label_1c3f14:
    // 0x1c3f14: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x1c3f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1c3f18: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c3f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f1c: 0xc070eb6  jal         func_1C3AD8
    ctx->pc = 0x1C3F1Cu;
    SET_GPR_U32(ctx, 31, 0x1C3F24u);
    ctx->pc = 0x1C3F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3F1Cu;
    // 0x1c3f20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3AD8u, 0x1C3F1Cu, 0x1C3F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3F24u;
label_1c3f24:
    // 0x1c3f24: 0xc06c004  jal         func_1B0010
    ctx->pc = 0x1C3F24u;
    SET_GPR_U32(ctx, 31, 0x1C3F2Cu);
    ctx->pc = 0x1C3F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3F24u;
    // 0x1c3f28: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0010u, 0x1C3F24u, 0x1C3F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3F2Cu;
label_1c3f2c:
    // 0x1c3f2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c3f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f30: 0xc06bc64  jal         func_1AF190
    ctx->pc = 0x1C3F30u;
    SET_GPR_U32(ctx, 31, 0x1C3F38u);
    ctx->pc = 0x1C3F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3F30u;
    // 0x1c3f34: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF190u, 0x1C3F30u, 0x1C3F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3F38u;
label_1c3f38:
    // 0x1c3f38: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1C3F38u;
    {
        const bool branch_taken_0x1c3f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F38u;
        // 0x1c3f3c: 0x8e040858  lw          $a0, 0x858($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f38) {
            ctx->pc = 0x1C3FBCu;
            goto label_1c3fbc;
        }
    }
    ctx->pc = 0x1C3F40u;
label_1c3f40:
    // 0x1c3f40: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1C3F40u;
    SET_GPR_U32(ctx, 31, 0x1C3F48u);
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1C3F40u, 0x1C3F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3F48u;
label_1c3f48:
    // 0x1c3f48: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1c3f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c3f4c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c3f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3f50: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x1c3f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x1c3f54: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1c3f54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3f58: 0xb12824  and         $a1, $a1, $s1
    ctx->pc = 0x1c3f58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
    // 0x1c3f5c: 0x34c6b420  ori         $a2, $a2, 0xB420
    ctx->pc = 0x1c3f5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46112);
    // 0x1c3f60: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1c3f60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1c3f64: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c3f64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3f68: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x1c3f68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x1c3f6c: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x1c3f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1c3f70: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1c3f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3f74: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1c3f74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1c3f78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3F78u;
    {
        const bool branch_taken_0x1c3f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F78u;
        // 0x1c3f7c: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f78) {
            ctx->pc = 0x1C3F88u;
            goto label_1c3f88;
        }
    }
    ctx->pc = 0x1C3F80u;
    // 0x1c3f80: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1C3F80u;
    SET_GPR_U32(ctx, 31, 0x1C3F88u);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1C3F80u, 0x1C3F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3F88u;
label_1c3f88:
    // 0x1c3f88: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C3F88u;
    {
        const bool branch_taken_0x1c3f88 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F88u;
        // 0x1c3f8c: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f88) {
            ctx->pc = 0x1C3FA8u;
            goto label_1c3fa8;
        }
    }
    ctx->pc = 0x1C3F90u;
    // 0x1c3f90: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x1c3f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1c3f94: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c3f94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f98: 0xc070e1c  jal         func_1C3870
    ctx->pc = 0x1C3F98u;
    SET_GPR_U32(ctx, 31, 0x1C3FA0u);
    ctx->pc = 0x1C3F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3F98u;
    // 0x1c3f9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3870u, 0x1C3F98u, 0x1C3FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3FA0u;
label_1c3fa0:
    // 0x1c3fa0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3FA0u;
    {
        const bool branch_taken_0x1c3fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3FA0u;
        // 0x1c3fa4: 0x8e040858  lw          $a0, 0x858($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3fa0) {
            ctx->pc = 0x1C3FBCu;
            goto label_1c3fbc;
        }
    }
    ctx->pc = 0x1C3FA8u;
label_1c3fa8:
    // 0x1c3fa8: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x1c3fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1c3fac: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c3facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3fb0: 0xc070eb6  jal         func_1C3AD8
    ctx->pc = 0x1C3FB0u;
    SET_GPR_U32(ctx, 31, 0x1C3FB8u);
    ctx->pc = 0x1C3FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3FB0u;
    // 0x1c3fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3AD8u, 0x1C3FB0u, 0x1C3FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3FB8u;
label_1c3fb8:
    // 0x1c3fb8: 0x8e040858  lw          $a0, 0x858($s0)
    ctx->pc = 0x1c3fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
label_1c3fbc:
    // 0x1c3fbc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c3fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3fc0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1c3fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1c3fc4: 0xc06f684  jal         func_1BDA10
    ctx->pc = 0x1C3FC4u;
    SET_GPR_U32(ctx, 31, 0x1C3FCCu);
    ctx->pc = 0x1C3FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3FC4u;
    // 0x1c3fc8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA10u, 0x1C3FC4u, 0x1C3FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3FCCu;
label_1c3fcc:
    // 0x1c3fcc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1c3fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c3fd0: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x1c3fd0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c3fd4: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x1c3fd4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c3fd8: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x1c3fd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c3fdc: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1c3fdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c3fe0: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x1c3fe0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c3fe4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1c3fe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3FE8u;
        // 0x1c3fec: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3FF0u;
}

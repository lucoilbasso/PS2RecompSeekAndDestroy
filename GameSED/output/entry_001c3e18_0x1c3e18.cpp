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

// Function: entry_001c3e18
// Address: 0x1c3e18 - 0x1c3ed8
void entry_001c3e18_0x1c3e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3e18_0x1c3e18");
#endif

    switch (ctx->pc) {
        case 0x1c3e74u: goto label_1c3e74;
        case 0x1c3e90u: goto label_1c3e90;
        case 0x1c3e98u: goto label_1c3e98;
        case 0x1c3ed4u: goto label_1c3ed4;
        default: break;
    }

    ctx->pc = 0x1c3e18u;

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
            return;
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
            return;
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
    ctx->pc = 0x1c3ed8u;
}

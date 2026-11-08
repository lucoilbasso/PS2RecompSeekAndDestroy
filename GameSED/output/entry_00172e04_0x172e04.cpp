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

// Function: entry_00172e04
// Address: 0x172e04 - 0x172ea0
void entry_00172e04_0x172e04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172e04_0x172e04");
#endif

    switch (ctx->pc) {
        case 0x172e3cu: goto label_172e3c;
        case 0x172e5cu: goto label_172e5c;
        case 0x172e68u: goto label_172e68;
        case 0x172e74u: goto label_172e74;
        case 0x172e80u: goto label_172e80;
        default: break;
    }

    ctx->pc = 0x172e04u;

    // 0x172e04: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x172e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x172e08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172e0c: 0x2442d5c0  addiu       $v0, $v0, -0x2A40
    ctx->pc = 0x172e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956480));
    // 0x172e10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x172e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172e14: 0x3c28021  addu        $s0, $fp, $v0
    ctx->pc = 0x172e14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x172e18: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x172e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x172e1c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x172e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172e20: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x172e20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172e24: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x172e24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172e28: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x172e28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x172e2c: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x172e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x172e30: 0x26b50180  addiu       $s5, $s5, 0x180
    ctx->pc = 0x172e30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 384));
    // 0x172e34: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x172E34u;
    SET_GPR_U32(ctx, 31, 0x172E3Cu);
    ctx->pc = 0x172E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172E34u;
    // 0x172e38: 0x24e70103  addiu       $a3, $a3, 0x103 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 259));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x172E34u, 0x172E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172E3Cu;
label_172e3c:
    // 0x172e3c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x172e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172e40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172e44: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x172e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x172e48: 0x24e700c3  addiu       $a3, $a3, 0xC3
    ctx->pc = 0x172e48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 195));
    // 0x172e4c: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x172e4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x172e50: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x172e50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172e54: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x172E54u;
    SET_GPR_U32(ctx, 31, 0x172E5Cu);
    ctx->pc = 0x172E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172E54u;
    // 0x172e58: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x172E54u, 0x172E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172E5Cu;
label_172e5c:
    // 0x172e5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172e60: 0xc06baf0  jal         func_1AEBC0
    ctx->pc = 0x172E60u;
    SET_GPR_U32(ctx, 31, 0x172E68u);
    ctx->pc = 0x172E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172E60u;
    // 0x172e64: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEBC0u, 0x172E60u, 0x172E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172E68u;
label_172e68:
    // 0x172e68: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x172e68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x172e6c: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x172E6Cu;
    SET_GPR_U32(ctx, 31, 0x172E74u);
    ctx->pc = 0x172E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172E6Cu;
    // 0x172e70: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x172E6Cu, 0x172E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172E74u;
label_172e74:
    // 0x172e74: 0x3c051700  lui         $a1, 0x1700
    ctx->pc = 0x172e74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5888 << 16));
    // 0x172e78: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x172E78u;
    SET_GPR_U32(ctx, 31, 0x172E80u);
    ctx->pc = 0x172E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172E78u;
    // 0x172e7c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x172E78u, 0x172E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172E80u;
label_172e80:
    // 0x172e80: 0x2d7102a  slt         $v0, $s6, $s7
    ctx->pc = 0x172e80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x172e84: 0x8fb10048  lw          $s1, 0x48($sp)
    ctx->pc = 0x172e84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x172e88: 0x8fb00054  lw          $s0, 0x54($sp)
    ctx->pc = 0x172e88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x172e8c: 0x1440fe8e  bnez        $v0, . + 4 + (-0x172 << 2)
    ctx->pc = 0x172E8Cu;
    {
        const bool branch_taken_0x172e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E8Cu;
        // 0x172e90: 0x8fb20068  lw          $s2, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172e8c) {
            ctx->pc = 0x1728C8u;
            return;
        }
    }
    ctx->pc = 0x172E94u;
    // 0x172e94: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x172E94u;
    {
        const bool branch_taken_0x172e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E94u;
        // 0x172e98: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172e94) {
            ctx->pc = 0x172EB0u;
            return;
        }
    }
    ctx->pc = 0x172E9Cu;
    // 0x172e9c: 0x0  nop
    ctx->pc = 0x172e9cu;
    // NOP
    ctx->pc = 0x172ea0u;
}

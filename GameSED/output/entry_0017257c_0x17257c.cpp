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

// Function: entry_0017257c
// Address: 0x17257c - 0x172640
void entry_0017257c_0x17257c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017257c_0x17257c");
#endif

    switch (ctx->pc) {
        case 0x1725a8u: goto label_1725a8;
        case 0x1725d8u: goto label_1725d8;
        case 0x1725f8u: goto label_1725f8;
        case 0x172608u: goto label_172608;
        case 0x172618u: goto label_172618;
        case 0x172624u: goto label_172624;
        default: break;
    }

    ctx->pc = 0x17257cu;

    // 0x17257c: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x17257cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x172580: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x172580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172584: 0x2484d5c0  addiu       $a0, $a0, -0x2A40
    ctx->pc = 0x172584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956480));
    // 0x172588: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x172588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x17258c: 0x3c48021  addu        $s0, $fp, $a0
    ctx->pc = 0x17258cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x172590: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172594: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x172594u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172598: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x172598u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17259c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x17259cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1725a0: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x1725A0u;
    SET_GPR_U32(ctx, 31, 0x1725A8u);
    ctx->pc = 0x1725A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1725A0u;
    // 0x1725a4: 0x24e700b3  addiu       $a3, $a3, 0xB3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 179));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x1725A0u, 0x1725A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1725A8u;
label_1725a8:
    // 0x1725a8: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1725a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1725ac: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1725acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1725b0: 0x26850170  addiu       $a1, $s4, 0x170
    ctx->pc = 0x1725b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 368));
    // 0x1725b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1725b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1725b8: 0x24e70103  addiu       $a3, $a3, 0x103
    ctx->pc = 0x1725b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 259));
    // 0x1725bc: 0x2a2182a  slt         $v1, $s5, $v0
    ctx->pc = 0x1725bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1725c0: 0x268202c0  addiu       $v0, $s4, 0x2C0
    ctx->pc = 0x1725c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 704));
    // 0x1725c4: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x1725c4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x1725c8: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x1725c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x1725cc: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x1725ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1725d0: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x1725D0u;
    SET_GPR_U32(ctx, 31, 0x1725D8u);
    ctx->pc = 0x1725D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1725D0u;
    // 0x1725d4: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x1725D0u, 0x1725D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1725D8u;
label_1725d8:
    // 0x1725d8: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1725d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1725dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1725dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1725e0: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x1725e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x1725e4: 0x24e700c3  addiu       $a3, $a3, 0xC3
    ctx->pc = 0x1725e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 195));
    // 0x1725e8: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x1725e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1725ec: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1725ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1725f0: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x1725F0u;
    SET_GPR_U32(ctx, 31, 0x1725F8u);
    ctx->pc = 0x1725F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1725F0u;
    // 0x1725f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x1725F0u, 0x1725F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1725F8u;
label_1725f8:
    // 0x1725f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1725f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1725fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1725fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172600: 0xc06baf0  jal         func_1AEBC0
    ctx->pc = 0x172600u;
    SET_GPR_U32(ctx, 31, 0x172608u);
    ctx->pc = 0x172604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172600u;
    // 0x172604: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEBC0u, 0x172600u, 0x172608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172608u;
label_172608:
    // 0x172608: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x172608u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x17260c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17260cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172610: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x172610u;
    SET_GPR_U32(ctx, 31, 0x172618u);
    ctx->pc = 0x172614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172610u;
    // 0x172614: 0x26940180  addiu       $s4, $s4, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x172610u, 0x172618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172618u;
label_172618:
    // 0x172618: 0x3c051700  lui         $a1, 0x1700
    ctx->pc = 0x172618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5888 << 16));
    // 0x17261c: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x17261Cu;
    SET_GPR_U32(ctx, 31, 0x172624u);
    ctx->pc = 0x172620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17261Cu;
    // 0x172620: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x17261Cu, 0x172624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172624u;
label_172624:
    // 0x172624: 0x2b6102a  slt         $v0, $s5, $s6
    ctx->pc = 0x172624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x172628: 0x8fb10044  lw          $s1, 0x44($sp)
    ctx->pc = 0x172628u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x17262c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x17262cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x172630: 0x1440febf  bnez        $v0, . + 4 + (-0x141 << 2)
    ctx->pc = 0x172630u;
    {
        const bool branch_taken_0x172630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172630u;
        // 0x172634: 0x8fb20064  lw          $s2, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172630) {
            ctx->pc = 0x172130u;
            return;
        }
    }
    ctx->pc = 0x172638u;
    // 0x172638: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x172638u;
    {
        const bool branch_taken_0x172638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172638u;
        // 0x17263c: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172638) {
            ctx->pc = 0x172650u;
            return;
        }
    }
    ctx->pc = 0x172640u;
}

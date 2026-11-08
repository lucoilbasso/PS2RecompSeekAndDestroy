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

// Function: Cmd_KEY_UP_LOAD_Entry__FP15BsSCDEntControl
// Address: 0x114370 - 0x114404
void Cmd_KEY_UP_LOAD_Entry__FP15BsSCDEntControl_0x114370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_KEY_UP_LOAD_Entry__FP15BsSCDEntControl_0x114370");
#endif

    switch (ctx->pc) {
        case 0x114388u: goto label_114388;
        case 0x114394u: goto label_114394;
        case 0x1143a0u: goto label_1143a0;
        case 0x1143c8u: goto label_1143c8;
        default: break;
    }

    ctx->pc = 0x114370u;

    // 0x114370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x114370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x114374: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x114374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x114378: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x114378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11437c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11437cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x114380: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x114380u;
    SET_GPR_U32(ctx, 31, 0x114388u);
    ctx->pc = 0x114384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114380u;
    // 0x114384: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x114380u, 0x114388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114388u;
label_114388:
    // 0x114388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11438c: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x11438Cu;
    SET_GPR_U32(ctx, 31, 0x114394u);
    ctx->pc = 0x114390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11438Cu;
    // 0x114390: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x11438Cu, 0x114394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114394u;
label_114394:
    // 0x114394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114398: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x114398u;
    SET_GPR_U32(ctx, 31, 0x1143A0u);
    ctx->pc = 0x11439Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114398u;
    // 0x11439c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x114398u, 0x1143A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1143A0u;
label_1143a0:
    // 0x1143a0: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1143a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1143a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1143a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1143a8: 0x240224d0  addiu       $v0, $zero, 0x24D0
    ctx->pc = 0x1143a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x1143ac: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x1143acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1143b0: 0x2467c058  addiu       $a3, $v1, -0x3FA8
    ctx->pc = 0x1143b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951000));
    // 0x1143b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1143b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1143b8: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x1143b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x1143bc: 0x2421d172  addiu       $at, $at, -0x2E8E
    ctx->pc = 0x1143bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294955378));
    // 0x1143c0: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x1143c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1143c4: 0x0  nop
    ctx->pc = 0x1143c4u;
    // NOP
label_1143c8:
    // 0x1143c8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1143c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1143cc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1143ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1143d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1143d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1143d4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1143d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1143d8: 0x2cc40008  sltiu       $a0, $a2, 0x8
    ctx->pc = 0x1143d8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1143dc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1143dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1143e0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1143e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1143e4: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1143e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1143e8: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1143E8u;
    {
        const bool branch_taken_0x1143e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1143ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143E8u;
        // 0x1143ec: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1143e8) {
            ctx->pc = 0x1143C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1143c8;
        }
    }
    ctx->pc = 0x1143F0u;
    // 0x1143f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1143f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1143f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1143f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1143f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1143f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1143fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1143FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143FCu;
        // 0x114400: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1143FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114404u;
}

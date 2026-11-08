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

// Function: Cmd_USR_NAME_LOAD_Entry__FP15BsSCDEntControl
// Address: 0x119048 - 0x1190e4
void Cmd_USR_NAME_LOAD_Entry__FP15BsSCDEntControl_0x119048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_USR_NAME_LOAD_Entry__FP15BsSCDEntControl_0x119048");
#endif

    switch (ctx->pc) {
        case 0x119064u: goto label_119064;
        case 0x119070u: goto label_119070;
        case 0x11907cu: goto label_11907c;
        case 0x119088u: goto label_119088;
        case 0x1190b0u: goto label_1190b0;
        default: break;
    }

    ctx->pc = 0x119048u;

    // 0x119048: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11904c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11904cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119050: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x119050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x119054: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x119054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x119058: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x119058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x11905c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11905Cu;
    SET_GPR_U32(ctx, 31, 0x119064u);
    ctx->pc = 0x119060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11905Cu;
    // 0x119060: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11905Cu, 0x119064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119064u;
label_119064:
    // 0x119064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119068: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x119068u;
    SET_GPR_U32(ctx, 31, 0x119070u);
    ctx->pc = 0x11906Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119068u;
    // 0x11906c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x119068u, 0x119070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119070u;
label_119070:
    // 0x119070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119074: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x119074u;
    SET_GPR_U32(ctx, 31, 0x11907Cu);
    ctx->pc = 0x119078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119074u;
    // 0x119078: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x119074u, 0x11907Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11907Cu;
label_11907c:
    // 0x11907c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11907cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119080: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x119080u;
    SET_GPR_U32(ctx, 31, 0x119088u);
    ctx->pc = 0x119084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119080u;
    // 0x119084: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x119080u, 0x119088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119088u;
label_119088:
    // 0x119088: 0x240424d0  addiu       $a0, $zero, 0x24D0
    ctx->pc = 0x119088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x11908c: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x11908cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x119090: 0x2248818  mult        $s1, $s1, $a0
    ctx->pc = 0x119090u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x119094: 0x2463c540  addiu       $v1, $v1, -0x3AC0
    ctx->pc = 0x119094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952256));
    // 0x119098: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x119098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x11909c: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x11909cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1190a0: 0x8c850c0c  lw          $a1, 0xC0C($a0)
    ctx->pc = 0x1190a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3084)));
    // 0x1190a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1190a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1190a8: 0x26310c10  addiu       $s1, $s1, 0xC10
    ctx->pc = 0x1190a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3088));
    // 0x1190ac: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1190acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_1190b0:
    // 0x1190b0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1190b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1190b4: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x1190b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x1190b8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1190b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1190bc: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x1190bcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1190c0: 0x0  nop
    ctx->pc = 0x1190c0u;
    // NOP
    // 0x1190c4: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1190C4u;
    {
        const bool branch_taken_0x1190c4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1190C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190C4u;
        // 0x1190c8: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1190c4) {
            ctx->pc = 0x1190B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1190b0;
        }
    }
    ctx->pc = 0x1190CCu;
    // 0x1190cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1190ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1190d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1190d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1190d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1190d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1190d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1190d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1190dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1190DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1190E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190DCu;
        // 0x1190e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1190DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1190E4u;
}

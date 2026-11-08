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

// Function: Create__12ApcFieldDrawP8ApcField
// Address: 0x1d8568 - 0x1d85dc
void Create__12ApcFieldDrawP8ApcField_0x1d8568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Create__12ApcFieldDrawP8ApcField_0x1d8568");
#endif

    switch (ctx->pc) {
        case 0x1d8584u: goto label_1d8584;
        case 0x1d858cu: goto label_1d858c;
        case 0x1d85a4u: goto label_1d85a4;
        case 0x1d85c4u: goto label_1d85c4;
        default: break;
    }

    ctx->pc = 0x1d8568u;

    // 0x1d8568: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d8568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d856c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d856cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d8570: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d8570u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8574: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8578: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d8578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d857c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1D857Cu;
    SET_GPR_U32(ctx, 31, 0x1D8584u);
    ctx->pc = 0x1D8580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D857Cu;
    // 0x1d8580: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1D857Cu, 0x1D8584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8584u;
label_1d8584:
    // 0x1d8584: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1D8584u;
    SET_GPR_U32(ctx, 31, 0x1D858Cu);
    ctx->pc = 0x1D8588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8584u;
    // 0x1d8588: 0x24040160  addiu       $a0, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1D8584u, 0x1D858Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D858Cu;
label_1d858c:
    // 0x1d858c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d858cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8590: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1d8590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1d8594: 0x2442edc8  addiu       $v0, $v0, -0x1238
    ctx->pc = 0x1d8594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962632));
    // 0x1d8598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d859c: 0xc061258  jal         func_184960
    ctx->pc = 0x1D859Cu;
    SET_GPR_U32(ctx, 31, 0x1D85A4u);
    ctx->pc = 0x1D85A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D859Cu;
    // 0x1d85a0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x1D859Cu, 0x1D85A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D85A4u;
label_1d85a4:
    // 0x1d85a4: 0xae110150  sw          $s1, 0x150($s0)
    ctx->pc = 0x1d85a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 17));
    // 0x1d85a8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d85a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d85ac: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1d85acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1d85b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d85b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d85b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d85b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d85b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d85b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d85bc: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1D85BCu;
    SET_GPR_U32(ctx, 31, 0x1D85C4u);
    ctx->pc = 0x1D85C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D85BCu;
    // 0x1d85c0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1D85BCu, 0x1D85C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D85C4u;
label_1d85c4:
    // 0x1d85c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d85c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d85c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d85c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d85cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d85ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d85d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d85d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d85d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D85D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D85D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85D4u;
        // 0x1d85d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D85D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D85DCu;
}

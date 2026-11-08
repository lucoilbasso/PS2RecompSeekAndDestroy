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

// Function: Create__9WcTxPanelP7ISize32T1
// Address: 0x1df188 - 0x1df1fc
void Create__9WcTxPanelP7ISize32T1_0x1df188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Create__9WcTxPanelP7ISize32T1_0x1df188");
#endif

    switch (ctx->pc) {
        case 0x1df1acu: goto label_1df1ac;
        case 0x1df1b4u: goto label_1df1b4;
        case 0x1df1d4u: goto label_1df1d4;
        case 0x1df1e0u: goto label_1df1e0;
        default: break;
    }

    ctx->pc = 0x1df188u;

    // 0x1df188: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1df188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1df18c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1df18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1df190: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1df190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df194: 0x24040166  addiu       $a0, $zero, 0x166
    ctx->pc = 0x1df194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x1df198: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1df198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1df19c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1df19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1df1a0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1df1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1df1a4: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1DF1A4u;
    SET_GPR_U32(ctx, 31, 0x1DF1ACu);
    ctx->pc = 0x1DF1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF1A4u;
    // 0x1df1a8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1DF1A4u, 0x1DF1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF1ACu;
label_1df1ac:
    // 0x1df1ac: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1DF1ACu;
    SET_GPR_U32(ctx, 31, 0x1DF1B4u);
    ctx->pc = 0x1DF1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF1ACu;
    // 0x1df1b0: 0x240402a0  addiu       $a0, $zero, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1DF1ACu, 0x1DF1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF1B4u;
label_1df1b4:
    // 0x1df1b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1df1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df1b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1df1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df1bc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1df1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1df1c0: 0x24420320  addiu       $v0, $v0, 0x320
    ctx->pc = 0x1df1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
    // 0x1df1c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1df1c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df1c8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1df1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1df1cc: 0xc063114  jal         func_18C450
    ctx->pc = 0x1DF1CCu;
    SET_GPR_U32(ctx, 31, 0x1DF1D4u);
    ctx->pc = 0x1DF1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF1CCu;
    // 0x1df1d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C450u, 0x1DF1CCu, 0x1DF1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF1D4u;
label_1df1d4:
    // 0x1df1d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df1d8: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1DF1D8u;
    SET_GPR_U32(ctx, 31, 0x1DF1E0u);
    ctx->pc = 0x1DF1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF1D8u;
    // 0x1df1dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1DF1D8u, 0x1DF1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF1E0u;
label_1df1e0:
    // 0x1df1e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1df1e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df1e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1df1e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1df1e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1df1e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df1ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1df1ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df1f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1df1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1df1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF1F4u;
        // 0x1df1f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF1FCu;
}

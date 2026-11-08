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

// Function: Init__8WcCdpackPc
// Address: 0x17d478 - 0x17d4bc
void Init__8WcCdpackPc_0x17d478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__8WcCdpackPc_0x17d478");
#endif

    switch (ctx->pc) {
        case 0x17d494u: goto label_17d494;
        case 0x17d4a8u: goto label_17d4a8;
        default: break;
    }

    ctx->pc = 0x17d478u;

    // 0x17d478: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17d478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17d47c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17d47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17d480: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17d480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d484: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17d484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17d488: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17d488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17d48c: 0xc05f3b0  jal         func_17CEC0
    ctx->pc = 0x17D48Cu;
    SET_GPR_U32(ctx, 31, 0x17D494u);
    ctx->pc = 0x17D490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D48Cu;
    // 0x17d490: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CEC0u, 0x17D48Cu, 0x17D494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D494u;
label_17d494:
    // 0x17d494: 0x24020105  addiu       $v0, $zero, 0x105
    ctx->pc = 0x17d494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x17d498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17d498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d49c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17d49cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x17d4a0: 0xc05f530  jal         func_17D4C0
    ctx->pc = 0x17D4A0u;
    SET_GPR_U32(ctx, 31, 0x17D4A8u);
    ctx->pc = 0x17D4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D4A0u;
    // 0x17d4a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D4C0u, 0x17D4A0u, 0x17D4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D4A8u;
label_17d4a8:
    // 0x17d4a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17d4a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d4ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17d4acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17d4b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17d4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x17D4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D4B4u;
        // 0x17d4b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D4BCu;
}

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

// Function: entry_0010b428
// Address: 0x10b428 - 0x10b474
void entry_0010b428_0x10b428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b428_0x10b428");
#endif

    switch (ctx->pc) {
        case 0x10b438u: goto label_10b438;
        case 0x10b44cu: goto label_10b44c;
        case 0x10b458u: goto label_10b458;
        default: break;
    }

    ctx->pc = 0x10b428u;

    // 0x10b428: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x10b428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b42c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10b42cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b430: 0xc041862  jal         func_106188
    ctx->pc = 0x10B430u;
    SET_GPR_U32(ctx, 31, 0x10B438u);
    ctx->pc = 0x10B434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B430u;
    // 0x10b434: 0x3c100026  lui         $s0, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106188u, 0x10B430u, 0x10B438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B438u;
label_10b438:
    // 0x10b438: 0x2610f550  addiu       $s0, $s0, -0xAB0
    ctx->pc = 0x10b438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964560));
    // 0x10b43c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10b43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b440: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x10b440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b444: 0xc066d1c  jal         func_19B470
    ctx->pc = 0x10B444u;
    SET_GPR_U32(ctx, 31, 0x10B44Cu);
    ctx->pc = 0x10B448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B444u;
    // 0x10b448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B470u, 0x10B444u, 0x10B44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B44Cu;
label_10b44c:
    // 0x10b44c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10b44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b450: 0xc063b2e  jal         func_18ECB8
    ctx->pc = 0x10B450u;
    SET_GPR_U32(ctx, 31, 0x10B458u);
    ctx->pc = 0x10B454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B450u;
    // 0x10b454: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ECB8u, 0x10B450u, 0x10B458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B458u;
label_10b458:
    // 0x10b458: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b45c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10b45cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b460: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10b460u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b464: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10b464u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10b468: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10b468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b46c: 0x3e00008  jr          $ra
    ctx->pc = 0x10B46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B46Cu;
        // 0x10b470: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B474u;
}

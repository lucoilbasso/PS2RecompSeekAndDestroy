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

// Function: Rsc3DSetup__9ApcGameDr
// Address: 0x1d7eb0 - 0x1d7f18
void Rsc3DSetup__9ApcGameDr_0x1d7eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Rsc3DSetup__9ApcGameDr_0x1d7eb0");
#endif

    switch (ctx->pc) {
        case 0x1d7eccu: goto label_1d7ecc;
        case 0x1d7ed4u: goto label_1d7ed4;
        case 0x1d7ef0u: goto label_1d7ef0;
        case 0x1d7efcu: goto label_1d7efc;
        default: break;
    }

    ctx->pc = 0x1d7eb0u;

    // 0x1d7eb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7eb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d7eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d7eb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d7eb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ebc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7ec0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d7ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d7ec4: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1D7EC4u;
    SET_GPR_U32(ctx, 31, 0x1D7ECCu);
    ctx->pc = 0x1D7EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7EC4u;
    // 0x1d7ec8: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1D7EC4u, 0x1D7ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7ECCu;
label_1d7ecc:
    // 0x1d7ecc: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1D7ECCu;
    SET_GPR_U32(ctx, 31, 0x1D7ED4u);
    ctx->pc = 0x1D7ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7ECCu;
    // 0x1d7ed0: 0x24040330  addiu       $a0, $zero, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1D7ECCu, 0x1D7ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7ED4u;
label_1d7ed4:
    // 0x1d7ed4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d7ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ed8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d7ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7edc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1d7edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1d7ee0: 0x2442ef30  addiu       $v0, $v0, -0x10D0
    ctx->pc = 0x1d7ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962992));
    // 0x1d7ee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ee8: 0xc050a9c  jal         func_142A70
    ctx->pc = 0x1D7EE8u;
    SET_GPR_U32(ctx, 31, 0x1D7EF0u);
    ctx->pc = 0x1D7EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7EE8u;
    // 0x1d7eec: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142A70u, 0x1D7EE8u, 0x1D7EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7EF0u;
label_1d7ef0:
    // 0x1d7ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ef4: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1D7EF4u;
    SET_GPR_U32(ctx, 31, 0x1D7EFCu);
    ctx->pc = 0x1D7EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7EF4u;
    // 0x1d7ef8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1D7EF4u, 0x1D7EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7EFCu;
label_1d7efc:
    // 0x1d7efc: 0xae30009c  sw          $s0, 0x9C($s1)
    ctx->pc = 0x1d7efcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 16));
    // 0x1d7f00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d7f00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7f04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7f08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d7f08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7f0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d7f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7f10: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F10u;
        // 0x1d7f14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7F18u;
}

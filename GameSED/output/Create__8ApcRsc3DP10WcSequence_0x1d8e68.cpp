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

// Function: Create__8ApcRsc3DP10WcSequence
// Address: 0x1d8e68 - 0x1d8ecc
void Create__8ApcRsc3DP10WcSequence_0x1d8e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Create__8ApcRsc3DP10WcSequence_0x1d8e68");
#endif

    switch (ctx->pc) {
        case 0x1d8e84u: goto label_1d8e84;
        case 0x1d8e8cu: goto label_1d8e8c;
        case 0x1d8ea8u: goto label_1d8ea8;
        case 0x1d8eb4u: goto label_1d8eb4;
        default: break;
    }

    ctx->pc = 0x1d8e68u;

    // 0x1d8e68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d8e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8e6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d8e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d8e70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d8e70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8e74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8e78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d8e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d8e7c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1D8E7Cu;
    SET_GPR_U32(ctx, 31, 0x1D8E84u);
    ctx->pc = 0x1D8E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8E7Cu;
    // 0x1d8e80: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1D8E7Cu, 0x1D8E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8E84u;
label_1d8e84:
    // 0x1d8e84: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1D8E84u;
    SET_GPR_U32(ctx, 31, 0x1D8E8Cu);
    ctx->pc = 0x1D8E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8E84u;
    // 0x1d8e88: 0x24040330  addiu       $a0, $zero, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1D8E84u, 0x1D8E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8E8Cu;
label_1d8e8c:
    // 0x1d8e8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d8e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8e90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d8e90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8e94: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1d8e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1d8e98: 0x2442ef30  addiu       $v0, $v0, -0x10D0
    ctx->pc = 0x1d8e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962992));
    // 0x1d8e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ea0: 0xc050a9c  jal         func_142A70
    ctx->pc = 0x1D8EA0u;
    SET_GPR_U32(ctx, 31, 0x1D8EA8u);
    ctx->pc = 0x1D8EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8EA0u;
    // 0x1d8ea4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142A70u, 0x1D8EA0u, 0x1D8EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8EA8u;
label_1d8ea8:
    // 0x1d8ea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8eac: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1D8EACu;
    SET_GPR_U32(ctx, 31, 0x1D8EB4u);
    ctx->pc = 0x1D8EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8EACu;
    // 0x1d8eb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1D8EACu, 0x1D8EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8EB4u;
label_1d8eb4:
    // 0x1d8eb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d8eb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8eb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d8eb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8ebc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8ebcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8ec0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d8ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8EC4u;
        // 0x1d8ec8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8ECCu;
}

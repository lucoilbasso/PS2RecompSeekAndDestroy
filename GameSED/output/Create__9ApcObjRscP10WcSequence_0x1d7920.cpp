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

// Function: Create__9ApcObjRscP10WcSequence
// Address: 0x1d7920 - 0x1d7984
void Create__9ApcObjRscP10WcSequence_0x1d7920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Create__9ApcObjRscP10WcSequence_0x1d7920");
#endif

    switch (ctx->pc) {
        case 0x1d793cu: goto label_1d793c;
        case 0x1d7944u: goto label_1d7944;
        case 0x1d7960u: goto label_1d7960;
        case 0x1d796cu: goto label_1d796c;
        default: break;
    }

    ctx->pc = 0x1d7920u;

    // 0x1d7920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7924: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d7924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d7928: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d7928u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d792c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d792cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7930: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d7930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d7934: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1D7934u;
    SET_GPR_U32(ctx, 31, 0x1D793Cu);
    ctx->pc = 0x1D7938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7934u;
    // 0x1d7938: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1D7934u, 0x1D793Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D793Cu;
label_1d793c:
    // 0x1d793c: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1D793Cu;
    SET_GPR_U32(ctx, 31, 0x1D7944u);
    ctx->pc = 0x1D7940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D793Cu;
    // 0x1d7940: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1D793Cu, 0x1D7944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7944u;
label_1d7944:
    // 0x1d7944: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d7944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7948: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d7948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d794c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1d794cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1d7950: 0x2442e620  addiu       $v0, $v0, -0x19E0
    ctx->pc = 0x1d7950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960672));
    // 0x1d7954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7958: 0xc040152  jal         func_100548
    ctx->pc = 0x1D7958u;
    SET_GPR_U32(ctx, 31, 0x1D7960u);
    ctx->pc = 0x1D795Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7958u;
    // 0x1d795c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100548u, 0x1D7958u, 0x1D7960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7960u;
label_1d7960:
    // 0x1d7960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7964: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1D7964u;
    SET_GPR_U32(ctx, 31, 0x1D796Cu);
    ctx->pc = 0x1D7968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7964u;
    // 0x1d7968: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1D7964u, 0x1D796Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D796Cu;
label_1d796c:
    // 0x1d796c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d796cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7970: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d7970u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7974: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7974u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7978: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d7978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d797c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D797Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D797Cu;
        // 0x1d7980: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D797Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7984u;
}

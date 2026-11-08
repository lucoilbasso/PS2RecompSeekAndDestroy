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

// Function: Init__6WcFile
// Address: 0x17cec0 - 0x17cf1c
void Init__6WcFile_0x17cec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__6WcFile_0x17cec0");
#endif

    switch (ctx->pc) {
        case 0x17cf08u: goto label_17cf08;
        default: break;
    }

    ctx->pc = 0x17cec0u;

    // 0x17cec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17cec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17cec4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17cec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17cec8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x17cec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x17cecc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17ceccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ced0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x17ced0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17ced4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x17ced4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x17ced8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x17ced8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x17cedc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17cedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cee0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17cee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x17cee4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x17cee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x17cee8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x17cee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x17ceec: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x17ceecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x17cef0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x17cef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x17cef4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x17cef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x17cef8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x17cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x17cefc: 0xafb00014  sw          $s0, 0x14($sp)
    ctx->pc = 0x17cefcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
    // 0x17cf00: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x17CF00u;
    SET_GPR_U32(ctx, 31, 0x17CF08u);
    ctx->pc = 0x17CF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF00u;
    // 0x17cf04: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x17CF00u, 0x17CF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF08u;
label_17cf08:
    // 0x17cf08: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x17cf08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x17cf0c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17cf0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17cf10: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x17cf10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17cf14: 0x3e00008  jr          $ra
    ctx->pc = 0x17CF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CF14u;
        // 0x17cf18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CF1Cu;
}

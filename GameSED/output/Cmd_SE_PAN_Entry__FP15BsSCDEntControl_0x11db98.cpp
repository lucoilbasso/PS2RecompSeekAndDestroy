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

// Function: Cmd_SE_PAN_Entry__FP15BsSCDEntControl
// Address: 0x11db98 - 0x11dbe4
void Cmd_SE_PAN_Entry__FP15BsSCDEntControl_0x11db98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_SE_PAN_Entry__FP15BsSCDEntControl_0x11db98");
#endif

    switch (ctx->pc) {
        case 0x11dbb0u: goto label_11dbb0;
        case 0x11dbbcu: goto label_11dbbc;
        case 0x11dbd0u: goto label_11dbd0;
        default: break;
    }

    ctx->pc = 0x11db98u;

    // 0x11db98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11db98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11db9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11db9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11dba0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11dba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11dba4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11dba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11dba8: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11DBA8u;
    SET_GPR_U32(ctx, 31, 0x11DBB0u);
    ctx->pc = 0x11DBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DBA8u;
    // 0x11dbac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11DBA8u, 0x11DBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DBB0u;
label_11dbb0:
    // 0x11dbb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11dbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dbb4: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11DBB4u;
    SET_GPR_U32(ctx, 31, 0x11DBBCu);
    ctx->pc = 0x11DBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DBB4u;
    // 0x11dbb8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11DBB4u, 0x11DBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DBBCu;
label_11dbbc:
    // 0x11dbbc: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x11dbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11dbc0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11dbc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dbc4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11dbc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dbc8: 0xc0477de  jal         func_11DF78
    ctx->pc = 0x11DBC8u;
    SET_GPR_U32(ctx, 31, 0x11DBD0u);
    ctx->pc = 0x11DBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DBC8u;
    // 0x11dbcc: 0x8c640040  lw          $a0, 0x40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF78u, 0x11DBC8u, 0x11DBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DBD0u;
label_11dbd0:
    // 0x11dbd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11dbd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11dbd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11dbd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11dbd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11dbd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11dbdc: 0x3e00008  jr          $ra
    ctx->pc = 0x11DBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DBDCu;
        // 0x11dbe0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DBDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DBE4u;
}

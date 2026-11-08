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

// Function: CommandFlush__15CD_READ_COMMAND
// Address: 0x178398 - 0x17844c
void CommandFlush__15CD_READ_COMMAND_0x178398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CommandFlush__15CD_READ_COMMAND_0x178398");
#endif

    switch (ctx->pc) {
        case 0x1783d8u: goto label_1783d8;
        case 0x1783f8u: goto label_1783f8;
        case 0x178408u: goto label_178408;
        case 0x178434u: goto label_178434;
        default: break;
    }

    ctx->pc = 0x178398u;

    // 0x178398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17839c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x17839cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1783a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1783a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1783a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1783a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1783a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1783a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1783ac: 0x24051080  addiu       $a1, $zero, 0x1080
    ctx->pc = 0x1783acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4224));
    // 0x1783b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1783b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1783b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1783b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1783b8: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1783b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1783bc: 0x8c621044  lw          $v0, 0x1044($v1)
    ctx->pc = 0x1783bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4164)));
    // 0x1783c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1783c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1783c4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1783C4u;
    {
        const bool branch_taken_0x1783c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1783C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1783C4u;
        // 0x1783c8: 0xac621044  sw          $v0, 0x1044($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1783c4) {
            ctx->pc = 0x1783D0u;
            goto label_1783d0;
        }
    }
    ctx->pc = 0x1783CCu;
    // 0x1783cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1783ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1783d0:
    // 0x1783d0: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1783D0u;
    SET_GPR_U32(ctx, 31, 0x1783D8u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1783D0u, 0x1783D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1783D8u;
label_1783d8:
    // 0x1783d8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1783d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1783dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1783dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1783e0: 0x24a57978  addiu       $a1, $a1, 0x7978
    ctx->pc = 0x1783e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31096));
    // 0x1783e4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1783E4u;
    {
        const bool branch_taken_0x1783e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1783E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1783E4u;
        // 0x1783e8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1783e4) {
            ctx->pc = 0x1783F8u;
            goto label_1783f8;
        }
    }
    ctx->pc = 0x1783ECu;
    // 0x1783ec: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1783ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1783f0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1783F0u;
    SET_GPR_U32(ctx, 31, 0x1783F8u);
    ctx->pc = 0x1783F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1783F0u;
    // 0x1783f4: 0x8c440024  lw          $a0, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1783F0u, 0x1783F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1783F8u;
label_1783f8:
    // 0x1783f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1783f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1783fc: 0x26041020  addiu       $a0, $s0, 0x1020
    ctx->pc = 0x1783fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4128));
    // 0x178400: 0xc067260  jal         func_19C980
    ctx->pc = 0x178400u;
    SET_GPR_U32(ctx, 31, 0x178408u);
    ctx->pc = 0x178404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178400u;
    // 0x178404: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C980u, 0x178400u, 0x178408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178408u;
label_178408:
    // 0x178408: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x178408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17840c: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x17840cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x178410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178414: 0x8c650024  lw          $a1, 0x24($v1)
    ctx->pc = 0x178414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x178418: 0x26080020  addiu       $t0, $s0, 0x20
    ctx->pc = 0x178418u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x17841c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x17841cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178420: 0x24c67ff0  addiu       $a2, $a2, 0x7FF0
    ctx->pc = 0x178420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32752));
    // 0x178424: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x178424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x178428: 0x24090400  addiu       $t1, $zero, 0x400
    ctx->pc = 0x178428u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x17842c: 0xc068620  jal         func_1A1880
    ctx->pc = 0x17842Cu;
    SET_GPR_U32(ctx, 31, 0x178434u);
    ctx->pc = 0x178430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17842Cu;
    // 0x178430: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1880u, 0x17842Cu, 0x178434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178434u;
label_178434:
    // 0x178434: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x178434u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x178438: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178438u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17843c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17843cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178440: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x178440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178444: 0x3e00008  jr          $ra
    ctx->pc = 0x178444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178444u;
        // 0x178448: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17844Cu;
}

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

// Function: WcdManReadThreadCD__FP7WcCdManP19CD_READ_THREAD_WORK
// Address: 0x1787e0 - 0x178860
void WcdManReadThreadCD__FP7WcCdManP19CD_READ_THREAD_WORK_0x1787e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WcdManReadThreadCD__FP7WcCdManP19CD_READ_THREAD_WORK_0x1787e0");
#endif

    switch (ctx->pc) {
        case 0x178800u: goto label_178800;
        case 0x17884cu: goto label_17884c;
        default: break;
    }

    ctx->pc = 0x1787e0u;

    // 0x1787e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1787e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1787e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1787e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1787e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1787e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1787ec: 0x24a41024  addiu       $a0, $a1, 0x1024
    ctx->pc = 0x1787ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4132));
    // 0x1787f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1787f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1787f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1787f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1787f8: 0xc05e218  jal         func_178860
    ctx->pc = 0x1787F8u;
    SET_GPR_U32(ctx, 31, 0x178800u);
    ctx->pc = 0x1787FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1787F8u;
    // 0x1787fc: 0x24b11020  addiu       $s1, $a1, 0x1020 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178860u, 0x1787F8u, 0x178800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178800u;
label_178800:
    // 0x178800: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x178800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178804: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x178804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x178808: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x178808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x17880c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17880cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x178810: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x178810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x178814: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x178814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178818: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x178818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x17881c: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17881Cu;
    {
        const bool branch_taken_0x17881c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x178820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17881Cu;
        // 0x178820: 0x26101048  addiu       $s0, $s0, 0x1048 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17881c) {
            ctx->pc = 0x178840u;
            goto label_178840;
        }
    }
    ctx->pc = 0x178824u;
    // 0x178824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178828: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178828u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17882c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17882cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178830: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x178830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178834: 0x805e21e  j           func_178878
    ctx->pc = 0x178834u;
    ctx->pc = 0x178838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178834u;
    // 0x178838: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178878u;
    WCdManFileSeekCD__FP16W_CDMAN_CD_CACHEP15CD_READ_COMMAND_0x178878(rdram, ctx, runtime); return;
    ctx->pc = 0x17883Cu;
    // 0x17883c: 0x0  nop
    ctx->pc = 0x17883cu;
    // NOP
label_178840:
    // 0x178840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178844: 0xc05e240  jal         func_178900
    ctx->pc = 0x178844u;
    SET_GPR_U32(ctx, 31, 0x17884Cu);
    ctx->pc = 0x178848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178844u;
    // 0x178848: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178900u, 0x178844u, 0x17884Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17884Cu;
label_17884c:
    // 0x17884c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17884cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178850: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178854: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x178854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178858: 0x3e00008  jr          $ra
    ctx->pc = 0x178858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178858u;
        // 0x17885c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178860u;
}

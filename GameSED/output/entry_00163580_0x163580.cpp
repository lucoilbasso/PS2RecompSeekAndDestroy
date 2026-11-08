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

// Function: entry_00163580
// Address: 0x163580 - 0x1635d0
void entry_00163580_0x163580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163580_0x163580");
#endif

    switch (ctx->pc) {
        case 0x163598u: goto label_163598;
        case 0x1635a4u: goto label_1635a4;
        default: break;
    }

    ctx->pc = 0x163580u;

label_163580:
    // 0x163580: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x163580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_163584:
    // 0x163584: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x163584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_163588:
    // 0x163588: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x163588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_16358c:
    // 0x16358c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x16358cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_163590:
    // 0x163590: 0xc04110c  jal         func_104430
label_163594:
    if (ctx->pc == 0x163594u) {
        ctx->pc = 0x163594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163590u;
        // 0x163594: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163598u;
        goto label_163598;
    }
    ctx->pc = 0x163590u;
    SET_GPR_U32(ctx, 31, 0x163598u);
    ctx->pc = 0x163594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163590u;
    // 0x163594: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x163590u, 0x163598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163598u;
label_163598:
    // 0x163598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16359c:
    // 0x16359c: 0xc06a26e  jal         func_1A89B8
label_1635a0:
    if (ctx->pc == 0x1635A0u) {
        ctx->pc = 0x1635A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16359Cu;
        // 0x1635a0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1635A4u;
        goto label_1635a4;
    }
    ctx->pc = 0x16359Cu;
    SET_GPR_U32(ctx, 31, 0x1635A4u);
    ctx->pc = 0x1635A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16359Cu;
    // 0x1635a0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16359Cu, 0x1635A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1635A4u;
label_1635a4:
    // 0x1635a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1635a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1635a8:
    // 0x1635a8: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1635a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1635ac:
    // 0x1635ac: 0x104000c7  beqz        $v0, . + 4 + (0xC7 << 2)
label_1635b0:
    if (ctx->pc == 0x1635B0u) {
        ctx->pc = 0x1635B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1635ACu;
        // 0x1635b0: 0x265101f0  addiu       $s1, $s2, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1635B4u;
        goto label_1635b4;
    }
    ctx->pc = 0x1635ACu;
    {
        const bool branch_taken_0x1635ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1635B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1635ACu;
        // 0x1635b0: 0x265101f0  addiu       $s1, $s2, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1635ac) {
            ctx->pc = 0x1638CCu;
            return;
        }
    }
    ctx->pc = 0x1635B4u;
label_1635b4:
    // 0x1635b4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1635b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1635b8:
    // 0x1635b8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1635b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1635bc:
    // 0x1635bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1635bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1635c0:
    // 0x1635c0: 0x8c636f30  lw          $v1, 0x6F30($v1)
    ctx->pc = 0x1635c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28464)));
label_1635c4:
    // 0x1635c4: 0x600008  jr          $v1
label_1635c8:
    if (ctx->pc == 0x1635C8u) {
        ctx->pc = 0x1635CCu;
        goto label_1635cc;
    }
    ctx->pc = 0x1635C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1635C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1635CCu;
label_1635cc:
    // 0x1635cc: 0x0  nop
    ctx->pc = 0x1635ccu;
    // NOP
    ctx->pc = 0x1635d0u;
}

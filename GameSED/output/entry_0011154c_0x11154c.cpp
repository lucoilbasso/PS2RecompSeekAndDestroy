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

// Function: entry_0011154c
// Address: 0x11154c - 0x1115a0
void entry_0011154c_0x11154c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011154c_0x11154c");
#endif

    switch (ctx->pc) {
        case 0x111560u: goto label_111560;
        default: break;
    }

    ctx->pc = 0x11154cu;

label_11154c:
    // 0x11154c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x11154cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_111550:
    // 0x111550: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x111550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_111554:
    // 0x111554: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x111554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_111558:
    // 0x111558: 0xc06a26e  jal         func_1A89B8
label_11155c:
    if (ctx->pc == 0x11155Cu) {
        ctx->pc = 0x11155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111558u;
        // 0x11155c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111560u;
        goto label_111560;
    }
    ctx->pc = 0x111558u;
    SET_GPR_U32(ctx, 31, 0x111560u);
    ctx->pc = 0x11155Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111558u;
    // 0x11155c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x111558u, 0x111560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111560u;
label_111560:
    // 0x111560: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x111560u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_111564:
    // 0x111564: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x111564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_111568:
    // 0x111568: 0x121a03  sra         $v1, $s2, 8
    ctx->pc = 0x111568u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 8));
label_11156c:
    // 0x11156c: 0x325200ff  andi        $s2, $s2, 0xFF
    ctx->pc = 0x11156cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_111570:
    // 0x111570: 0x8c55b830  lw          $s5, -0x47D0($v0)
    ctx->pc = 0x111570u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_111574:
    // 0x111574: 0x2e42000d  sltiu       $v0, $s2, 0xD
    ctx->pc = 0x111574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_111578:
    // 0x111578: 0x30760001  andi        $s6, $v1, 0x1
    ctx->pc = 0x111578u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_11157c:
    // 0x11157c: 0x8f938d10  lw          $s3, -0x72F0($gp)
    ctx->pc = 0x11157cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_111580:
    // 0x111580: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
label_111584:
    if (ctx->pc == 0x111584u) {
        ctx->pc = 0x111584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111580u;
        // 0x111584: 0x8eb10040  lw          $s1, 0x40($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111588u;
        goto label_111588;
    }
    ctx->pc = 0x111580u;
    {
        const bool branch_taken_0x111580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111580u;
        // 0x111584: 0x8eb10040  lw          $s1, 0x40($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111580) {
            ctx->pc = 0x1117A0u;
            return;
        }
    }
    ctx->pc = 0x111588u;
label_111588:
    // 0x111588: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x111588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_11158c:
    // 0x11158c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x11158cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_111590:
    // 0x111590: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x111590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_111594:
    // 0x111594: 0x8c634000  lw          $v1, 0x4000($v1)
    ctx->pc = 0x111594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16384)));
label_111598:
    // 0x111598: 0x600008  jr          $v1
label_11159c:
    if (ctx->pc == 0x11159Cu) {
        ctx->pc = 0x1115A0u;
        goto label_fallthrough_0x111598;
    }
    ctx->pc = 0x111598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111598u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x111598:
    ctx->pc = 0x1115A0u;
}

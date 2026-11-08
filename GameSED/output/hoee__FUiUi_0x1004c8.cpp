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

// Function: hoee__FUiUi
// Address: 0x1004c8 - 0x100544
void hoee__FUiUi_0x1004c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hoee__FUiUi_0x1004c8");
#endif

    switch (ctx->pc) {
        case 0x100518u: goto label_100518;
        case 0x10052cu: goto label_10052c;
        default: break;
    }

    ctx->pc = 0x1004c8u;

    // 0x1004c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1004c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1004cc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1004ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1004d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1004d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1004d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1004d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1004d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1004dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1004dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004e0: 0x230182b  sltu        $v1, $s1, $s0
    ctx->pc = 0x1004e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1004e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1004e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1004e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1004e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1004ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004f0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1004F0u;
    {
        const bool branch_taken_0x1004f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1004F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1004F0u;
        // 0x1004f4: 0x24441918  addiu       $a0, $v0, 0x1918 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1004f0) {
            ctx->pc = 0x100508u;
            goto label_100508;
        }
    }
    ctx->pc = 0x1004F8u;
    // 0x1004f8: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1004f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1004fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1004FCu;
    {
        const bool branch_taken_0x1004fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1004FCu;
        // 0x100500: 0x2447cf20  addiu       $a3, $v0, -0x30E0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1004fc) {
            ctx->pc = 0x100510u;
            goto label_100510;
        }
    }
    ctx->pc = 0x100504u;
    // 0x100504: 0x0  nop
    ctx->pc = 0x100504u;
    // NOP
label_100508:
    // 0x100508: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x100508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x10050c: 0x2447cf28  addiu       $a3, $v0, -0x30D8
    ctx->pc = 0x10050cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954792));
label_100510:
    // 0x100510: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x100510u;
    SET_GPR_U32(ctx, 31, 0x100518u);
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x100510u, 0x100518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100518u;
label_100518:
    // 0x100518: 0x11283e  dsrl32      $a1, $s1, 0
    ctx->pc = 0x100518u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x10051c: 0x10303e  dsrl32      $a2, $s0, 0
    ctx->pc = 0x10051cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x100520: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x100520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x100524: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x100524u;
    SET_GPR_U32(ctx, 31, 0x10052Cu);
    ctx->pc = 0x100528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100524u;
    // 0x100528: 0x24841930  addiu       $a0, $a0, 0x1930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x100524u, 0x10052Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10052Cu;
label_10052c:
    // 0x10052c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x10052cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x100530: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x100530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100534: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x100534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100538: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x100538u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10053c: 0x3e00008  jr          $ra
    ctx->pc = 0x10053Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10053Cu;
        // 0x100540: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10053Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100544u;
}

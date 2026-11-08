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

// Function: entry_0010f460
// Address: 0x10f460 - 0x10f4a0
void entry_0010f460_0x10f460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f460_0x10f460");
#endif

    switch (ctx->pc) {
        case 0x10f474u: goto label_10f474;
        case 0x10f47cu: goto label_10f47c;
        case 0x10f498u: goto label_10f498;
        default: break;
    }

    ctx->pc = 0x10f460u;

    // 0x10f460: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x10f460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10f464: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x10f464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10f468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f46c: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x10F46Cu;
    SET_GPR_U32(ctx, 31, 0x10F474u);
    ctx->pc = 0x10F470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F46Cu;
    // 0x10f470: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x10F46Cu, 0x10F474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F474u;
label_10f474:
    // 0x10f474: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x10F474u;
    SET_GPR_U32(ctx, 31, 0x10F47Cu);
    ctx->pc = 0x10F478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F474u;
    // 0x10f478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x10F474u, 0x10F47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F47Cu;
label_10f47c:
    // 0x10f47c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10f47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f480: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10f480u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x10f484: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10f484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f488: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10F488u;
    {
        const bool branch_taken_0x10f488 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F488u;
        // 0x10f48c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f488) {
            ctx->pc = 0x10F4A0u;
            return;
        }
    }
    ctx->pc = 0x10F490u;
    // 0x10f490: 0xc064584  jal         func_191610
    ctx->pc = 0x10F490u;
    SET_GPR_U32(ctx, 31, 0x10F498u);
    ctx->pc = 0x191610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191610u, 0x10F490u, 0x10F498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F498u;
label_10f498:
    // 0x10f498: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10F498u;
    {
        const bool branch_taken_0x10f498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F498u;
        // 0x10f49c: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f498) {
            ctx->pc = 0x10F4ACu;
            return;
        }
    }
    ctx->pc = 0x10F4A0u;
}

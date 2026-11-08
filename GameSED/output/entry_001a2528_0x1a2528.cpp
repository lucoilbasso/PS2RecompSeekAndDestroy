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

// Function: entry_001a2528
// Address: 0x1a2528 - 0x1a2550
void entry_001a2528_0x1a2528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2528_0x1a2528");
#endif

    switch (ctx->pc) {
        case 0x1a2548u: goto label_1a2548;
        default: break;
    }

    ctx->pc = 0x1a2528u;

label_1a2528:
    // 0x1a2528: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1a2528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a252c:
    // 0x1a252c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1a252cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1a2530:
    // 0x1a2530: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a2530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a2534:
    // 0x1a2534: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a2538:
    if (ctx->pc == 0x1A2538u) {
        ctx->pc = 0x1A2538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2534u;
        // 0x1a2538: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A253Cu;
        goto label_1a253c;
    }
    ctx->pc = 0x1A2534u;
    {
        const bool branch_taken_0x1a2534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2534u;
        // 0x1a2538: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2534) {
            ctx->pc = 0x1A2550u;
            return;
        }
    }
    ctx->pc = 0x1A253Cu;
label_1a253c:
    // 0x1a253c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a253cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a2540:
    // 0x1a2540: 0x40f809  jalr        $v0
label_1a2544:
    if (ctx->pc == 0x1A2544u) {
        ctx->pc = 0x1A2544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2540u;
        // 0x1a2544: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2548u;
        goto label_1a2548;
    }
    ctx->pc = 0x1A2540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2548u);
        ctx->pc = 0x1A2544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2540u;
        // 0x1a2544: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2540u, 0x1A2548u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2548u;
label_1a2548:
    // 0x1a2548: 0x1000000d  b           . + 4 + (0xD << 2)
label_1a254c:
    if (ctx->pc == 0x1A254Cu) {
        ctx->pc = 0x1A254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2548u;
        // 0x1a254c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2550u;
        goto label_fallthrough_0x1a2548;
    }
    ctx->pc = 0x1A2548u;
    {
        const bool branch_taken_0x1a2548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2548u;
        // 0x1a254c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2548) {
            ctx->pc = 0x1A2580u;
            return;
        }
    }
label_fallthrough_0x1a2548:
    ctx->pc = 0x1A2550u;
}

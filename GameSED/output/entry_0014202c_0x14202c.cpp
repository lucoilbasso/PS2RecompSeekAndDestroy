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

// Function: entry_0014202c
// Address: 0x14202c - 0x14205c
void entry_0014202c_0x14202c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014202c_0x14202c");
#endif

    switch (ctx->pc) {
        case 0x142044u: goto label_142044;
        default: break;
    }

    ctx->pc = 0x14202cu;

    // 0x14202c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x14202cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x142030: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x142034: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x142034u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x142038: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x142038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14203c: 0xc061a46  jal         func_186918
    ctx->pc = 0x14203Cu;
    SET_GPR_U32(ctx, 31, 0x142044u);
    ctx->pc = 0x142040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14203Cu;
    // 0x142040: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x14203Cu, 0x142044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142044u;
label_142044:
    // 0x142044: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x142044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142048: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x142048u;
    {
        const bool branch_taken_0x142048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142048u;
        // 0x14204c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142048) {
            ctx->pc = 0x142064u;
            return;
        }
    }
    ctx->pc = 0x142050u;
    // 0x142050: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x142050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x142054: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x142054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x142058: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x142058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
    ctx->pc = 0x14205cu;
}
